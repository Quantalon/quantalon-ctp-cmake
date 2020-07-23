#include "bind_md_api.h"

void bind_md_api(py::module &m) {
    py::class_<MdApi, PyMdApi> md_api(m, "MdApi", py::module_local());
    md_api
            .def(py::init<>())
            .def("CreateApi", &MdApi::CreateApi)
            .def_static("GetApiVersion", &MdApi::GetApiVersion)
            .def("Release", &MdApi::Release)
            .def("Init", &MdApi::Init)
            .def("Join", &MdApi::Join)
            .def("GetTradingDay", &MdApi::GetTradingDay)
            .def("RegisterFront", &MdApi::RegisterFront)
            .def("RegisterNameServer", &MdApi::RegisterNameServer)
            .def("RegisterFensUserInfo", &MdApi::RegisterFensUserInfo)
            .def("SubscribeMarketData", &MdApi::SubscribeMarketData)
            .def("UnSubscribeMarketData", &MdApi::UnSubscribeMarketData)
            .def("SubscribeForQuoteRsp", &MdApi::SubscribeForQuoteRsp)
            .def("UnSubscribeForQuoteRsp", &MdApi::UnSubscribeForQuoteRsp)

            // Req Methods
            .def("ReqUserLogin", &MdApi::ReqUserLogin)
            .def("ReqUserLogout", &MdApi::ReqUserLogout)
            
            // On Methods
            .def("OnFrontConnected", &MdApi::PyOnFrontConnected)
            .def("OnFrontDisconnected", &MdApi::PyOnFrontDisconnected)
            .def("OnHeartBeatWarning", &MdApi::PyOnHeartBeatWarning)
            .def("OnRspUserLogin", &MdApi::PyOnRspUserLogin)
            .def("OnRspUserLogout", &MdApi::PyOnRspUserLogout)
            .def("OnRspError", &MdApi::PyOnRspError)
            .def("OnRspSubMarketData", &MdApi::PyOnRspSubMarketData)
            .def("OnRspUnSubMarketData", &MdApi::PyOnRspUnSubMarketData)
            .def("OnRspSubForQuoteRsp", &MdApi::PyOnRspSubForQuoteRsp)
            .def("OnRspUnSubForQuoteRsp", &MdApi::PyOnRspUnSubForQuoteRsp)
            .def("OnRtnDepthMarketData", &MdApi::PyOnRtnDepthMarketData)
            .def("OnRtnForQuoteRsp", &MdApi::PyOnRtnForQuoteRsp)
            
            ;
}