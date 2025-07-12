#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    if (num1 == num2)
        cout << "Both numbers are equal.";
    else
        cout << "Numbers are not equal.";

    return 0;
}
