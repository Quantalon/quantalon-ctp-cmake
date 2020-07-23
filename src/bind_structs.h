#ifndef BIND_STRUCTS_H
#define BIND_STRUCTS_H

#include <pybind11/pybind11.h>
#include "ThostFtdcUserApiStruct.h"

namespace py = pybind11;

void bind_structs(py::module &);

#endif //BIND_STRUCTS_H
