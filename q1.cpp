#include <iostream>
#include <cmath>

using namespace std;

void InputProduction(float productionArray[], int size) {
    for (int i = 0; i < size; i++) {
        do {
            cout << "Enter production for machine on day " << (i + 1) << ": ";
            cin >> productionArray[i];

            if (productionArray[i] < 15.5 || productionArray[i] > 75.0) {
                cout << "Invalid input. Production must be between 15.5 and 75.0. Try again.\n";
            }
        } while (productionArray[i] < 15.5 || productionArray[i] > 75.0);
    }
}


char minimumMachine(float a, float b, float c){
    double minValue;

    // Compare a ,b, c for the minimum value
    if(a < b){
        minValue = a;
    }else{
        minValue = b;
    }

    if(c < minValue){
        minValue = c;
    }

    // Returning the Machine which has the minimum Production.
    if(minValue == a){
        return 'A';
    }else if(minValue == b){
        return 'B';
    }else{
        return 'C';
    }

}

char maximumMachine(float a, float b, float c){
    double maxValue;

    // Compare a ,b, c for the minimum value
    if(a > b){
        maxValue = a;
    }else{
        maxValue = b;
    }

    if(c > maxValue){
        maxValue = c;
    }

    // Returning the Machine which has the minimum Production.
    if(maxValue == a){
        return 'A';
    }else if(maxValue == b){
        return 'B';
    }else{
        return 'C';
    }

}


float averageProduction(float a, float b, float c){
    float avg;

    avg = (a + b + c) / 3.0;

    return avg;
}


float totalProduction(float a, float b, float c){

    float total;
    total  = a + b + c;

    return total;
}


float getProduction(float productionArr[], int d){
    int day = d - 1;

    float production = productionArr[day];

    return production;
}






int main() {
    const int numMachines = 3;
    const int numDays = 4;
    float value1, value2, value3;
    float productionA[numDays];
    float productionB[numDays];
    float productionC[numDays];

    cout << "Please enter production values for each machine.\n";

    // Input production values for Machine A
    cout << "Production values for Machine A.\n";
    InputProduction(productionA, numDays);

     cout << endl;

    // Input production values for Machine B
    cout << "Production values for Machine B.\n";
    InputProduction(productionB, numDays);

     cout << endl;

    // Input production values for Machine C
    cout << "Production values for Machine C.\n";
    InputProduction(productionC, numDays);

    // Display the entered production values
    cout << "\nProduction values entered:\n\n";
    for (int i = 0; i < numDays; i++) {
        cout << "Day " << (i + 1) << ": A = " << productionA[i] << ", B = " << productionB[i] << ", C = " << productionC[i] << "\n";
    }



    cout << "Enter Value 1 :";
    cin >> value1;

    cout << "Enter Value 2 :";
    cin >> value2;

    cout << "Enter Value 3 :";
    cin >> value3;

    char lowestMachine = minimumMachine(value1, value2, value3); 
    cout << "Machine with the lowest Production: " << lowestMachine << endl;


    cout << endl;


    char highestMachine =  maximumMachine(value1, value2, value3);
    cout << "Machine with the highest Production: " << highestMachine << endl; 


    cout << endl;

    float average = averageProduction(value1, value2, value3);
    cout << "The average of all machines is: " << average << endl;


    cout << endl;

    float total = totalProduction(value1, value2, value3);
    cout << "The Total of all machines for day 1 is : " << total << endl;




    return 0;
}
