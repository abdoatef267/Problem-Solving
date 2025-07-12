#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num > 0)
        cout << "Number is positive.";
    else if (num < 0)
        cout << "Number is negative.";
    else
        cout << "Number is zero.";

    return 0;
}
