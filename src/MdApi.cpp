#include <pybind11/pybind11.h>

#include "MdApi.h"

namespace py = pybind11;


void MdApi::createApi(std::string pszFlowPath) {
    this->api = CThostFtdcMdApi::CreateFtdcMdApi(pszFlowPath.c_str());
    this->api->RegisterSpi(this);
}

std::string MdApi::getApiVersion() {
    std::string version = this->api->GetApiVersion();
    return version;
}

std::string MdApi::getTradingDay() {
    std::string trading_day = this->api->GetTradingDay();
    return trading_day;
}

void MdApi::registerFront(std::string pszFrontAddress)
{
    this->api->RegisterFront(const_cast<char *>(pszFrontAddress.c_str()));
}



//void MdApi::onFrontConnected()
//{
//    try
//    {
//        PYBIND11_OVERLOAD(void, MdApi, onFrontConnected);
//    }
//        catch (const py::error_already_set &e)
//    {
//        std::cout << e.what() << std::endl;
//    }
//};


//////////////////////////////


void MdApi::OnFrontConnected()
{
    // 这里进入任务队列
    std::cout << "MdApi::OnFrontConnected" << std::endl;
};

void MdApi::OnFrontDisconnected(int nReason)
{
    std::cout << "MdApi::OnFrontDisconnected" << std::endl;
}