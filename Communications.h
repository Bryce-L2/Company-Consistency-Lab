#ifndef COMMUNICATIONS_H
#define COMMUNICATIONS_H
#include <string>
#include <iostream>

std::string greeting(std::string& name) {
    return "Hello " + name + ", welcome to Bryce's Over Priced Auto Shop!";
}

void addressUpper(std::string& address) { 
    for (size_t i = 0; i < address.length(); i++) {
        if (address[i] >= 'a' && address[i] <= 'z') {
            address[i] = address[i] - 'a' + 'A';
        }
    }
}

std::string message(std::string& productName) {
    return "Thank you for purchasing a " + productName + " at Bryce's Over Priced Auto Shop. We hope you enjoy your product!";
}

#endif
