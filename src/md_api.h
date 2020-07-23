#ifndef MD_API_H
#define MD_API_H

#include <iostream>
#include <string>
#include <pybind11/pybind11.h>

#include "dispatch_queue.h"
#include "ThostFtdcMdApi.h"


class MdApi : public CThostFtdcMdSpi {
private:
    CThostFtdcMdApi *api;
    DispatchQueue *queue;

public:
    void CreateApi(const std::string &FlowPath);

    static std::string GetApiVersion();

    void Release();

    void Init();

    int Join();

    std::string GetTradingDay();

    void RegisterFront(const std::string &FrontAddress);

    void RegisterNameServer(const std::string &NsAddress);

    void RegisterFensUserInfo(CThostFtdcFensUserInfoField *FensUserInfo);

    int SubscribeMarketData(const std::string &InstrumentID);

    int UnSubscribeMarketData(const std::string &InstrumentID);

    int SubscribeForQuoteRsp(const std::string &InstrumentID);

    int UnSubscribeForQuoteRsp(const std::string &InstrumentID);

    // Req Methods
    int ReqUserLogin(CThostFtdcReqUserLoginField *pReqUserLoginField, int nRequestID);

    int ReqUserLogout(CThostFtdcUserLogoutField *pUserLogout, int nRequestID);

    // On Methods
    void OnFrontConnected() override;

    void OnFrontDisconnected(int nReason) override;

    void OnHeartBeatWarning(int nTimeLapse) override;

    void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspUnSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspSubForQuoteRsp(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspUnSubForQuoteRsp(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRtnDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData) override;

    void OnRtnForQuoteRsp(CThostFtdcForQuoteRspField *pForQuoteRsp) override;

    // PyOn Methods
    virtual void PyOnFrontConnected() = 0;

    virtual void PyOnFrontDisconnected(int nReason) = 0;

    virtual void PyOnHeartBeatWarning(int nTimeLapse) = 0;

    virtual void PyOnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspUnSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspSubForQuoteRsp(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspUnSubForQuoteRsp(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRtnDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData) = 0;

    virtual void PyOnRtnForQuoteRsp(CThostFtdcForQuoteRspField *pForQuoteRsp) = 0;

    
};


namespace py = pybind11;

class PyMdApi final : public MdApi {
public:
    using MdApi::MdApi;

    void PyOnFrontConnected() override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    MdApi,
                    "OnFrontConnected",
                    PyOnFrontConnected,
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnFrontDisconnected(int nReason) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    MdApi,
                    "OnFrontDisconnected",
                    PyOnFrontDisconnected,
                    nReason
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnHeartBeatWarning(int nTimeLapse) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    MdApi,
                    "OnHeartBeatWarning",
                    PyOnHeartBeatWarning,
                    nTimeLapse
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    MdApi,
                    "OnRspUserLogin",
                    PyOnRspUserLogin,
                    pRspUserLogin,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    MdApi,
                    "OnRspUserLogout",
                    PyOnRspUserLogout,
                    pUserLogout,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    MdApi,
                    "OnRspError",
                    PyOnRspError,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    MdApi,
                    "OnRspSubMarketData",
                    PyOnRspSubMarketData,
                    pSpecificInstrument,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspUnSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    MdApi,
                    "OnRspUnSubMarketData",
                    PyOnRspUnSubMarketData,
                    pSpecificInstrument,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspSubForQuoteRsp(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    MdApi,
                    "OnRspSubForQuoteRsp",
                    PyOnRspSubForQuoteRsp,
                    pSpecificInstrument,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspUnSubForQuoteRsp(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    MdApi,
                    "OnRspUnSubForQuoteRsp",
                    PyOnRspUnSubForQuoteRsp,
                    pSpecificInstrument,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRtnDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    MdApi,
                    "OnRtnDepthMarketData",
                    PyOnRtnDepthMarketData,
                    pDepthMarketData
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRtnForQuoteRsp(CThostFtdcForQuoteRspField *pForQuoteRsp) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    MdApi,
                    "OnRtnForQuoteRsp",
                    PyOnRtnForQuoteRsp,
                    pForQuoteRsp
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    
};

#endif //MD_API_H