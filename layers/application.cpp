#include "application.h"
#include <iostream>

std::string AppSend(const std::string& data) {
    std::cout << "[Application Layer] Sending: " << data << std::endl;
    return "APP_HDR|" + data;
}

std::string AppReceive(const std::string& data) {
    std::cout << "[Application Layer] Receiving: " << data << std::endl;
    return data.substr(data.find('|') + 1);
}
