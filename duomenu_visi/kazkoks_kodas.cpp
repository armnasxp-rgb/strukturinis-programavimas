#include <iostream>
#include <string>
using namespace std;


int main() {
    int n;

    cout << "Iveskite teigiama skaiciu ";
    cin >> n;

    while (n <= 0){

    cout << " Skaicius yra klaidingas";
    cout << "Iveskite teigiama skaiciu ";
    cin >> n;


}

    cout << "Iveskite teigiama skaiciu " << n << endl;


    return 0;
}