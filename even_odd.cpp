#include <iostream>
using namespace std;

int main() {
    int number;
    char choice;

    do {
        cout << "Enter an integer: ";
        cin >> number;

        if (number % 2 == 0) {
            cout << "The number is Even." << endl;
        } else {
            cout << "The number is Odd." << endl;
        }

        cout << "Do you want to check another number? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Program ended. Thank you!" << endl;
    return 0;
}
