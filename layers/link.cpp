#include "link.h"
#include <iostream>

std::string LinkSend(const std::string& data) {
    std::cout << "[Link Layer] Sending: " << data << std::endl;
    return "LINK_HDR|" + data;
}

std::string LinkReceive(const std::string& data) {
    std::cout << "[Link Layer] Receiving: " << data << std::endl;
    return data.substr(data.find('|') + 1);
}
