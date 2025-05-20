//Bryce Lombardo
//Company Consistency Lab
//5/20/25
//EXTRA: list of differnt items and price that correlate to them. 

#include <iostream>
#include <string>
#include <ctime>
#include "communications.h"
#include "discounts.h"

using namespace std;

int main() {
    string name;
    string address;
    string coupon;
    int numOfProducts = 5;
    
//list of different products that my store sells
    string products[] = {"cold air intake", "cat back exhaust", "turbo charger", "coil over suspension", "tinted head lights"};
//corresponding prices for the items 
    double prices[] = {150.00, 600.00, 1500.00, 1200.00, 250.00};

//getting the random number
    srand(time(NULL));
    int rando = rand() % numOfProducts;

//uses the random number to select the product and the price for it.
    string product = products[rando];
    double ogPrice = prices[rando];
    
//asks the suer to enter their name 
    cout << "Enter your name: ";
    cin >> name;

//asks user to enter their address
    cout << "Enter you address: ";
//getline alows for spaces in the answer 
    getline(cin, address);

//asks to user to enter the coupon they will be using 
    cout << "Enter your coupon code: ";
    cin >> coupon;

//prints out the greetting using the communications.cpp function
    cout << "\n" << greeting(name);

//converts the users address to uppercase using the function in communications.cpp
    addressUpper(address);
//prints out users adress in all caps
    cout << "\nUppercase address: " << address << ;

//uses the coupon from discount.cpp
    double finalPrice = discount(coupon, ogPrice);
//prints original price
    cout << "\nOriginal Price: $" << ogPrice;
//prints the price after the discout 
    cout << "\nPrice after discount: $" << finalPrice;

//prints out the thank you/good bye message using the communications.cpp function
    cout << message(product) << endl;

    return 0;
}
