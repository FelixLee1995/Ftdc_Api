#pragma once
#include "ThostFtdcMdApi.h"
#include "MyMarketApi.h"
#include <iostream>

class MyMarketApi;



class MyMarketSpi: public CThostFtdcMdSpi {

    public:

		MyMarketSpi(MyMarketApi * api);

		~MyMarketSpi();

        void OnFrontConnected() override;
        void OnFrontDisconnected(int nReason) override;

        void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

	    void OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

	    void OnRspSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;

	    void OnRspUnSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) override;
	    //void OnRtnDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData) override;


    private:
        MyMarketApi* m_api_;
};