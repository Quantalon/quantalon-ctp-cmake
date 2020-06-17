#include <iostream>
#include <pybind11/pybind11.h>

#include "MdApi.h"

namespace py = pybind11;

PYBIND11_MODULE(ctp, m) {
    py::class_<MdApi> md_api(m, "MdApi", py::module_local());
    md_api
        .def(py::init<>())
        .def("createApi", &MdApi::createApi)
        .def("getApiVersion", &MdApi::getApiVersion)
        .def("getTradingDay", &MdApi::getTradingDay)
        .def("registerFront", &MdApi::registerFront);
}