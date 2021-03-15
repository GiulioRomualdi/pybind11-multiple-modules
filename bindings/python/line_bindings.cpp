#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include <line.h>
#include <point.h>

namespace py = pybind11;

PYBIND11_MODULE(line, m) {

    py::module::import("point");
    py::class_<Line>(m, "line")
            .def(py::init<Point, Point>());

}
