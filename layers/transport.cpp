#include "transport.h"
#include <iostream>

std::string TransSend(const std::string& data) {
    std::cout << "[Transport Layer] Sending: " << data << std::endl;
    return "TRANS_HDR|" + data;
}

std::string TransReceive(const std::string& data) {
    std::cout << "[Transport Layer] Receiving: " << data << std::endl;
    return data.substr(data.find('|') + 1);
}
