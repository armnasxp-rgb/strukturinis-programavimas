#include <iostream>

using namespace std;

int main() {

    int ivertinimas;

    cout << "Iveskite ivertinima: ";
    cin >> ivertinimas;

    if (ivertinimas == 10) {
        cout << "Puiku";
    }
    else if (ivertinimas > 9) {
        cout << "Labai geras";
    }
    else if (ivertinimas > 7) {
        cout << "Gerai";
    }
    else if (ivertinimas >= 5) {
        cout << "Patenkinamai";
    }
    else {
        cout << "Egzaminas neislaikytas";
    }

    return 0;
}
