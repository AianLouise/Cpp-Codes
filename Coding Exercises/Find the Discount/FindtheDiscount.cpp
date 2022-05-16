#include <iostream>
using namespace std;

float discounted_price(float original_price, float discount){
   float final_price = original_price - (original_price * discount / 100);
   return final_price;
}

int main(){
    
    float original_price, discount, price;

    cout << "=====================" << endl;
    cout << "  Find the Discount" << endl;
    cout << "=====================" << endl;
    cout << "Enter the original price: ";
    cin >> original_price;
    cout << "Enter discount: ";
    cin >> discount;

    price = discounted_price(original_price, discount);

    cout << "\n============================" << endl;
    cout << "The Discounted price is " << price << endl;
    cout << "============================" << endl;
    cout << "You save " << (original_price * discount / 100) << ".";
}