#include <chrono>
#include <iostream>
#include <thread>

#include "gdax-orderbook.hpp"

int main(int argc, char* argv[]) {
    GDAXOrderBook book("ETH-USD");

    std::cout << "best bid: Ξ" << book.bids.begin()->second << " @ $"
                               << book.bids.begin()->first << "/Ξ ; ";
    std::cout << "best offer: Ξ" << book.asks.begin()->second << " @ $"
                                 << book.asks.begin()->first << "/Ξ"
                                 << std::endl;

    size_t secondsToSleep = 5;
    std::cout << "sleeping for " << secondsToSleep << " seconds" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(secondsToSleep));

    std::cout << "best bid: Ξ" << book.bids.begin()->second << " @ $"
                               << book.bids.begin()->first << "/Ξ ; ";
    std::cout << "best offer: Ξ" << book.asks.begin()->second << " @ $"
                                 << book.asks.begin()->first << "/Ξ"
                                 << std::endl;
}
