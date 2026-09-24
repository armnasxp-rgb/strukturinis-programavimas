#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {

    const int studentgradesnumb = 5;
    int grade;
    int sum = 0;
    int highestgrade = 0;

    for (int i = 1; i < studentgradesnumb; i++) {
        cout <<" Iveskite "<<i<<" studento pazymi"<<endl;
        cin >> grade;
        sum += grade;
        highestgrade = (grade > highestgrade) ? grade : highestgrade;
    }
    double averagegrade = static_cast<double>(sum) / studentgradesnumb;
    cout << fixed << setprecision(2) <<" Pazymiu vidurkis "<< averagegrade << endl;
    cout << " Didziausias pazymis "<< highestgrade << endl;
    return 0;
}
