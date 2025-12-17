#include <iostream>
using namespace std;

int main() {
    int baris = 5;

    // Membuat Segitiga Pascal
    for (int i = 0; i < baris; i++) {
        // Spasi agar membentuk segitiga
        for (int s = 0; s < baris - i; s++) {
            cout << " ";
        }

        int nilai = 1;
        for (int j = 0; j <= i; j++) {
            cout << nilai << " ";
            nilai = nilai * (i - j) / (j + 1);
        }
        cout << endl;
    }
    return 0;
}