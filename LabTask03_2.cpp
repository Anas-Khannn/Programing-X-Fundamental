#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int c; 
    float result;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    cout << "Enter the value of c: ";
    cin >> c;

    result = (a + b + c * a - (b * c) / 2.0) / 3.0;

    cout << "The result is: " << result << endl;

    return 0;
}
