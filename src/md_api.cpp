#include "md_api.h"


void MdApi::CreateApi(const std::string &FlowPath) {
    this->queue = new DispatchQueue(1);
    this->api = CThostFtdcMdApi::CreateFtdcMdApi(FlowPath.c_str());
    this->api->RegisterSpi(this);
}

std::string MdApi::GetApiVersion() {
    return CThostFtdcMdApi::GetApiVersion();
}

void MdApi::Release() {
    this->api->Release();
}

void MdApi::Init() {
    this->api->Init();
}

int MdApi::Join() {
    return this->api->Join();
}

std::string MdApi::GetTradingDay() {
    return this->api->GetTradingDay();
}

void MdApi::RegisterFront(const std::string &FrontAddress) {
    this->api->RegisterFront(const_cast<char *>(FrontAddress.c_str()));
}

void MdApi::RegisterNameServer(const std::string &NsAddress) {
    this->api->RegisterNameServer(const_cast<char *>(NsAddress.c_str()));
}

void MdApi::RegisterFensUserInfo(CThostFtdcFensUserInfoField *FensUserInfo) {
    this->api->RegisterFensUserInfo(FensUserInfo);
}

int MdApi::SubscribeMarketData(const std::string &InstrumentID) {
    char *buffer = (char*)InstrumentID.c_str();
    char *req[1] = { buffer };
    return this->api->SubscribeMarketData(req, 1);
}

int MdApi::UnSubscribeMarketData(const std::string &InstrumentID) {
    char *buffer = (char*)InstrumentID.c_str();
    char *req[1] = { buffer };
    return this->api->UnSubscribeMarketData(req, 1);
}

int MdApi::SubscribeForQuoteRsp(const std::string &InstrumentID) {
    char *buffer = (char*)InstrumentID.c_str();
    char *req[1] = { buffer };
    return this->api->SubscribeForQuoteRsp(req, 1);
}

int MdApi::UnSubscribeForQuoteRsp(const std::string &InstrumentID) {
    char *buffer = (char*)InstrumentID.c_str();
    char *req[1] = { buffer };
    return this->api->UnSubscribeForQuoteRsp(req, 1);
}


// Req Methods
int MdApi::ReqUserLogin(CThostFtdcReqUserLoginField *pReqUserLoginField, int nRequestID) {
    return this->api->ReqUserLogin(pReqUserLoginField, nRequestID);
}

int MdApi::ReqUserLogout(CThostFtdcUserLogoutField *pUserLogout, int nRequestID) {
    return this->api->ReqUserLogout(pUserLogout, nRequestID);
}


// On Methods
void MdApi::OnFrontConnected() {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnFrontConnected();
    });
};

void MdApi::OnFrontDisconnected(int nReason) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnFrontDisconnected(nReason);
    });
};

void MdApi::OnHeartBeatWarning(int nTimeLapse) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnHeartBeatWarning(nTimeLapse);
    });
};

void MdApi::OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspUserLogin(pRspUserLogin, pRspInfo, nRequestID, bIsLast);
    });
};

void MdApi::OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspUserLogout(pUserLogout, pRspInfo, nRequestID, bIsLast);
    });
};

void MdApi::OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspError(pRspInfo, nRequestID, bIsLast);
    });
};

void MdApi::OnRspSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspSubMarketData(pSpecificInstrument, pRspInfo, nRequestID, bIsLast);
    });
};

void MdApi::OnRspUnSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspUnSubMarketData(pSpecificInstrument, pRspInfo, nRequestID, bIsLast);
    });
};

void MdApi::OnRspSubForQuoteRsp(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspSubForQuoteRsp(pSpecificInstrument, pRspInfo, nRequestID, bIsLast);
    });
};

void MdApi::OnRspUnSubForQuoteRsp(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspUnSubForQuoteRsp(pSpecificInstrument, pRspInfo, nRequestID, bIsLast);
    });
};

void MdApi::OnRtnDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRtnDepthMarketData(pDepthMarketData);
    });
};

void MdApi::OnRtnForQuoteRsp(CThostFtdcForQuoteRspField *pForQuoteRsp) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRtnForQuoteRsp(pForQuoteRsp);
    });
};

