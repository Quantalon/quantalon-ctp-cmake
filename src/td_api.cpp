#include "td_api.h"


void TdApi::CreateApi(const std::string &pszFlowPath) {
    this->queue = new DispatchQueue(1);
    this->api = CThostFtdcTraderApi::CreateFtdcTraderApi(pszFlowPath.c_str());
    this->api->RegisterSpi(this);
}

std::string TdApi::GetApiVersion() {
    return CThostFtdcTraderApi::GetApiVersion();
}

void TdApi::Release() {
    this->api->Release();
}

void TdApi::Init() {
    this->api->Init();
}

int TdApi::Join() {
    return this->api->Join();
}

std::string TdApi::GetTradingDay() {
    return this->api->GetTradingDay();
}

void TdApi::RegisterFront(const std::string &FrontAddress) {
    this->api->RegisterFront(const_cast<char *>(FrontAddress.c_str()));
}

void TdApi::RegisterNameServer(const std::string &NsAddress) {
    this->api->RegisterNameServer(const_cast<char *>(NsAddress.c_str()));
}

void TdApi::RegisterFensUserInfo(CThostFtdcFensUserInfoField *FensUserInfo) {
    this->api->RegisterFensUserInfo(FensUserInfo);
}

int TdApi::RegisterUserSystemInfo(CThostFtdcUserSystemInfoField *UserSystemInfo) {
    return this->api->RegisterUserSystemInfo(UserSystemInfo);
}

int TdApi::SubmitUserSystemInfo(CThostFtdcUserSystemInfoField *UserSystemInfo) {
    return this->api->SubmitUserSystemInfo(UserSystemInfo);
}


// Req Methods
int TdApi::ReqAuthenticate(CThostFtdcReqAuthenticateField *pReqAuthenticateField, int nRequestID) {
    return this->api->ReqAuthenticate(pReqAuthenticateField, nRequestID);
}

int TdApi::ReqUserLogin(CThostFtdcReqUserLoginField *pReqUserLoginField, int nRequestID) {
    return this->api->ReqUserLogin(pReqUserLoginField, nRequestID);
}

int TdApi::ReqUserLogout(CThostFtdcUserLogoutField *pUserLogout, int nRequestID) {
    return this->api->ReqUserLogout(pUserLogout, nRequestID);
}

int TdApi::ReqUserPasswordUpdate(CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, int nRequestID) {
    return this->api->ReqUserPasswordUpdate(pUserPasswordUpdate, nRequestID);
}

int TdApi::ReqTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, int nRequestID) {
    return this->api->ReqTradingAccountPasswordUpdate(pTradingAccountPasswordUpdate, nRequestID);
}

int TdApi::ReqUserAuthMethod(CThostFtdcReqUserAuthMethodField *pReqUserAuthMethod, int nRequestID) {
    return this->api->ReqUserAuthMethod(pReqUserAuthMethod, nRequestID);
}

int TdApi::ReqGenUserCaptcha(CThostFtdcReqGenUserCaptchaField *pReqGenUserCaptcha, int nRequestID) {
    return this->api->ReqGenUserCaptcha(pReqGenUserCaptcha, nRequestID);
}

int TdApi::ReqGenUserText(CThostFtdcReqGenUserTextField *pReqGenUserText, int nRequestID) {
    return this->api->ReqGenUserText(pReqGenUserText, nRequestID);
}

int TdApi::ReqUserLoginWithCaptcha(CThostFtdcReqUserLoginWithCaptchaField *pReqUserLoginWithCaptcha, int nRequestID) {
    return this->api->ReqUserLoginWithCaptcha(pReqUserLoginWithCaptcha, nRequestID);
}

int TdApi::ReqUserLoginWithText(CThostFtdcReqUserLoginWithTextField *pReqUserLoginWithText, int nRequestID) {
    return this->api->ReqUserLoginWithText(pReqUserLoginWithText, nRequestID);
}

int TdApi::ReqUserLoginWithOTP(CThostFtdcReqUserLoginWithOTPField *pReqUserLoginWithOTP, int nRequestID) {
    return this->api->ReqUserLoginWithOTP(pReqUserLoginWithOTP, nRequestID);
}

int TdApi::ReqOrderInsert(CThostFtdcInputOrderField *pInputOrder, int nRequestID) {
    return this->api->ReqOrderInsert(pInputOrder, nRequestID);
}

int TdApi::ReqParkedOrderInsert(CThostFtdcParkedOrderField *pParkedOrder, int nRequestID) {
    return this->api->ReqParkedOrderInsert(pParkedOrder, nRequestID);
}

int TdApi::ReqParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, int nRequestID) {
    return this->api->ReqParkedOrderAction(pParkedOrderAction, nRequestID);
}

int TdApi::ReqOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction, int nRequestID) {
    return this->api->ReqOrderAction(pInputOrderAction, nRequestID);
}

int TdApi::ReqQueryMaxOrderVolume(CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume, int nRequestID) {
    return this->api->ReqQueryMaxOrderVolume(pQueryMaxOrderVolume, nRequestID);
}

int TdApi::ReqSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, int nRequestID) {
    return this->api->ReqSettlementInfoConfirm(pSettlementInfoConfirm, nRequestID);
}

int TdApi::ReqRemoveParkedOrder(CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, int nRequestID) {
    return this->api->ReqRemoveParkedOrder(pRemoveParkedOrder, nRequestID);
}

int TdApi::ReqRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction, int nRequestID) {
    return this->api->ReqRemoveParkedOrderAction(pRemoveParkedOrderAction, nRequestID);
}

int TdApi::ReqExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, int nRequestID) {
    return this->api->ReqExecOrderInsert(pInputExecOrder, nRequestID);
}

int TdApi::ReqExecOrderAction(CThostFtdcInputExecOrderActionField *pInputExecOrderAction, int nRequestID) {
    return this->api->ReqExecOrderAction(pInputExecOrderAction, nRequestID);
}

int TdApi::ReqForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, int nRequestID) {
    return this->api->ReqForQuoteInsert(pInputForQuote, nRequestID);
}

int TdApi::ReqQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, int nRequestID) {
    return this->api->ReqQuoteInsert(pInputQuote, nRequestID);
}

int TdApi::ReqQuoteAction(CThostFtdcInputQuoteActionField *pInputQuoteAction, int nRequestID) {
    return this->api->ReqQuoteAction(pInputQuoteAction, nRequestID);
}

int TdApi::ReqBatchOrderAction(CThostFtdcInputBatchOrderActionField *pInputBatchOrderAction, int nRequestID) {
    return this->api->ReqBatchOrderAction(pInputBatchOrderAction, nRequestID);
}

int TdApi::ReqOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField *pInputOptionSelfClose, int nRequestID) {
    return this->api->ReqOptionSelfCloseInsert(pInputOptionSelfClose, nRequestID);
}

int TdApi::ReqOptionSelfCloseAction(CThostFtdcInputOptionSelfCloseActionField *pInputOptionSelfCloseAction, int nRequestID) {
    return this->api->ReqOptionSelfCloseAction(pInputOptionSelfCloseAction, nRequestID);
}

int TdApi::ReqCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, int nRequestID) {
    return this->api->ReqCombActionInsert(pInputCombAction, nRequestID);
}

int TdApi::ReqQryOrder(CThostFtdcQryOrderField *pQryOrder, int nRequestID) {
    return this->api->ReqQryOrder(pQryOrder, nRequestID);
}

int TdApi::ReqQryTrade(CThostFtdcQryTradeField *pQryTrade, int nRequestID) {
    return this->api->ReqQryTrade(pQryTrade, nRequestID);
}

int TdApi::ReqQryInvestorPosition(CThostFtdcQryInvestorPositionField *pQryInvestorPosition, int nRequestID) {
    return this->api->ReqQryInvestorPosition(pQryInvestorPosition, nRequestID);
}

int TdApi::ReqQryTradingAccount(CThostFtdcQryTradingAccountField *pQryTradingAccount, int nRequestID) {
    return this->api->ReqQryTradingAccount(pQryTradingAccount, nRequestID);
}

int TdApi::ReqQryInvestor(CThostFtdcQryInvestorField *pQryInvestor, int nRequestID) {
    return this->api->ReqQryInvestor(pQryInvestor, nRequestID);
}

int TdApi::ReqQryTradingCode(CThostFtdcQryTradingCodeField *pQryTradingCode, int nRequestID) {
    return this->api->ReqQryTradingCode(pQryTradingCode, nRequestID);
}

int TdApi::ReqQryInstrumentMarginRate(CThostFtdcQryInstrumentMarginRateField *pQryInstrumentMarginRate, int nRequestID) {
    return this->api->ReqQryInstrumentMarginRate(pQryInstrumentMarginRate, nRequestID);
}

int TdApi::ReqQryInstrumentCommissionRate(CThostFtdcQryInstrumentCommissionRateField *pQryInstrumentCommissionRate, int nRequestID) {
    return this->api->ReqQryInstrumentCommissionRate(pQryInstrumentCommissionRate, nRequestID);
}

int TdApi::ReqQryExchange(CThostFtdcQryExchangeField *pQryExchange, int nRequestID) {
    return this->api->ReqQryExchange(pQryExchange, nRequestID);
}

int TdApi::ReqQryProduct(CThostFtdcQryProductField *pQryProduct, int nRequestID) {
    return this->api->ReqQryProduct(pQryProduct, nRequestID);
}

int TdApi::ReqQryInstrument(CThostFtdcQryInstrumentField *pQryInstrument, int nRequestID) {
    return this->api->ReqQryInstrument(pQryInstrument, nRequestID);
}

int TdApi::ReqQryDepthMarketData(CThostFtdcQryDepthMarketDataField *pQryDepthMarketData, int nRequestID) {
    return this->api->ReqQryDepthMarketData(pQryDepthMarketData, nRequestID);
}

int TdApi::ReqQrySettlementInfo(CThostFtdcQrySettlementInfoField *pQrySettlementInfo, int nRequestID) {
    return this->api->ReqQrySettlementInfo(pQrySettlementInfo, nRequestID);
}

int TdApi::ReqQryTransferBank(CThostFtdcQryTransferBankField *pQryTransferBank, int nRequestID) {
    return this->api->ReqQryTransferBank(pQryTransferBank, nRequestID);
}

int TdApi::ReqQryInvestorPositionDetail(CThostFtdcQryInvestorPositionDetailField *pQryInvestorPositionDetail, int nRequestID) {
    return this->api->ReqQryInvestorPositionDetail(pQryInvestorPositionDetail, nRequestID);
}

int TdApi::ReqQryNotice(CThostFtdcQryNoticeField *pQryNotice, int nRequestID) {
    return this->api->ReqQryNotice(pQryNotice, nRequestID);
}

int TdApi::ReqQrySettlementInfoConfirm(CThostFtdcQrySettlementInfoConfirmField *pQrySettlementInfoConfirm, int nRequestID) {
    return this->api->ReqQrySettlementInfoConfirm(pQrySettlementInfoConfirm, nRequestID);
}

int TdApi::ReqQryInvestorPositionCombineDetail(CThostFtdcQryInvestorPositionCombineDetailField *pQryInvestorPositionCombineDetail, int nRequestID) {
    return this->api->ReqQryInvestorPositionCombineDetail(pQryInvestorPositionCombineDetail, nRequestID);
}

int TdApi::ReqQryCFMMCTradingAccountKey(CThostFtdcQryCFMMCTradingAccountKeyField *pQryCFMMCTradingAccountKey, int nRequestID) {
    return this->api->ReqQryCFMMCTradingAccountKey(pQryCFMMCTradingAccountKey, nRequestID);
}

int TdApi::ReqQryEWarrantOffset(CThostFtdcQryEWarrantOffsetField *pQryEWarrantOffset, int nRequestID) {
    return this->api->ReqQryEWarrantOffset(pQryEWarrantOffset, nRequestID);
}

int TdApi::ReqQryInvestorProductGroupMargin(CThostFtdcQryInvestorProductGroupMarginField *pQryInvestorProductGroupMargin, int nRequestID) {
    return this->api->ReqQryInvestorProductGroupMargin(pQryInvestorProductGroupMargin, nRequestID);
}

int TdApi::ReqQryExchangeMarginRate(CThostFtdcQryExchangeMarginRateField *pQryExchangeMarginRate, int nRequestID) {
    return this->api->ReqQryExchangeMarginRate(pQryExchangeMarginRate, nRequestID);
}

int TdApi::ReqQryExchangeMarginRateAdjust(CThostFtdcQryExchangeMarginRateAdjustField *pQryExchangeMarginRateAdjust, int nRequestID) {
    return this->api->ReqQryExchangeMarginRateAdjust(pQryExchangeMarginRateAdjust, nRequestID);
}

int TdApi::ReqQryExchangeRate(CThostFtdcQryExchangeRateField *pQryExchangeRate, int nRequestID) {
    return this->api->ReqQryExchangeRate(pQryExchangeRate, nRequestID);
}

int TdApi::ReqQrySecAgentACIDMap(CThostFtdcQrySecAgentACIDMapField *pQrySecAgentACIDMap, int nRequestID) {
    return this->api->ReqQrySecAgentACIDMap(pQrySecAgentACIDMap, nRequestID);
}

int TdApi::ReqQryProductExchRate(CThostFtdcQryProductExchRateField *pQryProductExchRate, int nRequestID) {
    return this->api->ReqQryProductExchRate(pQryProductExchRate, nRequestID);
}

int TdApi::ReqQryProductGroup(CThostFtdcQryProductGroupField *pQryProductGroup, int nRequestID) {
    return this->api->ReqQryProductGroup(pQryProductGroup, nRequestID);
}

int TdApi::ReqQryMMInstrumentCommissionRate(CThostFtdcQryMMInstrumentCommissionRateField *pQryMMInstrumentCommissionRate, int nRequestID) {
    return this->api->ReqQryMMInstrumentCommissionRate(pQryMMInstrumentCommissionRate, nRequestID);
}

int TdApi::ReqQryMMOptionInstrCommRate(CThostFtdcQryMMOptionInstrCommRateField *pQryMMOptionInstrCommRate, int nRequestID) {
    return this->api->ReqQryMMOptionInstrCommRate(pQryMMOptionInstrCommRate, nRequestID);
}

int TdApi::ReqQryInstrumentOrderCommRate(CThostFtdcQryInstrumentOrderCommRateField *pQryInstrumentOrderCommRate, int nRequestID) {
    return this->api->ReqQryInstrumentOrderCommRate(pQryInstrumentOrderCommRate, nRequestID);
}

int TdApi::ReqQrySecAgentTradingAccount(CThostFtdcQryTradingAccountField *pQryTradingAccount, int nRequestID) {
    return this->api->ReqQrySecAgentTradingAccount(pQryTradingAccount, nRequestID);
}

int TdApi::ReqQrySecAgentCheckMode(CThostFtdcQrySecAgentCheckModeField *pQrySecAgentCheckMode, int nRequestID) {
    return this->api->ReqQrySecAgentCheckMode(pQrySecAgentCheckMode, nRequestID);
}

int TdApi::ReqQrySecAgentTradeInfo(CThostFtdcQrySecAgentTradeInfoField *pQrySecAgentTradeInfo, int nRequestID) {
    return this->api->ReqQrySecAgentTradeInfo(pQrySecAgentTradeInfo, nRequestID);
}

int TdApi::ReqQryOptionInstrTradeCost(CThostFtdcQryOptionInstrTradeCostField *pQryOptionInstrTradeCost, int nRequestID) {
    return this->api->ReqQryOptionInstrTradeCost(pQryOptionInstrTradeCost, nRequestID);
}

int TdApi::ReqQryOptionInstrCommRate(CThostFtdcQryOptionInstrCommRateField *pQryOptionInstrCommRate, int nRequestID) {
    return this->api->ReqQryOptionInstrCommRate(pQryOptionInstrCommRate, nRequestID);
}

int TdApi::ReqQryExecOrder(CThostFtdcQryExecOrderField *pQryExecOrder, int nRequestID) {
    return this->api->ReqQryExecOrder(pQryExecOrder, nRequestID);
}

int TdApi::ReqQryForQuote(CThostFtdcQryForQuoteField *pQryForQuote, int nRequestID) {
    return this->api->ReqQryForQuote(pQryForQuote, nRequestID);
}

int TdApi::ReqQryQuote(CThostFtdcQryQuoteField *pQryQuote, int nRequestID) {
    return this->api->ReqQryQuote(pQryQuote, nRequestID);
}

int TdApi::ReqQryOptionSelfClose(CThostFtdcQryOptionSelfCloseField *pQryOptionSelfClose, int nRequestID) {
    return this->api->ReqQryOptionSelfClose(pQryOptionSelfClose, nRequestID);
}

int TdApi::ReqQryInvestUnit(CThostFtdcQryInvestUnitField *pQryInvestUnit, int nRequestID) {
    return this->api->ReqQryInvestUnit(pQryInvestUnit, nRequestID);
}

int TdApi::ReqQryCombInstrumentGuard(CThostFtdcQryCombInstrumentGuardField *pQryCombInstrumentGuard, int nRequestID) {
    return this->api->ReqQryCombInstrumentGuard(pQryCombInstrumentGuard, nRequestID);
}

int TdApi::ReqQryCombAction(CThostFtdcQryCombActionField *pQryCombAction, int nRequestID) {
    return this->api->ReqQryCombAction(pQryCombAction, nRequestID);
}

int TdApi::ReqQryTransferSerial(CThostFtdcQryTransferSerialField *pQryTransferSerial, int nRequestID) {
    return this->api->ReqQryTransferSerial(pQryTransferSerial, nRequestID);
}

int TdApi::ReqQryAccountregister(CThostFtdcQryAccountregisterField *pQryAccountregister, int nRequestID) {
    return this->api->ReqQryAccountregister(pQryAccountregister, nRequestID);
}

int TdApi::ReqQryContractBank(CThostFtdcQryContractBankField *pQryContractBank, int nRequestID) {
    return this->api->ReqQryContractBank(pQryContractBank, nRequestID);
}

int TdApi::ReqQryParkedOrder(CThostFtdcQryParkedOrderField *pQryParkedOrder, int nRequestID) {
    return this->api->ReqQryParkedOrder(pQryParkedOrder, nRequestID);
}

int TdApi::ReqQryParkedOrderAction(CThostFtdcQryParkedOrderActionField *pQryParkedOrderAction, int nRequestID) {
    return this->api->ReqQryParkedOrderAction(pQryParkedOrderAction, nRequestID);
}

int TdApi::ReqQryTradingNotice(CThostFtdcQryTradingNoticeField *pQryTradingNotice, int nRequestID) {
    return this->api->ReqQryTradingNotice(pQryTradingNotice, nRequestID);
}

int TdApi::ReqQryBrokerTradingParams(CThostFtdcQryBrokerTradingParamsField *pQryBrokerTradingParams, int nRequestID) {
    return this->api->ReqQryBrokerTradingParams(pQryBrokerTradingParams, nRequestID);
}

int TdApi::ReqQryBrokerTradingAlgos(CThostFtdcQryBrokerTradingAlgosField *pQryBrokerTradingAlgos, int nRequestID) {
    return this->api->ReqQryBrokerTradingAlgos(pQryBrokerTradingAlgos, nRequestID);
}

int TdApi::ReqQueryCFMMCTradingAccountToken(CThostFtdcQueryCFMMCTradingAccountTokenField *pQueryCFMMCTradingAccountToken, int nRequestID) {
    return this->api->ReqQueryCFMMCTradingAccountToken(pQueryCFMMCTradingAccountToken, nRequestID);
}

int TdApi::ReqFromBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, int nRequestID) {
    return this->api->ReqFromBankToFutureByFuture(pReqTransfer, nRequestID);
}

int TdApi::ReqFromFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, int nRequestID) {
    return this->api->ReqFromFutureToBankByFuture(pReqTransfer, nRequestID);
}

int TdApi::ReqQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, int nRequestID) {
    return this->api->ReqQueryBankAccountMoneyByFuture(pReqQueryAccount, nRequestID);
}


// On Methods
void TdApi::OnFrontConnected() {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnFrontConnected();
    });
};

void TdApi::OnFrontDisconnected(int nReason) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnFrontDisconnected(nReason);
    });
};

void TdApi::OnHeartBeatWarning(int nTimeLapse) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnHeartBeatWarning(nTimeLapse);
    });
};

void TdApi::OnRspAuthenticate(CThostFtdcRspAuthenticateField *pRspAuthenticateField, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspAuthenticate(pRspAuthenticateField, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspUserLogin(pRspUserLogin, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspUserLogout(pUserLogout, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspUserPasswordUpdate(CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspUserPasswordUpdate(pUserPasswordUpdate, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspTradingAccountPasswordUpdate(pTradingAccountPasswordUpdate, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspUserAuthMethod(CThostFtdcRspUserAuthMethodField *pRspUserAuthMethod, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspUserAuthMethod(pRspUserAuthMethod, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspGenUserCaptcha(CThostFtdcRspGenUserCaptchaField *pRspGenUserCaptcha, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspGenUserCaptcha(pRspGenUserCaptcha, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspGenUserText(CThostFtdcRspGenUserTextField *pRspGenUserText, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspGenUserText(pRspGenUserText, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspOrderInsert(pInputOrder, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspParkedOrderInsert(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspParkedOrderInsert(pParkedOrder, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspParkedOrderAction(pParkedOrderAction, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspOrderAction(pInputOrderAction, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQueryMaxOrderVolume(CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQueryMaxOrderVolume(pQueryMaxOrderVolume, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspSettlementInfoConfirm(pSettlementInfoConfirm, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspRemoveParkedOrder(CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspRemoveParkedOrder(pRemoveParkedOrder, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspRemoveParkedOrderAction(pRemoveParkedOrderAction, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspExecOrderInsert(pInputExecOrder, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspExecOrderAction(CThostFtdcInputExecOrderActionField *pInputExecOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspExecOrderAction(pInputExecOrderAction, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspForQuoteInsert(pInputForQuote, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQuoteInsert(pInputQuote, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQuoteAction(CThostFtdcInputQuoteActionField *pInputQuoteAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQuoteAction(pInputQuoteAction, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspBatchOrderAction(CThostFtdcInputBatchOrderActionField *pInputBatchOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspBatchOrderAction(pInputBatchOrderAction, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField *pInputOptionSelfClose, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspOptionSelfCloseInsert(pInputOptionSelfClose, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspOptionSelfCloseAction(CThostFtdcInputOptionSelfCloseActionField *pInputOptionSelfCloseAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspOptionSelfCloseAction(pInputOptionSelfCloseAction, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspCombActionInsert(pInputCombAction, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryOrder(CThostFtdcOrderField *pOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryOrder(pOrder, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryTrade(CThostFtdcTradeField *pTrade, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryTrade(pTrade, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryInvestorPosition(CThostFtdcInvestorPositionField *pInvestorPosition, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryInvestorPosition(pInvestorPosition, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryTradingAccount(pTradingAccount, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryInvestor(CThostFtdcInvestorField *pInvestor, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryInvestor(pInvestor, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryTradingCode(CThostFtdcTradingCodeField *pTradingCode, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryTradingCode(pTradingCode, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryInstrumentMarginRate(CThostFtdcInstrumentMarginRateField *pInstrumentMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryInstrumentMarginRate(pInstrumentMarginRate, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryInstrumentCommissionRate(CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryInstrumentCommissionRate(pInstrumentCommissionRate, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryExchange(CThostFtdcExchangeField *pExchange, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryExchange(pExchange, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryProduct(CThostFtdcProductField *pProduct, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryProduct(pProduct, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryInstrument(CThostFtdcInstrumentField *pInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryInstrument(pInstrument, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryDepthMarketData(pDepthMarketData, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQrySettlementInfo(CThostFtdcSettlementInfoField *pSettlementInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQrySettlementInfo(pSettlementInfo, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryTransferBank(CThostFtdcTransferBankField *pTransferBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryTransferBank(pTransferBank, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryInvestorPositionDetail(CThostFtdcInvestorPositionDetailField *pInvestorPositionDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryInvestorPositionDetail(pInvestorPositionDetail, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryNotice(CThostFtdcNoticeField *pNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryNotice(pNotice, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQrySettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQrySettlementInfoConfirm(pSettlementInfoConfirm, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryInvestorPositionCombineDetail(CThostFtdcInvestorPositionCombineDetailField *pInvestorPositionCombineDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryInvestorPositionCombineDetail(pInvestorPositionCombineDetail, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryCFMMCTradingAccountKey(CThostFtdcCFMMCTradingAccountKeyField *pCFMMCTradingAccountKey, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryCFMMCTradingAccountKey(pCFMMCTradingAccountKey, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryEWarrantOffset(CThostFtdcEWarrantOffsetField *pEWarrantOffset, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryEWarrantOffset(pEWarrantOffset, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryInvestorProductGroupMargin(CThostFtdcInvestorProductGroupMarginField *pInvestorProductGroupMargin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryInvestorProductGroupMargin(pInvestorProductGroupMargin, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryExchangeMarginRate(CThostFtdcExchangeMarginRateField *pExchangeMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryExchangeMarginRate(pExchangeMarginRate, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryExchangeMarginRateAdjust(CThostFtdcExchangeMarginRateAdjustField *pExchangeMarginRateAdjust, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryExchangeMarginRateAdjust(pExchangeMarginRateAdjust, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryExchangeRate(CThostFtdcExchangeRateField *pExchangeRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryExchangeRate(pExchangeRate, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQrySecAgentACIDMap(CThostFtdcSecAgentACIDMapField *pSecAgentACIDMap, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQrySecAgentACIDMap(pSecAgentACIDMap, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryProductExchRate(CThostFtdcProductExchRateField *pProductExchRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryProductExchRate(pProductExchRate, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryProductGroup(CThostFtdcProductGroupField *pProductGroup, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryProductGroup(pProductGroup, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryMMInstrumentCommissionRate(CThostFtdcMMInstrumentCommissionRateField *pMMInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryMMInstrumentCommissionRate(pMMInstrumentCommissionRate, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryMMOptionInstrCommRate(CThostFtdcMMOptionInstrCommRateField *pMMOptionInstrCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryMMOptionInstrCommRate(pMMOptionInstrCommRate, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryInstrumentOrderCommRate(CThostFtdcInstrumentOrderCommRateField *pInstrumentOrderCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryInstrumentOrderCommRate(pInstrumentOrderCommRate, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQrySecAgentTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQrySecAgentTradingAccount(pTradingAccount, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQrySecAgentCheckMode(CThostFtdcSecAgentCheckModeField *pSecAgentCheckMode, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQrySecAgentCheckMode(pSecAgentCheckMode, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQrySecAgentTradeInfo(CThostFtdcSecAgentTradeInfoField *pSecAgentTradeInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQrySecAgentTradeInfo(pSecAgentTradeInfo, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryOptionInstrTradeCost(CThostFtdcOptionInstrTradeCostField *pOptionInstrTradeCost, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryOptionInstrTradeCost(pOptionInstrTradeCost, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryOptionInstrCommRate(CThostFtdcOptionInstrCommRateField *pOptionInstrCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryOptionInstrCommRate(pOptionInstrCommRate, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryExecOrder(CThostFtdcExecOrderField *pExecOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryExecOrder(pExecOrder, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryForQuote(CThostFtdcForQuoteField *pForQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryForQuote(pForQuote, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryQuote(CThostFtdcQuoteField *pQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryQuote(pQuote, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryOptionSelfClose(CThostFtdcOptionSelfCloseField *pOptionSelfClose, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryOptionSelfClose(pOptionSelfClose, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryInvestUnit(CThostFtdcInvestUnitField *pInvestUnit, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryInvestUnit(pInvestUnit, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryCombInstrumentGuard(CThostFtdcCombInstrumentGuardField *pCombInstrumentGuard, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryCombInstrumentGuard(pCombInstrumentGuard, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryCombAction(CThostFtdcCombActionField *pCombAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryCombAction(pCombAction, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryTransferSerial(CThostFtdcTransferSerialField *pTransferSerial, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryTransferSerial(pTransferSerial, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryAccountregister(CThostFtdcAccountregisterField *pAccountregister, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryAccountregister(pAccountregister, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspError(pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRtnOrder(CThostFtdcOrderField *pOrder) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRtnOrder(pOrder);
    });
};

void TdApi::OnRtnTrade(CThostFtdcTradeField *pTrade) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRtnTrade(pTrade);
    });
};

void TdApi::OnErrRtnOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnErrRtnOrderInsert(pInputOrder, pRspInfo);
    });
};

void TdApi::OnErrRtnOrderAction(CThostFtdcOrderActionField *pOrderAction, CThostFtdcRspInfoField *pRspInfo) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnErrRtnOrderAction(pOrderAction, pRspInfo);
    });
};

void TdApi::OnRtnInstrumentStatus(CThostFtdcInstrumentStatusField *pInstrumentStatus) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRtnInstrumentStatus(pInstrumentStatus);
    });
};

void TdApi::OnRtnBulletin(CThostFtdcBulletinField *pBulletin) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRtnBulletin(pBulletin);
    });
};

void TdApi::OnRtnTradingNotice(CThostFtdcTradingNoticeInfoField *pTradingNoticeInfo) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRtnTradingNotice(pTradingNoticeInfo);
    });
};

void TdApi::OnRtnErrorConditionalOrder(CThostFtdcErrorConditionalOrderField *pErrorConditionalOrder) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRtnErrorConditionalOrder(pErrorConditionalOrder);
    });
};

void TdApi::OnRtnExecOrder(CThostFtdcExecOrderField *pExecOrder) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRtnExecOrder(pExecOrder);
    });
};

void TdApi::OnErrRtnExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, CThostFtdcRspInfoField *pRspInfo) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnErrRtnExecOrderInsert(pInputExecOrder, pRspInfo);
    });
};

void TdApi::OnErrRtnExecOrderAction(CThostFtdcExecOrderActionField *pExecOrderAction, CThostFtdcRspInfoField *pRspInfo) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnErrRtnExecOrderAction(pExecOrderAction, pRspInfo);
    });
};

void TdApi::OnErrRtnForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, CThostFtdcRspInfoField *pRspInfo) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnErrRtnForQuoteInsert(pInputForQuote, pRspInfo);
    });
};

void TdApi::OnRtnQuote(CThostFtdcQuoteField *pQuote) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRtnQuote(pQuote);
    });
};

void TdApi::OnErrRtnQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, CThostFtdcRspInfoField *pRspInfo) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnErrRtnQuoteInsert(pInputQuote, pRspInfo);
    });
};

void TdApi::OnErrRtnQuoteAction(CThostFtdcQuoteActionField *pQuoteAction, CThostFtdcRspInfoField *pRspInfo) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnErrRtnQuoteAction(pQuoteAction, pRspInfo);
    });
};

void TdApi::OnRtnForQuoteRsp(CThostFtdcForQuoteRspField *pForQuoteRsp) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRtnForQuoteRsp(pForQuoteRsp);
    });
};

void TdApi::OnRtnCFMMCTradingAccountToken(CThostFtdcCFMMCTradingAccountTokenField *pCFMMCTradingAccountToken) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRtnCFMMCTradingAccountToken(pCFMMCTradingAccountToken);
    });
};

void TdApi::OnErrRtnBatchOrderAction(CThostFtdcBatchOrderActionField *pBatchOrderAction, CThostFtdcRspInfoField *pRspInfo) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnErrRtnBatchOrderAction(pBatchOrderAction, pRspInfo);
    });
};

void TdApi::OnRtnOptionSelfClose(CThostFtdcOptionSelfCloseField *pOptionSelfClose) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRtnOptionSelfClose(pOptionSelfClose);
    });
};

void TdApi::OnErrRtnOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField *pInputOptionSelfClose, CThostFtdcRspInfoField *pRspInfo) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnErrRtnOptionSelfCloseInsert(pInputOptionSelfClose, pRspInfo);
    });
};

void TdApi::OnErrRtnOptionSelfCloseAction(CThostFtdcOptionSelfCloseActionField *pOptionSelfCloseAction, CThostFtdcRspInfoField *pRspInfo) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnErrRtnOptionSelfCloseAction(pOptionSelfCloseAction, pRspInfo);
    });
};

void TdApi::OnRtnCombAction(CThostFtdcCombActionField *pCombAction) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRtnCombAction(pCombAction);
    });
};

void TdApi::OnErrRtnCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, CThostFtdcRspInfoField *pRspInfo) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnErrRtnCombActionInsert(pInputCombAction, pRspInfo);
    });
};

void TdApi::OnRspQryContractBank(CThostFtdcContractBankField *pContractBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryContractBank(pContractBank, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryParkedOrder(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryParkedOrder(pParkedOrder, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryParkedOrderAction(pParkedOrderAction, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryTradingNotice(CThostFtdcTradingNoticeField *pTradingNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryTradingNotice(pTradingNotice, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryBrokerTradingParams(CThostFtdcBrokerTradingParamsField *pBrokerTradingParams, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryBrokerTradingParams(pBrokerTradingParams, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQryBrokerTradingAlgos(CThostFtdcBrokerTradingAlgosField *pBrokerTradingAlgos, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQryBrokerTradingAlgos(pBrokerTradingAlgos, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQueryCFMMCTradingAccountToken(CThostFtdcQueryCFMMCTradingAccountTokenField *pQueryCFMMCTradingAccountToken, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQueryCFMMCTradingAccountToken(pQueryCFMMCTradingAccountToken, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRtnFromBankToFutureByBank(CThostFtdcRspTransferField *pRspTransfer) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRtnFromBankToFutureByBank(pRspTransfer);
    });
};

void TdApi::OnRtnFromFutureToBankByBank(CThostFtdcRspTransferField *pRspTransfer) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRtnFromFutureToBankByBank(pRspTransfer);
    });
};

void TdApi::OnRtnRepealFromBankToFutureByBank(CThostFtdcRspRepealField *pRspRepeal) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRtnRepealFromBankToFutureByBank(pRspRepeal);
    });
};

void TdApi::OnRtnRepealFromFutureToBankByBank(CThostFtdcRspRepealField *pRspRepeal) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRtnRepealFromFutureToBankByBank(pRspRepeal);
    });
};

void TdApi::OnRtnFromBankToFutureByFuture(CThostFtdcRspTransferField *pRspTransfer) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRtnFromBankToFutureByFuture(pRspTransfer);
    });
};

void TdApi::OnRtnFromFutureToBankByFuture(CThostFtdcRspTransferField *pRspTransfer) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRtnFromFutureToBankByFuture(pRspTransfer);
    });
};

void TdApi::OnRtnRepealFromBankToFutureByFutureManual(CThostFtdcRspRepealField *pRspRepeal) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRtnRepealFromBankToFutureByFutureManual(pRspRepeal);
    });
};

void TdApi::OnRtnRepealFromFutureToBankByFutureManual(CThostFtdcRspRepealField *pRspRepeal) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRtnRepealFromFutureToBankByFutureManual(pRspRepeal);
    });
};

void TdApi::OnRtnQueryBankBalanceByFuture(CThostFtdcNotifyQueryAccountField *pNotifyQueryAccount) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRtnQueryBankBalanceByFuture(pNotifyQueryAccount);
    });
};

void TdApi::OnErrRtnBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnErrRtnBankToFutureByFuture(pReqTransfer, pRspInfo);
    });
};

void TdApi::OnErrRtnFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnErrRtnFutureToBankByFuture(pReqTransfer, pRspInfo);
    });
};

void TdApi::OnErrRtnRepealBankToFutureByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnErrRtnRepealBankToFutureByFutureManual(pReqRepeal, pRspInfo);
    });
};

void TdApi::OnErrRtnRepealFutureToBankByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnErrRtnRepealFutureToBankByFutureManual(pReqRepeal, pRspInfo);
    });
};

void TdApi::OnErrRtnQueryBankBalanceByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnErrRtnQueryBankBalanceByFuture(pReqQueryAccount, pRspInfo);
    });
};

void TdApi::OnRtnRepealFromBankToFutureByFuture(CThostFtdcRspRepealField *pRspRepeal) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRtnRepealFromBankToFutureByFuture(pRspRepeal);
    });
};

void TdApi::OnRtnRepealFromFutureToBankByFuture(CThostFtdcRspRepealField *pRspRepeal) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRtnRepealFromFutureToBankByFuture(pRspRepeal);
    });
};

void TdApi::OnRspFromBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspFromBankToFutureByFuture(pReqTransfer, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspFromFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspFromFutureToBankByFuture(pReqTransfer, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRspQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRspQueryBankAccountMoneyByFuture(pReqQueryAccount, pRspInfo, nRequestID, bIsLast);
    });
};

void TdApi::OnRtnOpenAccountByBank(CThostFtdcOpenAccountField *pOpenAccount) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRtnOpenAccountByBank(pOpenAccount);
    });
};

void TdApi::OnRtnCancelAccountByBank(CThostFtdcCancelAccountField *pCancelAccount) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRtnCancelAccountByBank(pCancelAccount);
    });
};

void TdApi::OnRtnChangeAccountByBank(CThostFtdcChangeAccountField *pChangeAccount) {
    this->queue->dispatch([&]() {
        py::gil_scoped_acquire acquire;
        this->PyOnRtnChangeAccountByBank(pChangeAccount);
    });
};

