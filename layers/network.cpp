#include "network.h"
#include <iostream>

std::string NetSend(const std::string& data) {
    std::cout << "[Network Layer] Sending: " << data << std::endl;
    return "NET_HDR|" + data;
}

std::string NetReceive(const std::string& data) {
    std::cout << "[Network Layer] Receiving: " << data << std::endl;
    return data.substr(data.find('|') + 1);
}
