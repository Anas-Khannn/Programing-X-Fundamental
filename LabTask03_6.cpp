#include <iostream>
using namespace std;

int main() {
    int First_number;
    int Second_number;

    

    cout << "Enter First Number: ";
    cin >> First_number;

    
    cout << "Enter Second Number: ";
    cin >> Second_number;

    cout << "\nBefore swapping:" << endl;
    cout << "First Number = " << First_number << ", Second Number = " << Second_number << endl;

   

    // Swapping without using third variable
    First_number = First_number + Second_number;
    Second_number = First_number - Second_number;
    First_number = First_number - Second_number;

    cout << "\nAfter swapping without using third variable:" << endl;
    cout << "First Number  = " << First_number << ", Second Number = " << Second_number << endl;

    return 0;
}
