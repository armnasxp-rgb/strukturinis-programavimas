#include <iostream>

using namespace std;

int main() {

    double v = 0;

    int pir_paz;
    int ant_paz;
    int tre_paz;
    int ket_paz;
    int pen_paz;

    cout << "pir_paz" << endl;
    cin >> pir_paz;

    cout << "ant_paz" << endl;
    cin >> ant_paz;

    cout << "tre_paz" << endl;
    cin >> tre_paz;

    cout << "ket_paz" << endl;
    cin >> ket_paz;

    cout << "pen_paz" << endl;
    cin >> pen_paz;

    v = (pir_paz + ant_paz + tre_paz + ket_paz + pen_paz) / 5.0;

    cout << "Vidurkis " << v << endl;

    if (v >= 5) {
        cout << "Vidurkis Teigiamas";
    }
    else {
        cout << "Vidurkis Neigiamas";
    }

    return 0;
}