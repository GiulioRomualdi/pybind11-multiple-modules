find_package(Python3 3.6 COMPONENTS Interpreter Development QUIET)
find_package(pybind11 CONFIG QUIET)

set(PYTHON_INSTDIR
  ${CMAKE_INSTALL_LIBDIR}/python3/dist-packages)

# Folder of the Python package within the build tree.
# It is used for the Python tests.
set(point_PYTHON_PACKAGE "${CMAKE_BINARY_DIR}/point")
set(line_PYTHON_PACKAGE "${CMAKE_BINARY_DIR}/line")

# Add the bindings directory
add_subdirectory(python)

# Create the __init__.py file
file(GENERATE
  OUTPUT "${point_PYTHON_PACKAGE}/__init__.py"
  CONTENT "from . import point")

# Install the __init__.py file
install(FILES "${point_PYTHON_PACKAGE}/__init__.py"
  DESTINATION ${PYTHON_INSTDIR}/point)

# Create the __init__.py file
file(GENERATE
  OUTPUT "${line_PYTHON_PACKAGE}/__init__.py"
  CONTENT "from . import line")

# Install the __init__.py file
install(FILES "${line_PYTHON_PACKAGE}/__init__.py"
  DESTINATION ${PYTHON_INSTDIR}/line)
