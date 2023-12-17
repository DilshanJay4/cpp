#include <iostream>

using namespace std;


void inputHeights(float heightArr[], int size){
    for (int i = 0; i < size; i++) {
            cout << "Enter the Height of student " << (i + 1) << " : ";
            cin >> heightArr[i];
    }
}

float findMaxHeight(float heightArr[], int size) {
    float maxHeight = heightArr[0];

    for (int i = 1; i < size; i++) {
        if (heightArr[i] > maxHeight) {
            maxHeight = heightArr[i];
        }
    }

    return maxHeight;
}


float findMinHeight(const float heightArr[], int size) {
    float minHeight = heightArr[0];

    for (int i = 1; i < size; i++) {
        if (heightArr[i] < minHeight) {
            minHeight = heightArr[i];
        }
    }

    return minHeight;
}



float findTotalHeight(const float heightArr[], int size) {
    float totalHeight = 0;

    for (int i = 0; i < size; i++) {
        totalHeight += heightArr[i];
    }

    return totalHeight;
}



void printHeights(const float heightArr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "The Height of Student " << (i + 1) << ": " << heightArr[i] << endl;
    }
}


// float findMaxHeight(const float heightArr[], int size) {
//     float maxHeight = heightArr[0];

//     for (int i = 1; i < size; i++) {
//         maxHeight = fmax(maxHeight, heightArr[i]);
//     }

//     return maxHeight;
// }




int main() {
    const int size = 5;
    float heightArray[size];

    cout << "Height of the Students \n";
    inputHeights(heightArray, size);

    float maxHeight = findMaxHeight(heightArray, size);

    float minHeight = findMinHeight(heightArray, size);

    float totalHeight = findTotalHeight(heightArray, size);

    printHeights(heightArray, size);

    return 0;
}
