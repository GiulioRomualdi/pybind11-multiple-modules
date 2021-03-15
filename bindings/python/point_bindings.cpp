#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <point.h>

PYBIND11_MODULE(point, m) {

    m.doc() = "point module";
   py::class_<Point>(m, "Point")
           .def(py::init<double, double, double>())
       .def("get_x", &Point::getX);

}
