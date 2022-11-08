#include<iostream>
using namespace std;

int main () {
    double A, B;

    cin >> A >> B;

    double result = A/B;

    cout << fixed;
    cout.precision(20);

    cout << result << "\n";

}