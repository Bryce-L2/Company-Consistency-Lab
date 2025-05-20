// Bryce Lomabrdo
// Company Consistency Lab
// 5/20/25
// Extra: List of items and prices for each item and random select for each one.

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

    //EXTRA: Product and price list
     string products[] = {"cold air intake", "cat back exhaust","turbo charger", "coil over suspension", "tinted head lights"};
     double prices[] = {150.00, 600.00, 1500.00, 1200.00, 250.00};

    //EXTRA:random number generator for product that will be purchased
    srand(time(NULL));
    int index = rand() % numOfProducts;

    string product = products[index];
    double ogPrice = prices[index];

    //asks for name
    cout << "Enter your name: ";
    cin >> name;

    //asks for address
    cout << "Enter your street address: ";
    cin.ignore();
    getline(cin, address);

    //asks for coupon code
    cout << "Enter your coupon code: ";
    cin >> coupon;

    //prints the greeting using the header function
    cout << "\n" << greeting(name) << "\n";

    //uses header function and prints the uppercase address
    addressUpper(address);
    cout << "Uppercase address: " << address << "\n";

    //calculates final price after using the header function for the coupon discount
    double finalPrice = discount(coupon, ogPrice);
    cout << "Original Price: $" << ogPrice << "\n";
    cout << "Price after discounts: $" << finalPrice << "\n";

    //Uses header function and prints the good bye message 
    cout << message(product) << "\n";

    return 0;
}
