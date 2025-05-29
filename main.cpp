#include <iostream>
#include "layers/application.h"
#include "layers/transport.h"
#include "layers/network.h"
#include "layers/link.h"

int main() {
    std::string message = "Hello, Network!";
    std::cout << "Message sent: " << message << std::endl;

    std::cout << "\n==== Sending ====\n";
    std::string data = AppSend(message);
    data = TransSend(data);
    data = NetSend(data);
    data = LinkSend(data);

    std::cout << "\n==== Receiving ====\n";
    data = LinkReceive(data);
    data = NetReceive(data);
    data = TransReceive(data);
    data = AppReceive(data);

    std::cout << "\nFinal message received: " << data << std::endl;
    return 0;
}
