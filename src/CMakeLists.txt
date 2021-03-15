
add_library(point point.cpp include/point.h)


target_include_directories(point PUBLIC "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
      "$<INSTALL_INTERFACE:$<INSTALL_PREFIX>/${CMAKE_INSTALL_INCLUDEDIR}>")

install(TARGETS    point
    EXPORT           ${PROJECT_NAME}
    COMPONENT        runtime
    LIBRARY          DESTINATION "${CMAKE_INSTALL_LIBDIR}"                                                    COMPONENT shlib
    ARCHIVE          DESTINATION "${CMAKE_INSTALL_LIBDIR}"                                                    COMPONENT lib
    RUNTIME          DESTINATION "${CMAKE_INSTALL_BINDIR}"                                                    COMPONENT bin
    PUBLIC_HEADER    DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}/BipedalLocomotion/bindings/${installation_folder}"       COMPONENT dev
    PRIVATE_HEADER   DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}/BipedalLocomotion/bindings/${installation_folder}/impl"  COMPONENT dev)



add_library(line line.cpp include/line.h)

target_link_libraries(line PUBLIC point)

target_include_directories(line PUBLIC "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
      "$<INSTALL_INTERFACE:$<INSTALL_PREFIX>/${CMAKE_INSTALL_INCLUDEDIR}>")

install(TARGETS    line
    EXPORT           ${PROJECT_NAME}
    COMPONENT        runtime
    LIBRARY          DESTINATION "${CMAKE_INSTALL_LIBDIR}"                                                    COMPONENT shlib
    ARCHIVE          DESTINATION "${CMAKE_INSTALL_LIBDIR}"                                                    COMPONENT lib
    RUNTIME          DESTINATION "${CMAKE_INSTALL_BINDIR}"                                                    COMPONENT bin
    PUBLIC_HEADER    DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}/BipedalLocomotion/bindings/${installation_folder}"       COMPONENT dev
    PRIVATE_HEADER   DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}/BipedalLocomotion/bindings/${installation_folder}/impl"  COMPONENT dev)
