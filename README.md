# Internet Protocol Stack Simulation

## Description
This program simulates encapsulation and decapsulation of the Internet protocol stack across the Application, Transport, Network, and Link layers using C++. Outputs each layer’s actions on send and receive.

## How to Build and Run
```bash
g++ -std=c++11 main.cpp layers/*.cpp -o network_sim
./network_sim
