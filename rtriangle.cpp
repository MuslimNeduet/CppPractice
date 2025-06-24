#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, c;
    cout << "Enter length of three sides: ";
    cin >> a >> b >> c;
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Side lengths must be positive and non-zero." << endl;
    }
    double precision = 0.0001;
    if (abs(pow(a, 2) + pow(b, 2) - pow(c, 2)) <= precision ||
        abs(pow(a, 2) + pow(c, 2) - pow(b, 2)) <= precision ||
        abs(pow(b, 2) + pow(c, 2) - pow(a, 2)) <= precision) {
        cout << "The sides represents right triangle." << endl;
    } else {
        cout << "The sides donot represents right triangle." << endl;
    }
}
