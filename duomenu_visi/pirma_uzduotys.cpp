#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {

    string password;

    do {
        cout << "Iveskite 8 simboliu slaptazodi: ";
        cin >> password;

        if (password.length() < 8) {
            cout << "Slaptazodis turi buti maziausiai 8 simboliu." << endl;
        }

    } while (password.length() < 8);

    cout << "Slaptazodis priimtas" << endl;

    return 0;
}
