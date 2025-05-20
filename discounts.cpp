//needed for the funciton declarations
#include "discounts.h"

//applies the 30% off coupon for car people 
double car(double price) {
    return price * 0.70;
}

//applies the 10% off coupon for truck people 
double truck(double price) {
    return price * 0.90;
}

//applies the 5% discount for motorcycle people
double motorcycle(double price) {
    return price * 0.95;
}

//chooses the correct discount based on what the user has entered 
double discount(std::string& code, double price) {
    if (code == "Car" || code == "car") {
        return car(price);
    } else if (code == "Truck" || code == "truck") {
        return truck(price);
    } else if (code == "Van" || code == "van") {
        return motorcycle(price);
    } else {
        return price;
    }
}
