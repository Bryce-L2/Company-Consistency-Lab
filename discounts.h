#ifndef DISCOUNTS_H
#define DISCOUNTS_H
#include <string>

double student(double price) {
    return price * 0.70;
}

double senior(double price) {
    return price * 0.90;
}

double veteran(double price) {
    return price * 0.95;
}

double discount(const std::string& code, double price) {
    if (code == "Car" || code == "car") {
        return student(price);
    } else if (code == "Truck" || code == "truck") {
        return senior(price);
    } else if (code == "Van" || code == "van") {
        return veteran(price);
    } else {
    return price;
    }
}

#endif
