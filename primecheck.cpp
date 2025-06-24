#include <iostream>
using namespace std;
int main() {
    int n;
    int count = 0;
    int number = 2;
    cout << "Enter quantity of prime numbers to generate: ";
    cin >> n;
    cout << "\nFirst " << n << " prime numbers:\n";
    while (count < n) {
        bool isPrime = true;
        for (int i = 2; i * i <= number; ++i) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << number;
            count++;
            if (count < n)
                cout << ", ";
        }
        number++;
    }
    cout << endl;
}
