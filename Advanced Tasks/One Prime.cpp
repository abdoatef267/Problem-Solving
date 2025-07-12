#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;
    bool isPrime = true;
    for (int i = 2; i * i <= X; i++) {
        if (X % i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
        cout << "Yes Prime" << endl;
    else
        cout << "Not Prime" << endl;
    return 0;
}
