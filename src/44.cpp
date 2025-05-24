#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Generate and print random numbers
    cout << "Random Numbers: ";
    for (int i = 0; i < n; ++i) {
        if (rand() % 2 == 0) {
            cout << rand();
        }
    }

    return 0;
}
