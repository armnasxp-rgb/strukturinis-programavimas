#include <iostream>
#include <string>

using namespace std;

int main() {

    int balance = 100;
    int choice;

    do {
        cout << "\n--- Saskaitos meniu ---\n";
        cout << "1. Perziureti saskaitos likuti\n";
        cout << "2. Papildyti saskaita\n";
        cout << "3. Atlikti mokejima\n";
        cout << "0. Baigti programa\n";
        cout << "Pasirinkite skaiciu: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Saskaitos likutis: " << balance << " Eur\n";
                break;

            case 2: {
                int amount;

                cout << "Papildymo suma: ";
                cin >> amount;

                if (amount > 0) {
                    balance += amount;
                    cout << "Saskaita papildyta.\n";
                }
                else {
                    cout << "Netinkama suma.\n";
                }

                break;
            }

            case 3: {
                int amount;

                cout << "Mokejimo suma: ";
                cin >> amount;

                if (amount <= 0) {
                    cout << "Netinkama suma.\n";
                }
                else if (amount > balance) {
                    cout << "Nepakankamas likutis saskaitoje.\n";
                }
                else {
                    balance -= amount;
                    cout << "Mokejimas atliktas.\n";
                }

                break;
            }

            case 0:
                cout << "Programa baige darba.\n";
                break;

            default:
                cout << "Tokios operacijos nera.\n";
        }

    } while (choice != 0);

    return 0;
}
