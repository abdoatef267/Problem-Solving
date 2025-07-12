#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    bool found = false;
    for (int i = 2; i <= N; i += 2) {
        cout << i << endl;
        found = true;
    }
    if (!found) {
        cout << "Not Even" << endl;
    }

    return 0;
}
