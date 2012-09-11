#include <iostream>

#include <fq/marketdata/provider.h>
#include <fq/marketdata/ctp/ctpprovider.h>
#include <fq/trade/ctptradeprovider.h>
#include <boost/thread.hpp>

int main(int, char* []) {
    FreeQuant::MarketData::Provider *p = new FreeQuant::MarketData::CtpProvider();
    p->connect();
    boost::this_thread::sleep(boost::posix_time::seconds(2));
    p->disconnect();
    delete p;

    return 0;
}