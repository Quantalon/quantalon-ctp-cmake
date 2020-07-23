#ifndef TD_API_H
#define TD_API_H

#include <iostream>
#include <string>
#include <pybind11/pybind11.h>

#include "dispatch_queue.h"
#include "ThostFtdcTraderApi.h"


class TdApi : public CThostFtdcTraderSpi {
private:
    CThostFtdcTraderApi *api;
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

    int RegisterUserSystemInfo(CThostFtdcUserSystemInfoField *UserSystemInfo);

    int SubmitUserSystemInfo(CThostFtdcUserSystemInfoField *UserSystemInfo);

    // Req Methods
    int ReqAuthenticate(CThostFtdcReqAuthenticateField *pReqAuthenticateField, int nRequestID);

    int ReqUserLogin(CThostFtdcReqUserLoginField *pReqUserLoginField, int nRequestID);

    int ReqUserLogout(CThostFtdcUserLogoutField *pUserLogout, int nRequestID);

    int ReqUserPasswordUpdate(CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, int nRequestID);

    int ReqTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, int nRequestID);

    int ReqUserAuthMethod(CThostFtdcReqUserAuthMethodField *pReqUserAuthMethod, int nRequestID);

    int ReqGenUserCaptcha(CThostFtdcReqGenUserCaptchaField *pReqGenUserCaptcha, int nRequestID);

    int ReqGenUserText(CThostFtdcReqGenUserTextField *pReqGenUserText, int nRequestID);

    int ReqUserLoginWithCaptcha(CThostFtdcReqUserLoginWithCaptchaField *pReqUserLoginWithCaptcha, int nRequestID);

    int ReqUserLoginWithText(CThostFtdcReqUserLoginWithTextField *pReqUserLoginWithText, int nRequestID);

    int ReqUserLoginWithOTP(CThostFtdcReqUserLoginWithOTPField *pReqUserLoginWithOTP, int nRequestID);

    int ReqOrderInsert(CThostFtdcInputOrderField *pInputOrder, int nRequestID);

    int ReqParkedOrderInsert(CThostFtdcParkedOrderField *pParkedOrder, int nRequestID);

    int ReqParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, int nRequestID);

    int ReqOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction, int nRequestID);

    int ReqQueryMaxOrderVolume(CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume, int nRequestID);

    int ReqSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, int nRequestID);

    int ReqRemoveParkedOrder(CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, int nRequestID);

    int ReqRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction, int nRequestID);

    int ReqExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, int nRequestID);

    int ReqExecOrderAction(CThostFtdcInputExecOrderActionField *pInputExecOrderAction, int nRequestID);

    int ReqForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, int nRequestID);

    int ReqQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, int nRequestID);

    int ReqQuoteAction(CThostFtdcInputQuoteActionField *pInputQuoteAction, int nRequestID);

    int ReqBatchOrderAction(CThostFtdcInputBatchOrderActionField *pInputBatchOrderAction, int nRequestID);

    int ReqOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField *pInputOptionSelfClose, int nRequestID);

    int ReqOptionSelfCloseAction(CThostFtdcInputOptionSelfCloseActionField *pInputOptionSelfCloseAction, int nRequestID);

    int ReqCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, int nRequestID);

    int ReqQryOrder(CThostFtdcQryOrderField *pQryOrder, int nRequestID);

    int ReqQryTrade(CThostFtdcQryTradeField *pQryTrade, int nRequestID);

    int ReqQryInvestorPosition(CThostFtdcQryInvestorPositionField *pQryInvestorPosition, int nRequestID);

    int ReqQryTradingAccount(CThostFtdcQryTradingAccountField *pQryTradingAccount, int nRequestID);

    int ReqQryInvestor(CThostFtdcQryInvestorField *pQryInvestor, int nRequestID);

    int ReqQryTradingCode(CThostFtdcQryTradingCodeField *pQryTradingCode, int nRequestID);

    int ReqQryInstrumentMarginRate(CThostFtdcQryInstrumentMarginRateField *pQryInstrumentMarginRate, int nRequestID);

    int ReqQryInstrumentCommissionRate(CThostFtdcQryInstrumentCommissionRateField *pQryInstrumentCommissionRate, int nRequestID);

    int ReqQryExchange(CThostFtdcQryExchangeField *pQryExchange, int nRequestID);

    int ReqQryProduct(CThostFtdcQryProductField *pQryProduct, int nRequestID);

    int ReqQryInstrument(CThostFtdcQryInstrumentField *pQryInstrument, int nRequestID);

    int ReqQryDepthMarketData(CThostFtdcQryDepthMarketDataField *pQryDepthMarketData, int nRequestID);

    int ReqQrySettlementInfo(CThostFtdcQrySettlementInfoField *pQrySettlementInfo, int nRequestID);

    int ReqQryTransferBank(CThostFtdcQryTransferBankField *pQryTransferBank, int nRequestID);

    int ReqQryInvestorPositionDetail(CThostFtdcQryInvestorPositionDetailField *pQryInvestorPositionDetail, int nRequestID);

    int ReqQryNotice(CThostFtdcQryNoticeField *pQryNotice, int nRequestID);

    int ReqQrySettlementInfoConfirm(CThostFtdcQrySettlementInfoConfirmField *pQrySettlementInfoConfirm, int nRequestID);

    int ReqQryInvestorPositionCombineDetail(CThostFtdcQryInvestorPositionCombineDetailField *pQryInvestorPositionCombineDetail, int nRequestID);

    int ReqQryCFMMCTradingAccountKey(CThostFtdcQryCFMMCTradingAccountKeyField *pQryCFMMCTradingAccountKey, int nRequestID);

    int ReqQryEWarrantOffset(CThostFtdcQryEWarrantOffsetField *pQryEWarrantOffset, int nRequestID);

    int ReqQryInvestorProductGroupMargin(CThostFtdcQryInvestorProductGroupMarginField *pQryInvestorProductGroupMargin, int nRequestID);

    int ReqQryExchangeMarginRate(CThostFtdcQryExchangeMarginRateField *pQryExchangeMarginRate, int nRequestID);

    int ReqQryExchangeMarginRateAdjust(CThostFtdcQryExchangeMarginRateAdjustField *pQryExchangeMarginRateAdjust, int nRequestID);

    int ReqQryExchangeRate(CThostFtdcQryExchangeRateField *pQryExchangeRate, int nRequestID);

    int ReqQrySecAgentACIDMap(CThostFtdcQrySecAgentACIDMapField *pQrySecAgentACIDMap, int nRequestID);

    int ReqQryProductExchRate(CThostFtdcQryProductExchRateField *pQryProductExchRate, int nRequestID);

    int ReqQryProductGroup(CThostFtdcQryProductGroupField *pQryProductGroup, int nRequestID);

    int ReqQryMMInstrumentCommissionRate(CThostFtdcQryMMInstrumentCommissionRateField *pQryMMInstrumentCommissionRate, int nRequestID);

    int ReqQryMMOptionInstrCommRate(CThostFtdcQryMMOptionInstrCommRateField *pQryMMOptionInstrCommRate, int nRequestID);

    int ReqQryInstrumentOrderCommRate(CThostFtdcQryInstrumentOrderCommRateField *pQryInstrumentOrderCommRate, int nRequestID);

    int ReqQrySecAgentTradingAccount(CThostFtdcQryTradingAccountField *pQryTradingAccount, int nRequestID);

    int ReqQrySecAgentCheckMode(CThostFtdcQrySecAgentCheckModeField *pQrySecAgentCheckMode, int nRequestID);

    int ReqQrySecAgentTradeInfo(CThostFtdcQrySecAgentTradeInfoField *pQrySecAgentTradeInfo, int nRequestID);

    int ReqQryOptionInstrTradeCost(CThostFtdcQryOptionInstrTradeCostField *pQryOptionInstrTradeCost, int nRequestID);

    int ReqQryOptionInstrCommRate(CThostFtdcQryOptionInstrCommRateField *pQryOptionInstrCommRate, int nRequestID);

    int ReqQryExecOrder(CThostFtdcQryExecOrderField *pQryExecOrder, int nRequestID);

    int ReqQryForQuote(CThostFtdcQryForQuoteField *pQryForQuote, int nRequestID);

    int ReqQryQuote(CThostFtdcQryQuoteField *pQryQuote, int nRequestID);

    int ReqQryOptionSelfClose(CThostFtdcQryOptionSelfCloseField *pQryOptionSelfClose, int nRequestID);

    int ReqQryInvestUnit(CThostFtdcQryInvestUnitField *pQryInvestUnit, int nRequestID);

    int ReqQryCombInstrumentGuard(CThostFtdcQryCombInstrumentGuardField *pQryCombInstrumentGuard, int nRequestID);

    int ReqQryCombAction(CThostFtdcQryCombActionField *pQryCombAction, int nRequestID);

    int ReqQryTransferSerial(CThostFtdcQryTransferSerialField *pQryTransferSerial, int nRequestID);

    int ReqQryAccountregister(CThostFtdcQryAccountregisterField *pQryAccountregister, int nRequestID);

    int ReqQryContractBank(CThostFtdcQryContractBankField *pQryContractBank, int nRequestID);

    int ReqQryParkedOrder(CThostFtdcQryParkedOrderField *pQryParkedOrder, int nRequestID);

    int ReqQryParkedOrderAction(CThostFtdcQryParkedOrderActionField *pQryParkedOrderAction, int nRequestID);

    int ReqQryTradingNotice(CThostFtdcQryTradingNoticeField *pQryTradingNotice, int nRequestID);

    int ReqQryBrokerTradingParams(CThostFtdcQryBrokerTradingParamsField *pQryBrokerTradingParams, int nRequestID);

    int ReqQryBrokerTradingAlgos(CThostFtdcQryBrokerTradingAlgosField *pQryBrokerTradingAlgos, int nRequestID);

    int ReqQueryCFMMCTradingAccountToken(CThostFtdcQueryCFMMCTradingAccountTokenField *pQueryCFMMCTradingAccountToken, int nRequestID);

    int ReqFromBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, int nRequestID);

    int ReqFromFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, int nRequestID);

    int ReqQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, int nRequestID);

    // On Methods
    void OnFrontConnected() override;

    void OnFrontDisconnected(int nReason) override;

    void OnHeartBeatWarning(int nTimeLapse) override;

    void OnRspAuthenticate(CThostFtdcRspAuthenticateField *pRspAuthenticateField, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspUserPasswordUpdate(CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspUserAuthMethod(CThostFtdcRspUserAuthMethodField *pRspUserAuthMethod, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspGenUserCaptcha(CThostFtdcRspGenUserCaptchaField *pRspGenUserCaptcha, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspGenUserText(CThostFtdcRspGenUserTextField *pRspGenUserText, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspParkedOrderInsert(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQueryMaxOrderVolume(CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspRemoveParkedOrder(CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspExecOrderAction(CThostFtdcInputExecOrderActionField *pInputExecOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQuoteAction(CThostFtdcInputQuoteActionField *pInputQuoteAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspBatchOrderAction(CThostFtdcInputBatchOrderActionField *pInputBatchOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField *pInputOptionSelfClose, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspOptionSelfCloseAction(CThostFtdcInputOptionSelfCloseActionField *pInputOptionSelfCloseAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryOrder(CThostFtdcOrderField *pOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryTrade(CThostFtdcTradeField *pTrade, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryInvestorPosition(CThostFtdcInvestorPositionField *pInvestorPosition, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryInvestor(CThostFtdcInvestorField *pInvestor, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryTradingCode(CThostFtdcTradingCodeField *pTradingCode, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryInstrumentMarginRate(CThostFtdcInstrumentMarginRateField *pInstrumentMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryInstrumentCommissionRate(CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryExchange(CThostFtdcExchangeField *pExchange, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryProduct(CThostFtdcProductField *pProduct, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryInstrument(CThostFtdcInstrumentField *pInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQrySettlementInfo(CThostFtdcSettlementInfoField *pSettlementInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryTransferBank(CThostFtdcTransferBankField *pTransferBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryInvestorPositionDetail(CThostFtdcInvestorPositionDetailField *pInvestorPositionDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryNotice(CThostFtdcNoticeField *pNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQrySettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryInvestorPositionCombineDetail(CThostFtdcInvestorPositionCombineDetailField *pInvestorPositionCombineDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryCFMMCTradingAccountKey(CThostFtdcCFMMCTradingAccountKeyField *pCFMMCTradingAccountKey, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryEWarrantOffset(CThostFtdcEWarrantOffsetField *pEWarrantOffset, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryInvestorProductGroupMargin(CThostFtdcInvestorProductGroupMarginField *pInvestorProductGroupMargin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryExchangeMarginRate(CThostFtdcExchangeMarginRateField *pExchangeMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryExchangeMarginRateAdjust(CThostFtdcExchangeMarginRateAdjustField *pExchangeMarginRateAdjust, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryExchangeRate(CThostFtdcExchangeRateField *pExchangeRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQrySecAgentACIDMap(CThostFtdcSecAgentACIDMapField *pSecAgentACIDMap, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryProductExchRate(CThostFtdcProductExchRateField *pProductExchRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryProductGroup(CThostFtdcProductGroupField *pProductGroup, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryMMInstrumentCommissionRate(CThostFtdcMMInstrumentCommissionRateField *pMMInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryMMOptionInstrCommRate(CThostFtdcMMOptionInstrCommRateField *pMMOptionInstrCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryInstrumentOrderCommRate(CThostFtdcInstrumentOrderCommRateField *pInstrumentOrderCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQrySecAgentTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQrySecAgentCheckMode(CThostFtdcSecAgentCheckModeField *pSecAgentCheckMode, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQrySecAgentTradeInfo(CThostFtdcSecAgentTradeInfoField *pSecAgentTradeInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryOptionInstrTradeCost(CThostFtdcOptionInstrTradeCostField *pOptionInstrTradeCost, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryOptionInstrCommRate(CThostFtdcOptionInstrCommRateField *pOptionInstrCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryExecOrder(CThostFtdcExecOrderField *pExecOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryForQuote(CThostFtdcForQuoteField *pForQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryQuote(CThostFtdcQuoteField *pQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryOptionSelfClose(CThostFtdcOptionSelfCloseField *pOptionSelfClose, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryInvestUnit(CThostFtdcInvestUnitField *pInvestUnit, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryCombInstrumentGuard(CThostFtdcCombInstrumentGuardField *pCombInstrumentGuard, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryCombAction(CThostFtdcCombActionField *pCombAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryTransferSerial(CThostFtdcTransferSerialField *pTransferSerial, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryAccountregister(CThostFtdcAccountregisterField *pAccountregister, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRtnOrder(CThostFtdcOrderField *pOrder) override;

    void OnRtnTrade(CThostFtdcTradeField *pTrade) override;

    void OnErrRtnOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo) override;

    void OnErrRtnOrderAction(CThostFtdcOrderActionField *pOrderAction, CThostFtdcRspInfoField *pRspInfo) override;

    void OnRtnInstrumentStatus(CThostFtdcInstrumentStatusField *pInstrumentStatus) override;

    void OnRtnBulletin(CThostFtdcBulletinField *pBulletin) override;

    void OnRtnTradingNotice(CThostFtdcTradingNoticeInfoField *pTradingNoticeInfo) override;

    void OnRtnErrorConditionalOrder(CThostFtdcErrorConditionalOrderField *pErrorConditionalOrder) override;

    void OnRtnExecOrder(CThostFtdcExecOrderField *pExecOrder) override;

    void OnErrRtnExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, CThostFtdcRspInfoField *pRspInfo) override;

    void OnErrRtnExecOrderAction(CThostFtdcExecOrderActionField *pExecOrderAction, CThostFtdcRspInfoField *pRspInfo) override;

    void OnErrRtnForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, CThostFtdcRspInfoField *pRspInfo) override;

    void OnRtnQuote(CThostFtdcQuoteField *pQuote) override;

    void OnErrRtnQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, CThostFtdcRspInfoField *pRspInfo) override;

    void OnErrRtnQuoteAction(CThostFtdcQuoteActionField *pQuoteAction, CThostFtdcRspInfoField *pRspInfo) override;

    void OnRtnForQuoteRsp(CThostFtdcForQuoteRspField *pForQuoteRsp) override;

    void OnRtnCFMMCTradingAccountToken(CThostFtdcCFMMCTradingAccountTokenField *pCFMMCTradingAccountToken) override;

    void OnErrRtnBatchOrderAction(CThostFtdcBatchOrderActionField *pBatchOrderAction, CThostFtdcRspInfoField *pRspInfo) override;

    void OnRtnOptionSelfClose(CThostFtdcOptionSelfCloseField *pOptionSelfClose) override;

    void OnErrRtnOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField *pInputOptionSelfClose, CThostFtdcRspInfoField *pRspInfo) override;

    void OnErrRtnOptionSelfCloseAction(CThostFtdcOptionSelfCloseActionField *pOptionSelfCloseAction, CThostFtdcRspInfoField *pRspInfo) override;

    void OnRtnCombAction(CThostFtdcCombActionField *pCombAction) override;

    void OnErrRtnCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, CThostFtdcRspInfoField *pRspInfo) override;

    void OnRspQryContractBank(CThostFtdcContractBankField *pContractBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryParkedOrder(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryTradingNotice(CThostFtdcTradingNoticeField *pTradingNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryBrokerTradingParams(CThostFtdcBrokerTradingParamsField *pBrokerTradingParams, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQryBrokerTradingAlgos(CThostFtdcBrokerTradingAlgosField *pBrokerTradingAlgos, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQueryCFMMCTradingAccountToken(CThostFtdcQueryCFMMCTradingAccountTokenField *pQueryCFMMCTradingAccountToken, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRtnFromBankToFutureByBank(CThostFtdcRspTransferField *pRspTransfer) override;

    void OnRtnFromFutureToBankByBank(CThostFtdcRspTransferField *pRspTransfer) override;

    void OnRtnRepealFromBankToFutureByBank(CThostFtdcRspRepealField *pRspRepeal) override;

    void OnRtnRepealFromFutureToBankByBank(CThostFtdcRspRepealField *pRspRepeal) override;

    void OnRtnFromBankToFutureByFuture(CThostFtdcRspTransferField *pRspTransfer) override;

    void OnRtnFromFutureToBankByFuture(CThostFtdcRspTransferField *pRspTransfer) override;

    void OnRtnRepealFromBankToFutureByFutureManual(CThostFtdcRspRepealField *pRspRepeal) override;

    void OnRtnRepealFromFutureToBankByFutureManual(CThostFtdcRspRepealField *pRspRepeal) override;

    void OnRtnQueryBankBalanceByFuture(CThostFtdcNotifyQueryAccountField *pNotifyQueryAccount) override;

    void OnErrRtnBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo) override;

    void OnErrRtnFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo) override;

    void OnErrRtnRepealBankToFutureByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo) override;

    void OnErrRtnRepealFutureToBankByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo) override;

    void OnErrRtnQueryBankBalanceByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo) override;

    void OnRtnRepealFromBankToFutureByFuture(CThostFtdcRspRepealField *pRspRepeal) override;

    void OnRtnRepealFromFutureToBankByFuture(CThostFtdcRspRepealField *pRspRepeal) override;

    void OnRspFromBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspFromFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRspQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

    void OnRtnOpenAccountByBank(CThostFtdcOpenAccountField *pOpenAccount) override;

    void OnRtnCancelAccountByBank(CThostFtdcCancelAccountField *pCancelAccount) override;

    void OnRtnChangeAccountByBank(CThostFtdcChangeAccountField *pChangeAccount) override;

    // PyOn Methods
    virtual void PyOnFrontConnected() = 0;

    virtual void PyOnFrontDisconnected(int nReason) = 0;

    virtual void PyOnHeartBeatWarning(int nTimeLapse) = 0;

    virtual void PyOnRspAuthenticate(CThostFtdcRspAuthenticateField *pRspAuthenticateField, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspUserPasswordUpdate(CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspUserAuthMethod(CThostFtdcRspUserAuthMethodField *pRspUserAuthMethod, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspGenUserCaptcha(CThostFtdcRspGenUserCaptchaField *pRspGenUserCaptcha, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspGenUserText(CThostFtdcRspGenUserTextField *pRspGenUserText, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspParkedOrderInsert(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQueryMaxOrderVolume(CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspRemoveParkedOrder(CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspExecOrderAction(CThostFtdcInputExecOrderActionField *pInputExecOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQuoteAction(CThostFtdcInputQuoteActionField *pInputQuoteAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspBatchOrderAction(CThostFtdcInputBatchOrderActionField *pInputBatchOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField *pInputOptionSelfClose, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspOptionSelfCloseAction(CThostFtdcInputOptionSelfCloseActionField *pInputOptionSelfCloseAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryOrder(CThostFtdcOrderField *pOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryTrade(CThostFtdcTradeField *pTrade, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryInvestorPosition(CThostFtdcInvestorPositionField *pInvestorPosition, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryInvestor(CThostFtdcInvestorField *pInvestor, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryTradingCode(CThostFtdcTradingCodeField *pTradingCode, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryInstrumentMarginRate(CThostFtdcInstrumentMarginRateField *pInstrumentMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryInstrumentCommissionRate(CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryExchange(CThostFtdcExchangeField *pExchange, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryProduct(CThostFtdcProductField *pProduct, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryInstrument(CThostFtdcInstrumentField *pInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQrySettlementInfo(CThostFtdcSettlementInfoField *pSettlementInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryTransferBank(CThostFtdcTransferBankField *pTransferBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryInvestorPositionDetail(CThostFtdcInvestorPositionDetailField *pInvestorPositionDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryNotice(CThostFtdcNoticeField *pNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQrySettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryInvestorPositionCombineDetail(CThostFtdcInvestorPositionCombineDetailField *pInvestorPositionCombineDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryCFMMCTradingAccountKey(CThostFtdcCFMMCTradingAccountKeyField *pCFMMCTradingAccountKey, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryEWarrantOffset(CThostFtdcEWarrantOffsetField *pEWarrantOffset, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryInvestorProductGroupMargin(CThostFtdcInvestorProductGroupMarginField *pInvestorProductGroupMargin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryExchangeMarginRate(CThostFtdcExchangeMarginRateField *pExchangeMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryExchangeMarginRateAdjust(CThostFtdcExchangeMarginRateAdjustField *pExchangeMarginRateAdjust, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryExchangeRate(CThostFtdcExchangeRateField *pExchangeRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQrySecAgentACIDMap(CThostFtdcSecAgentACIDMapField *pSecAgentACIDMap, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryProductExchRate(CThostFtdcProductExchRateField *pProductExchRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryProductGroup(CThostFtdcProductGroupField *pProductGroup, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryMMInstrumentCommissionRate(CThostFtdcMMInstrumentCommissionRateField *pMMInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryMMOptionInstrCommRate(CThostFtdcMMOptionInstrCommRateField *pMMOptionInstrCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryInstrumentOrderCommRate(CThostFtdcInstrumentOrderCommRateField *pInstrumentOrderCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQrySecAgentTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQrySecAgentCheckMode(CThostFtdcSecAgentCheckModeField *pSecAgentCheckMode, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQrySecAgentTradeInfo(CThostFtdcSecAgentTradeInfoField *pSecAgentTradeInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryOptionInstrTradeCost(CThostFtdcOptionInstrTradeCostField *pOptionInstrTradeCost, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryOptionInstrCommRate(CThostFtdcOptionInstrCommRateField *pOptionInstrCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryExecOrder(CThostFtdcExecOrderField *pExecOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryForQuote(CThostFtdcForQuoteField *pForQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryQuote(CThostFtdcQuoteField *pQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryOptionSelfClose(CThostFtdcOptionSelfCloseField *pOptionSelfClose, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryInvestUnit(CThostFtdcInvestUnitField *pInvestUnit, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryCombInstrumentGuard(CThostFtdcCombInstrumentGuardField *pCombInstrumentGuard, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryCombAction(CThostFtdcCombActionField *pCombAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryTransferSerial(CThostFtdcTransferSerialField *pTransferSerial, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryAccountregister(CThostFtdcAccountregisterField *pAccountregister, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRtnOrder(CThostFtdcOrderField *pOrder) = 0;

    virtual void PyOnRtnTrade(CThostFtdcTradeField *pTrade) = 0;

    virtual void PyOnErrRtnOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo) = 0;

    virtual void PyOnErrRtnOrderAction(CThostFtdcOrderActionField *pOrderAction, CThostFtdcRspInfoField *pRspInfo) = 0;

    virtual void PyOnRtnInstrumentStatus(CThostFtdcInstrumentStatusField *pInstrumentStatus) = 0;

    virtual void PyOnRtnBulletin(CThostFtdcBulletinField *pBulletin) = 0;

    virtual void PyOnRtnTradingNotice(CThostFtdcTradingNoticeInfoField *pTradingNoticeInfo) = 0;

    virtual void PyOnRtnErrorConditionalOrder(CThostFtdcErrorConditionalOrderField *pErrorConditionalOrder) = 0;

    virtual void PyOnRtnExecOrder(CThostFtdcExecOrderField *pExecOrder) = 0;

    virtual void PyOnErrRtnExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, CThostFtdcRspInfoField *pRspInfo) = 0;

    virtual void PyOnErrRtnExecOrderAction(CThostFtdcExecOrderActionField *pExecOrderAction, CThostFtdcRspInfoField *pRspInfo) = 0;

    virtual void PyOnErrRtnForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, CThostFtdcRspInfoField *pRspInfo) = 0;

    virtual void PyOnRtnQuote(CThostFtdcQuoteField *pQuote) = 0;

    virtual void PyOnErrRtnQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, CThostFtdcRspInfoField *pRspInfo) = 0;

    virtual void PyOnErrRtnQuoteAction(CThostFtdcQuoteActionField *pQuoteAction, CThostFtdcRspInfoField *pRspInfo) = 0;

    virtual void PyOnRtnForQuoteRsp(CThostFtdcForQuoteRspField *pForQuoteRsp) = 0;

    virtual void PyOnRtnCFMMCTradingAccountToken(CThostFtdcCFMMCTradingAccountTokenField *pCFMMCTradingAccountToken) = 0;

    virtual void PyOnErrRtnBatchOrderAction(CThostFtdcBatchOrderActionField *pBatchOrderAction, CThostFtdcRspInfoField *pRspInfo) = 0;

    virtual void PyOnRtnOptionSelfClose(CThostFtdcOptionSelfCloseField *pOptionSelfClose) = 0;

    virtual void PyOnErrRtnOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField *pInputOptionSelfClose, CThostFtdcRspInfoField *pRspInfo) = 0;

    virtual void PyOnErrRtnOptionSelfCloseAction(CThostFtdcOptionSelfCloseActionField *pOptionSelfCloseAction, CThostFtdcRspInfoField *pRspInfo) = 0;

    virtual void PyOnRtnCombAction(CThostFtdcCombActionField *pCombAction) = 0;

    virtual void PyOnErrRtnCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, CThostFtdcRspInfoField *pRspInfo) = 0;

    virtual void PyOnRspQryContractBank(CThostFtdcContractBankField *pContractBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryParkedOrder(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryTradingNotice(CThostFtdcTradingNoticeField *pTradingNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryBrokerTradingParams(CThostFtdcBrokerTradingParamsField *pBrokerTradingParams, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQryBrokerTradingAlgos(CThostFtdcBrokerTradingAlgosField *pBrokerTradingAlgos, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQueryCFMMCTradingAccountToken(CThostFtdcQueryCFMMCTradingAccountTokenField *pQueryCFMMCTradingAccountToken, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRtnFromBankToFutureByBank(CThostFtdcRspTransferField *pRspTransfer) = 0;

    virtual void PyOnRtnFromFutureToBankByBank(CThostFtdcRspTransferField *pRspTransfer) = 0;

    virtual void PyOnRtnRepealFromBankToFutureByBank(CThostFtdcRspRepealField *pRspRepeal) = 0;

    virtual void PyOnRtnRepealFromFutureToBankByBank(CThostFtdcRspRepealField *pRspRepeal) = 0;

    virtual void PyOnRtnFromBankToFutureByFuture(CThostFtdcRspTransferField *pRspTransfer) = 0;

    virtual void PyOnRtnFromFutureToBankByFuture(CThostFtdcRspTransferField *pRspTransfer) = 0;

    virtual void PyOnRtnRepealFromBankToFutureByFutureManual(CThostFtdcRspRepealField *pRspRepeal) = 0;

    virtual void PyOnRtnRepealFromFutureToBankByFutureManual(CThostFtdcRspRepealField *pRspRepeal) = 0;

    virtual void PyOnRtnQueryBankBalanceByFuture(CThostFtdcNotifyQueryAccountField *pNotifyQueryAccount) = 0;

    virtual void PyOnErrRtnBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo) = 0;

    virtual void PyOnErrRtnFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo) = 0;

    virtual void PyOnErrRtnRepealBankToFutureByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo) = 0;

    virtual void PyOnErrRtnRepealFutureToBankByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo) = 0;

    virtual void PyOnErrRtnQueryBankBalanceByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo) = 0;

    virtual void PyOnRtnRepealFromBankToFutureByFuture(CThostFtdcRspRepealField *pRspRepeal) = 0;

    virtual void PyOnRtnRepealFromFutureToBankByFuture(CThostFtdcRspRepealField *pRspRepeal) = 0;

    virtual void PyOnRspFromBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspFromFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRspQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) = 0;

    virtual void PyOnRtnOpenAccountByBank(CThostFtdcOpenAccountField *pOpenAccount) = 0;

    virtual void PyOnRtnCancelAccountByBank(CThostFtdcCancelAccountField *pCancelAccount) = 0;

    virtual void PyOnRtnChangeAccountByBank(CThostFtdcChangeAccountField *pChangeAccount) = 0;

    
};


namespace py = pybind11;

class PyTdApi final : public TdApi {
public:
    using TdApi::TdApi;

    void PyOnFrontConnected() override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
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
                    TdApi,
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
                    TdApi,
                    "OnHeartBeatWarning",
                    PyOnHeartBeatWarning,
                    nTimeLapse
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspAuthenticate(CThostFtdcRspAuthenticateField *pRspAuthenticateField, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspAuthenticate",
                    PyOnRspAuthenticate,
                    pRspAuthenticateField,
                    pRspInfo,
                    nRequestID,
                    bIsLast
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
                    TdApi,
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
                    TdApi,
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

    void PyOnRspUserPasswordUpdate(CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspUserPasswordUpdate",
                    PyOnRspUserPasswordUpdate,
                    pUserPasswordUpdate,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspTradingAccountPasswordUpdate",
                    PyOnRspTradingAccountPasswordUpdate,
                    pTradingAccountPasswordUpdate,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspUserAuthMethod(CThostFtdcRspUserAuthMethodField *pRspUserAuthMethod, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspUserAuthMethod",
                    PyOnRspUserAuthMethod,
                    pRspUserAuthMethod,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspGenUserCaptcha(CThostFtdcRspGenUserCaptchaField *pRspGenUserCaptcha, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspGenUserCaptcha",
                    PyOnRspGenUserCaptcha,
                    pRspGenUserCaptcha,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspGenUserText(CThostFtdcRspGenUserTextField *pRspGenUserText, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspGenUserText",
                    PyOnRspGenUserText,
                    pRspGenUserText,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspOrderInsert",
                    PyOnRspOrderInsert,
                    pInputOrder,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspParkedOrderInsert(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspParkedOrderInsert",
                    PyOnRspParkedOrderInsert,
                    pParkedOrder,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspParkedOrderAction",
                    PyOnRspParkedOrderAction,
                    pParkedOrderAction,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspOrderAction",
                    PyOnRspOrderAction,
                    pInputOrderAction,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQueryMaxOrderVolume(CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQueryMaxOrderVolume",
                    PyOnRspQueryMaxOrderVolume,
                    pQueryMaxOrderVolume,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspSettlementInfoConfirm",
                    PyOnRspSettlementInfoConfirm,
                    pSettlementInfoConfirm,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspRemoveParkedOrder(CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspRemoveParkedOrder",
                    PyOnRspRemoveParkedOrder,
                    pRemoveParkedOrder,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspRemoveParkedOrderAction",
                    PyOnRspRemoveParkedOrderAction,
                    pRemoveParkedOrderAction,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspExecOrderInsert",
                    PyOnRspExecOrderInsert,
                    pInputExecOrder,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspExecOrderAction(CThostFtdcInputExecOrderActionField *pInputExecOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspExecOrderAction",
                    PyOnRspExecOrderAction,
                    pInputExecOrderAction,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspForQuoteInsert",
                    PyOnRspForQuoteInsert,
                    pInputForQuote,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQuoteInsert",
                    PyOnRspQuoteInsert,
                    pInputQuote,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQuoteAction(CThostFtdcInputQuoteActionField *pInputQuoteAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQuoteAction",
                    PyOnRspQuoteAction,
                    pInputQuoteAction,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspBatchOrderAction(CThostFtdcInputBatchOrderActionField *pInputBatchOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspBatchOrderAction",
                    PyOnRspBatchOrderAction,
                    pInputBatchOrderAction,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField *pInputOptionSelfClose, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspOptionSelfCloseInsert",
                    PyOnRspOptionSelfCloseInsert,
                    pInputOptionSelfClose,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspOptionSelfCloseAction(CThostFtdcInputOptionSelfCloseActionField *pInputOptionSelfCloseAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspOptionSelfCloseAction",
                    PyOnRspOptionSelfCloseAction,
                    pInputOptionSelfCloseAction,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspCombActionInsert",
                    PyOnRspCombActionInsert,
                    pInputCombAction,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryOrder(CThostFtdcOrderField *pOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryOrder",
                    PyOnRspQryOrder,
                    pOrder,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryTrade(CThostFtdcTradeField *pTrade, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryTrade",
                    PyOnRspQryTrade,
                    pTrade,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryInvestorPosition(CThostFtdcInvestorPositionField *pInvestorPosition, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryInvestorPosition",
                    PyOnRspQryInvestorPosition,
                    pInvestorPosition,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryTradingAccount",
                    PyOnRspQryTradingAccount,
                    pTradingAccount,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryInvestor(CThostFtdcInvestorField *pInvestor, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryInvestor",
                    PyOnRspQryInvestor,
                    pInvestor,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryTradingCode(CThostFtdcTradingCodeField *pTradingCode, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryTradingCode",
                    PyOnRspQryTradingCode,
                    pTradingCode,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryInstrumentMarginRate(CThostFtdcInstrumentMarginRateField *pInstrumentMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryInstrumentMarginRate",
                    PyOnRspQryInstrumentMarginRate,
                    pInstrumentMarginRate,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryInstrumentCommissionRate(CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryInstrumentCommissionRate",
                    PyOnRspQryInstrumentCommissionRate,
                    pInstrumentCommissionRate,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryExchange(CThostFtdcExchangeField *pExchange, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryExchange",
                    PyOnRspQryExchange,
                    pExchange,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryProduct(CThostFtdcProductField *pProduct, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryProduct",
                    PyOnRspQryProduct,
                    pProduct,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryInstrument(CThostFtdcInstrumentField *pInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryInstrument",
                    PyOnRspQryInstrument,
                    pInstrument,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryDepthMarketData",
                    PyOnRspQryDepthMarketData,
                    pDepthMarketData,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQrySettlementInfo(CThostFtdcSettlementInfoField *pSettlementInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQrySettlementInfo",
                    PyOnRspQrySettlementInfo,
                    pSettlementInfo,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryTransferBank(CThostFtdcTransferBankField *pTransferBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryTransferBank",
                    PyOnRspQryTransferBank,
                    pTransferBank,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryInvestorPositionDetail(CThostFtdcInvestorPositionDetailField *pInvestorPositionDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryInvestorPositionDetail",
                    PyOnRspQryInvestorPositionDetail,
                    pInvestorPositionDetail,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryNotice(CThostFtdcNoticeField *pNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryNotice",
                    PyOnRspQryNotice,
                    pNotice,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQrySettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQrySettlementInfoConfirm",
                    PyOnRspQrySettlementInfoConfirm,
                    pSettlementInfoConfirm,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryInvestorPositionCombineDetail(CThostFtdcInvestorPositionCombineDetailField *pInvestorPositionCombineDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryInvestorPositionCombineDetail",
                    PyOnRspQryInvestorPositionCombineDetail,
                    pInvestorPositionCombineDetail,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryCFMMCTradingAccountKey(CThostFtdcCFMMCTradingAccountKeyField *pCFMMCTradingAccountKey, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryCFMMCTradingAccountKey",
                    PyOnRspQryCFMMCTradingAccountKey,
                    pCFMMCTradingAccountKey,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryEWarrantOffset(CThostFtdcEWarrantOffsetField *pEWarrantOffset, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryEWarrantOffset",
                    PyOnRspQryEWarrantOffset,
                    pEWarrantOffset,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryInvestorProductGroupMargin(CThostFtdcInvestorProductGroupMarginField *pInvestorProductGroupMargin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryInvestorProductGroupMargin",
                    PyOnRspQryInvestorProductGroupMargin,
                    pInvestorProductGroupMargin,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryExchangeMarginRate(CThostFtdcExchangeMarginRateField *pExchangeMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryExchangeMarginRate",
                    PyOnRspQryExchangeMarginRate,
                    pExchangeMarginRate,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryExchangeMarginRateAdjust(CThostFtdcExchangeMarginRateAdjustField *pExchangeMarginRateAdjust, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryExchangeMarginRateAdjust",
                    PyOnRspQryExchangeMarginRateAdjust,
                    pExchangeMarginRateAdjust,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryExchangeRate(CThostFtdcExchangeRateField *pExchangeRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryExchangeRate",
                    PyOnRspQryExchangeRate,
                    pExchangeRate,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQrySecAgentACIDMap(CThostFtdcSecAgentACIDMapField *pSecAgentACIDMap, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQrySecAgentACIDMap",
                    PyOnRspQrySecAgentACIDMap,
                    pSecAgentACIDMap,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryProductExchRate(CThostFtdcProductExchRateField *pProductExchRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryProductExchRate",
                    PyOnRspQryProductExchRate,
                    pProductExchRate,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryProductGroup(CThostFtdcProductGroupField *pProductGroup, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryProductGroup",
                    PyOnRspQryProductGroup,
                    pProductGroup,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryMMInstrumentCommissionRate(CThostFtdcMMInstrumentCommissionRateField *pMMInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryMMInstrumentCommissionRate",
                    PyOnRspQryMMInstrumentCommissionRate,
                    pMMInstrumentCommissionRate,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryMMOptionInstrCommRate(CThostFtdcMMOptionInstrCommRateField *pMMOptionInstrCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryMMOptionInstrCommRate",
                    PyOnRspQryMMOptionInstrCommRate,
                    pMMOptionInstrCommRate,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryInstrumentOrderCommRate(CThostFtdcInstrumentOrderCommRateField *pInstrumentOrderCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryInstrumentOrderCommRate",
                    PyOnRspQryInstrumentOrderCommRate,
                    pInstrumentOrderCommRate,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQrySecAgentTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQrySecAgentTradingAccount",
                    PyOnRspQrySecAgentTradingAccount,
                    pTradingAccount,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQrySecAgentCheckMode(CThostFtdcSecAgentCheckModeField *pSecAgentCheckMode, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQrySecAgentCheckMode",
                    PyOnRspQrySecAgentCheckMode,
                    pSecAgentCheckMode,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQrySecAgentTradeInfo(CThostFtdcSecAgentTradeInfoField *pSecAgentTradeInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQrySecAgentTradeInfo",
                    PyOnRspQrySecAgentTradeInfo,
                    pSecAgentTradeInfo,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryOptionInstrTradeCost(CThostFtdcOptionInstrTradeCostField *pOptionInstrTradeCost, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryOptionInstrTradeCost",
                    PyOnRspQryOptionInstrTradeCost,
                    pOptionInstrTradeCost,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryOptionInstrCommRate(CThostFtdcOptionInstrCommRateField *pOptionInstrCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryOptionInstrCommRate",
                    PyOnRspQryOptionInstrCommRate,
                    pOptionInstrCommRate,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryExecOrder(CThostFtdcExecOrderField *pExecOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryExecOrder",
                    PyOnRspQryExecOrder,
                    pExecOrder,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryForQuote(CThostFtdcForQuoteField *pForQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryForQuote",
                    PyOnRspQryForQuote,
                    pForQuote,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryQuote(CThostFtdcQuoteField *pQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryQuote",
                    PyOnRspQryQuote,
                    pQuote,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryOptionSelfClose(CThostFtdcOptionSelfCloseField *pOptionSelfClose, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryOptionSelfClose",
                    PyOnRspQryOptionSelfClose,
                    pOptionSelfClose,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryInvestUnit(CThostFtdcInvestUnitField *pInvestUnit, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryInvestUnit",
                    PyOnRspQryInvestUnit,
                    pInvestUnit,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryCombInstrumentGuard(CThostFtdcCombInstrumentGuardField *pCombInstrumentGuard, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryCombInstrumentGuard",
                    PyOnRspQryCombInstrumentGuard,
                    pCombInstrumentGuard,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryCombAction(CThostFtdcCombActionField *pCombAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryCombAction",
                    PyOnRspQryCombAction,
                    pCombAction,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryTransferSerial(CThostFtdcTransferSerialField *pTransferSerial, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryTransferSerial",
                    PyOnRspQryTransferSerial,
                    pTransferSerial,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryAccountregister(CThostFtdcAccountregisterField *pAccountregister, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryAccountregister",
                    PyOnRspQryAccountregister,
                    pAccountregister,
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
                    TdApi,
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

    void PyOnRtnOrder(CThostFtdcOrderField *pOrder) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRtnOrder",
                    PyOnRtnOrder,
                    pOrder
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRtnTrade(CThostFtdcTradeField *pTrade) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRtnTrade",
                    PyOnRtnTrade,
                    pTrade
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnErrRtnOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnErrRtnOrderInsert",
                    PyOnErrRtnOrderInsert,
                    pInputOrder,
                    pRspInfo
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnErrRtnOrderAction(CThostFtdcOrderActionField *pOrderAction, CThostFtdcRspInfoField *pRspInfo) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnErrRtnOrderAction",
                    PyOnErrRtnOrderAction,
                    pOrderAction,
                    pRspInfo
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRtnInstrumentStatus(CThostFtdcInstrumentStatusField *pInstrumentStatus) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRtnInstrumentStatus",
                    PyOnRtnInstrumentStatus,
                    pInstrumentStatus
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRtnBulletin(CThostFtdcBulletinField *pBulletin) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRtnBulletin",
                    PyOnRtnBulletin,
                    pBulletin
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRtnTradingNotice(CThostFtdcTradingNoticeInfoField *pTradingNoticeInfo) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRtnTradingNotice",
                    PyOnRtnTradingNotice,
                    pTradingNoticeInfo
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRtnErrorConditionalOrder(CThostFtdcErrorConditionalOrderField *pErrorConditionalOrder) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRtnErrorConditionalOrder",
                    PyOnRtnErrorConditionalOrder,
                    pErrorConditionalOrder
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRtnExecOrder(CThostFtdcExecOrderField *pExecOrder) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRtnExecOrder",
                    PyOnRtnExecOrder,
                    pExecOrder
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnErrRtnExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, CThostFtdcRspInfoField *pRspInfo) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnErrRtnExecOrderInsert",
                    PyOnErrRtnExecOrderInsert,
                    pInputExecOrder,
                    pRspInfo
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnErrRtnExecOrderAction(CThostFtdcExecOrderActionField *pExecOrderAction, CThostFtdcRspInfoField *pRspInfo) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnErrRtnExecOrderAction",
                    PyOnErrRtnExecOrderAction,
                    pExecOrderAction,
                    pRspInfo
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnErrRtnForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, CThostFtdcRspInfoField *pRspInfo) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnErrRtnForQuoteInsert",
                    PyOnErrRtnForQuoteInsert,
                    pInputForQuote,
                    pRspInfo
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRtnQuote(CThostFtdcQuoteField *pQuote) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRtnQuote",
                    PyOnRtnQuote,
                    pQuote
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnErrRtnQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, CThostFtdcRspInfoField *pRspInfo) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnErrRtnQuoteInsert",
                    PyOnErrRtnQuoteInsert,
                    pInputQuote,
                    pRspInfo
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnErrRtnQuoteAction(CThostFtdcQuoteActionField *pQuoteAction, CThostFtdcRspInfoField *pRspInfo) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnErrRtnQuoteAction",
                    PyOnErrRtnQuoteAction,
                    pQuoteAction,
                    pRspInfo
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
                    TdApi,
                    "OnRtnForQuoteRsp",
                    PyOnRtnForQuoteRsp,
                    pForQuoteRsp
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRtnCFMMCTradingAccountToken(CThostFtdcCFMMCTradingAccountTokenField *pCFMMCTradingAccountToken) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRtnCFMMCTradingAccountToken",
                    PyOnRtnCFMMCTradingAccountToken,
                    pCFMMCTradingAccountToken
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnErrRtnBatchOrderAction(CThostFtdcBatchOrderActionField *pBatchOrderAction, CThostFtdcRspInfoField *pRspInfo) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnErrRtnBatchOrderAction",
                    PyOnErrRtnBatchOrderAction,
                    pBatchOrderAction,
                    pRspInfo
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRtnOptionSelfClose(CThostFtdcOptionSelfCloseField *pOptionSelfClose) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRtnOptionSelfClose",
                    PyOnRtnOptionSelfClose,
                    pOptionSelfClose
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnErrRtnOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField *pInputOptionSelfClose, CThostFtdcRspInfoField *pRspInfo) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnErrRtnOptionSelfCloseInsert",
                    PyOnErrRtnOptionSelfCloseInsert,
                    pInputOptionSelfClose,
                    pRspInfo
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnErrRtnOptionSelfCloseAction(CThostFtdcOptionSelfCloseActionField *pOptionSelfCloseAction, CThostFtdcRspInfoField *pRspInfo) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnErrRtnOptionSelfCloseAction",
                    PyOnErrRtnOptionSelfCloseAction,
                    pOptionSelfCloseAction,
                    pRspInfo
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRtnCombAction(CThostFtdcCombActionField *pCombAction) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRtnCombAction",
                    PyOnRtnCombAction,
                    pCombAction
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnErrRtnCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, CThostFtdcRspInfoField *pRspInfo) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnErrRtnCombActionInsert",
                    PyOnErrRtnCombActionInsert,
                    pInputCombAction,
                    pRspInfo
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryContractBank(CThostFtdcContractBankField *pContractBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryContractBank",
                    PyOnRspQryContractBank,
                    pContractBank,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryParkedOrder(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryParkedOrder",
                    PyOnRspQryParkedOrder,
                    pParkedOrder,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryParkedOrderAction",
                    PyOnRspQryParkedOrderAction,
                    pParkedOrderAction,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryTradingNotice(CThostFtdcTradingNoticeField *pTradingNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryTradingNotice",
                    PyOnRspQryTradingNotice,
                    pTradingNotice,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryBrokerTradingParams(CThostFtdcBrokerTradingParamsField *pBrokerTradingParams, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryBrokerTradingParams",
                    PyOnRspQryBrokerTradingParams,
                    pBrokerTradingParams,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQryBrokerTradingAlgos(CThostFtdcBrokerTradingAlgosField *pBrokerTradingAlgos, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQryBrokerTradingAlgos",
                    PyOnRspQryBrokerTradingAlgos,
                    pBrokerTradingAlgos,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQueryCFMMCTradingAccountToken(CThostFtdcQueryCFMMCTradingAccountTokenField *pQueryCFMMCTradingAccountToken, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQueryCFMMCTradingAccountToken",
                    PyOnRspQueryCFMMCTradingAccountToken,
                    pQueryCFMMCTradingAccountToken,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRtnFromBankToFutureByBank(CThostFtdcRspTransferField *pRspTransfer) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRtnFromBankToFutureByBank",
                    PyOnRtnFromBankToFutureByBank,
                    pRspTransfer
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRtnFromFutureToBankByBank(CThostFtdcRspTransferField *pRspTransfer) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRtnFromFutureToBankByBank",
                    PyOnRtnFromFutureToBankByBank,
                    pRspTransfer
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRtnRepealFromBankToFutureByBank(CThostFtdcRspRepealField *pRspRepeal) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRtnRepealFromBankToFutureByBank",
                    PyOnRtnRepealFromBankToFutureByBank,
                    pRspRepeal
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRtnRepealFromFutureToBankByBank(CThostFtdcRspRepealField *pRspRepeal) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRtnRepealFromFutureToBankByBank",
                    PyOnRtnRepealFromFutureToBankByBank,
                    pRspRepeal
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRtnFromBankToFutureByFuture(CThostFtdcRspTransferField *pRspTransfer) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRtnFromBankToFutureByFuture",
                    PyOnRtnFromBankToFutureByFuture,
                    pRspTransfer
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRtnFromFutureToBankByFuture(CThostFtdcRspTransferField *pRspTransfer) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRtnFromFutureToBankByFuture",
                    PyOnRtnFromFutureToBankByFuture,
                    pRspTransfer
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRtnRepealFromBankToFutureByFutureManual(CThostFtdcRspRepealField *pRspRepeal) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRtnRepealFromBankToFutureByFutureManual",
                    PyOnRtnRepealFromBankToFutureByFutureManual,
                    pRspRepeal
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRtnRepealFromFutureToBankByFutureManual(CThostFtdcRspRepealField *pRspRepeal) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRtnRepealFromFutureToBankByFutureManual",
                    PyOnRtnRepealFromFutureToBankByFutureManual,
                    pRspRepeal
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRtnQueryBankBalanceByFuture(CThostFtdcNotifyQueryAccountField *pNotifyQueryAccount) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRtnQueryBankBalanceByFuture",
                    PyOnRtnQueryBankBalanceByFuture,
                    pNotifyQueryAccount
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnErrRtnBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnErrRtnBankToFutureByFuture",
                    PyOnErrRtnBankToFutureByFuture,
                    pReqTransfer,
                    pRspInfo
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnErrRtnFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnErrRtnFutureToBankByFuture",
                    PyOnErrRtnFutureToBankByFuture,
                    pReqTransfer,
                    pRspInfo
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnErrRtnRepealBankToFutureByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnErrRtnRepealBankToFutureByFutureManual",
                    PyOnErrRtnRepealBankToFutureByFutureManual,
                    pReqRepeal,
                    pRspInfo
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnErrRtnRepealFutureToBankByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnErrRtnRepealFutureToBankByFutureManual",
                    PyOnErrRtnRepealFutureToBankByFutureManual,
                    pReqRepeal,
                    pRspInfo
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnErrRtnQueryBankBalanceByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnErrRtnQueryBankBalanceByFuture",
                    PyOnErrRtnQueryBankBalanceByFuture,
                    pReqQueryAccount,
                    pRspInfo
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRtnRepealFromBankToFutureByFuture(CThostFtdcRspRepealField *pRspRepeal) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRtnRepealFromBankToFutureByFuture",
                    PyOnRtnRepealFromBankToFutureByFuture,
                    pRspRepeal
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRtnRepealFromFutureToBankByFuture(CThostFtdcRspRepealField *pRspRepeal) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRtnRepealFromFutureToBankByFuture",
                    PyOnRtnRepealFromFutureToBankByFuture,
                    pRspRepeal
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspFromBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspFromBankToFutureByFuture",
                    PyOnRspFromBankToFutureByFuture,
                    pReqTransfer,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspFromFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspFromFutureToBankByFuture",
                    PyOnRspFromFutureToBankByFuture,
                    pReqTransfer,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRspQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRspQueryBankAccountMoneyByFuture",
                    PyOnRspQueryBankAccountMoneyByFuture,
                    pReqQueryAccount,
                    pRspInfo,
                    nRequestID,
                    bIsLast
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRtnOpenAccountByBank(CThostFtdcOpenAccountField *pOpenAccount) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRtnOpenAccountByBank",
                    PyOnRtnOpenAccountByBank,
                    pOpenAccount
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRtnCancelAccountByBank(CThostFtdcCancelAccountField *pCancelAccount) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRtnCancelAccountByBank",
                    PyOnRtnCancelAccountByBank,
                    pCancelAccount
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    void PyOnRtnChangeAccountByBank(CThostFtdcChangeAccountField *pChangeAccount) override {
        try {
            PYBIND11_OVERLOAD_PURE_NAME(
                    void,
                    TdApi,
                    "OnRtnChangeAccountByBank",
                    PyOnRtnChangeAccountByBank,
                    pChangeAccount
            );
        }
        catch (const py::error_already_set &e) {
            std::cout << e.what() << std::endl;
        }
    }

    

};

#endif //TD_API_H