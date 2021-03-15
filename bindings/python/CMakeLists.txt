pybind11_add_module(point_pybind MODULE  point_bindings.cpp)

target_link_libraries(point_pybind PRIVATE point)

set_target_properties(point_pybind PROPERTIES
  LIBRARY_OUTPUT_DIRECTORY "${point_PYTHON_PACKAGE}"
  OUTPUT_NAME "point")

install(TARGETS point_pybind DESTINATION ${PYTHON_INSTDIR}/point)

pybind11_add_module(line_pybind MODULE
  line_bindings.cpp
  )

target_link_libraries(line_pybind PRIVATE line)

set_target_properties(line_pybind PROPERTIES
  LIBRARY_OUTPUT_DIRECTORY "${line_PYTHON_PACKAGE}"
  OUTPUT_NAME "line")

install(TARGETS line_pybind DESTINATION ${PYTHON_INSTDIR}/line)
