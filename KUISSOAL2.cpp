#include <iostream>
using namespace std;

int main() {
    int baris = 6;

    for (int i = 1; i <= baris; i++) {
        for (int s = 0; s < baris - i; s++) {
            cout << " ";
        }

        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

}