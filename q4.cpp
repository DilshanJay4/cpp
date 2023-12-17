#include<iostream>
#include <string>

using namespace std;

int main() {

    string foodItem;
    int noItems; 
    float totalPrice = 0.0;
    char moreData;

    do {

        // Get user input
        cout << "Enter the food item code: ";
        cin >> foodItem;

        cout << "Enter the quantity: ";
        cin >> noItems;

        if(foodItem == "AK012"){
            totalPrice += (120 - (120 * 0.02)) * noItems;
        }else if(foodItem == "AK013"){
            totalPrice += (350 - (350 * 0.03)) * noItems;
        }else if(foodItem == "AK014"){
            totalPrice += (350 - (350 * 0.03)) * noItems;
        }else if(foodItem == "AK015"){
            totalPrice += (250 - (250 * 0.05)) * noItems;
        }else{
            cout << "Invalid Food Item!";
        }


        // Ask if there is more data
            cout << "Do you have more data? (Y/N): ";
            cin >> moreData;

    } while (moreData == 'y' || moreData == 'Y');


    cout << "Total Price is: " << totalPrice << endl;


    return 0;
}
