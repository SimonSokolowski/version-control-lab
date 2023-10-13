#include <iostream>
#include <string>

using namespace std;

// Forward declaration
int sumUserNumbers();

int main() {
    
    int daysInWeek = 7;
    float centimetersInInch = 2.54;
    string month = "October";
    int number = 00000000000;

    
    //sumUserNumbers();
    return 0;
}

int sumUserNumbers() {
    int x, y;
    cout << "Please enter two numbers:";
    cin >> x >> y;
    cout << "The sum of " << x << " and " << y << " is: " << x + y << endl;
    cout << "Press Enter to continue...";
    cin.ignore();  // Clear the newline character left over in the input buffer
    cin.get();  // Wait for Enter key
    system("pause");
    return 0;
}
