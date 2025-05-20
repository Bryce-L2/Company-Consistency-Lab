//include guards stuff
#ifndef DISCOUNTS_H
#define DISCOUNTS_H

#include <string>

//applies the car coupon that is 30% off 
double car(double price);

//applies the truck coupon that is 10% off
double truck(double price);

//applies motorcycle coupon  that is 5% off
double motorcycle(double price);

//choces wich coupon to use base on what the user enters
double discount(std::string& code, double price);  

#endif
