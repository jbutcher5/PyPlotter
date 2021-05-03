#include <pybind11/pybind11.h>

namespace py = pybind11;

#include "graph.hpp"
#include "plotter.hpp"

PYBIND11_MODULE(PyPlotter, m){
  py::class_<Plotter>(m, "Plotter")
    .def(py::init<const char*, const int, const int>())
    .def("main_loop", &Plotter::MainLoop);

  py::class_<Graph>(m, "Graph")
    .def(py::init<const int, const int, const int, const int>())
    .def("draw", &Graph::Draw)
    .def("set_origin", &Graph::SetOrigin)
    .def("draw_axis", &Graph::DrawAxis)
    .def("draw_number", &Graph::DrawNumber)
    .def("calculate", &Graph::Calculate)
    .def("draw_points", &Graph::DrawPoints);
}
