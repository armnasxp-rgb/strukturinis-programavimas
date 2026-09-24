#include <iostream>

using namespace std;

int main() {

    int ivertinimas;

    cout << "Iveskite ivertinima: ";
    cin >> ivertinimas;


    switch (ivertinimas) {
        case 10:
            cout << "Puiku";
            break;

        case 9:
            cout << "Labai geras";
            break;

        case 8:
        case 7:
            cout << "Gerai";
            break;

        case 6:
        case 5:
            cout << "Patenkinamai";
            break;

        default:
            cout << "Egzaminas neislaikytas";
            break;
    }

    return 0;
}