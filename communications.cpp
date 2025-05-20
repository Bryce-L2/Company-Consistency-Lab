//needed for the function declerations 
#include "communications.h"
#include <iostream>
#include <cctype>

//prints the greeting with the users name
std::string greeting(std::string& name) {
    cout << "Hello " << name << ", welcome to Bryce's Overpriced Auto Parts!" << endl;
}

//turns the address to uppercase withe a for loop
void addressUpper(std::string& address) {
    for (int i = 0; i < address.length(); ++i) {
        address[i] = toupper(address[i]);
    }
}

//prints the thank ou/good bye message with the product that was randomly selected. 
std::string message(std::string& product) {
    cout << "Thank you for buying a " << product << "! I hope you could afford it!";
}
