#include <iostream>
using namespace std;

int main() {
    int temp1, temp2, temp3;

//Input the first temperature reading
cout << "Enter the first temperature reading: ";
cin >> temp1;

// Input the second temperature reading
count << "Enter the second temperature reading: ";
cin >> temp2;

// Check the temperature difference between the first and second reading
if (temp2 - temp1 > 50) {
    cout << "Reduce fryer heat before taking the third reading.\n";
} else if (temp2 -temp1 < 10) {
    cout << "Increase the fryer heat before taking the third reading.\n";
}

// Input the third temperature reading
cout << "Enter the third temperature reading: ";
cin >> temp3;

// Check if the third temperature reading is within the desired range
if (temp3 >= 150 && temp3 <= 198) {
    cout << "You must start frying the magwinyas.\n";
} else {
    cout << "Oil is not ready for frying.\n";
}

return 0;
}
