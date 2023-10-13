#include <iostream>
#include <string>

using namespace std;

int formatter();

int main() {
    formatter();
    return 0;
}

int formatter() {
    long num;
    string formattedNum;
    string numString;

    cout << "please input 11 digit phone number ";
    cin >> num;

    numString = to_string(num);

    formattedNum =  "(" + numString.substr(0,3) + ")" + " " + numString.substr(3,4) + " " + numString.substr(7,4);

    cout << "your reformatted num is: " << formattedNum << endl;
    
    cin.ignore();
    cin.get();
    system("pause");
    return 0;
}