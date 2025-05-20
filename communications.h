//include guards stuff 
#ifndef COMMUNICATIONS_H
#define COMMUNICATIONS_H

#include <string>

//declares functions for the greeting message 
std::string greeting(std::string& name);

//declares function for making the address all uppercase
void addressUpper(std::string& address);

//declares function for the thank you/good bye message
std::string message(std::string& product);

#endif
