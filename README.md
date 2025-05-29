# Internet Protocol Stack Simulation

## Description
Simulates encapsulation and decapsulation across Application, Transport, Network, and Link layers using C++. Outputs each layer’s actions on send and receive.

## How to Build
```bash
g++ -std=c++11 main.cpp layers/*.cpp -o network_sim
./network_sim
