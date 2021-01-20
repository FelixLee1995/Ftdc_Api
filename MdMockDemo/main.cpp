#include "ThostFtdcMdApi.h"
#include "MyMarketSpi.h"
#include <string>
#include <cassert>
#include <thread>
#include <chrono>

std::string brokerid = "9999";
std::string userid = "123616";
std::string pwd = "nanase4ever";
std::string marketFrontAddr = "tcp://180.168.146.187:10110";
//std::string marketFrontAddr = "tcp://180.168.146.187:10131";


int main() {


    auto p_api = new MyMarketApi(brokerid, userid, pwd, marketFrontAddr);
    p_api->Init();
    std::this_thread::sleep_for(std::chrono::milliseconds(10000));

    p_api->ReqUserLogin();
    std::this_thread::sleep_for(std::chrono::milliseconds(10000));

    getchar();

	return 0;
}