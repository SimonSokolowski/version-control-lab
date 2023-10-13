#include <iostream>

using namespace std;

int tipCalculator();

int main () {
    tipCalculator();
    return 0;
}

int tipCalculator() {
    float price, percentage;

    cout << "please enter the price and tip percentage: ";
    cin >> price >> percentage;
    cout << "your tip will be " << price*(percentage*0.01) << endl;
    cin.ignore();
    cin.get();
    system("pause");
    return 0;
}