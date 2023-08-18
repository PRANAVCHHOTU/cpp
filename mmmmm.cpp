#include <iostream>
using namespace std;

int main() {
    int height;
    cout << "Enter the height of the triangle: ";
    cin >> height;

    for (int i = 0; i < height; ++i) {
        // Print spaces before the asterisks
        for (int j = 0; j < height - i - 1; ++j) {
            cout << " ";
        }
          
        // Print asterisks
        for (int j = 0; j < 2 * i + 1; ++j) {
            cout << "*";
        }

        cout << endl;  // Move to the next line after each row
    }

    return 0;
}
