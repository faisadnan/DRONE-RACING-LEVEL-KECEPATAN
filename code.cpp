#include <iostream>
using namespace std;

int main() {
    int kecepatan;
    cout << "Masukkan kecepatan drone (km/jam): ";
    cin >> kecepatan;

    if (kecepatan < 40) {
        cout << "Level: Basic" << endl;
    } else if (kecepatan < 80) {
        cout << "Level: Intermediate" << endl;
    } else if (kecepatan < 120) {
        cout << "Level: Advanced" << endl;
    } else {
        cout << "Level: Ultra" << endl;
    }

    return 0;
}
