#include <pybind11/pybind11.h>
#include "Theodora/Theodora.hpp"

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
}
