#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {

    double savings = 100;
    const double target = 500;
    const double monthlydeposit = 75;
    int month = 0;

    while (savings < target) {
        month++;
        savings += monthlydeposit;
        cout << month << " menuo "
             << fixed << setprecision(2)
             << savings << " Eur" << endl;
    }

    cout << "Tikslas yra pasiektas po "
         << month << " menesiu" << endl;

    return 0;
}
