#include <pybind11/pybind11.h>
#include "Theodora/Theodora.hpp"
#include "Theodora/tensor.hpp"

namespace py = pybind11;

PYBIND11_MODULE(_core, m) {
  m.doc() = "Theodora C++ bindings";

  m.def(
        "add",
        &theodora::add,
        py::arg("a"),
        py::arg("b"),
        "Add two integers."
    );

  m.def(
        "subtract",
        &theodora::subtract,
        py::arg("a"),
        py::arg("b"),
        "Subtract two integers."
    );

  py::class_<theodora::Tensor>(m, "Tensor")
    .def(py::init<int>(),
         py::arg("value"))
    .def("value", &theodora::Tensor::value);
}
