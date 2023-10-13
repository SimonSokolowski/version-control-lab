#include <iostream>
#include <cstdlib>

using namespace std;

int statUserInput();

int main() {
    statUserInput();
    return 0;
}

int statUserInput() {

    int x,y;
    cout << "enter two numbers: ";
    cin >> x >> y;
    cout << "the sum of " << x << " and " << y << " is " << x+y << endl;
    cout << "the difference between " << x << " and " << y << " is " << x-y << endl;
    cout << "the product of " << x << " and " << y << " is " << x*y << endl;
    cout << "the distance between " << x << " and " << y << " is " << abs(x-y) << endl;
    cout << "the mean average of " << x << " and " << y << " is " << (x+y)/2 << endl;
    cin.ignore();
    cin.get();
    system("pause");

    return 0;
}