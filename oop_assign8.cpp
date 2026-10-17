
#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter age: ";
    cin >> age;

    try {
        if (age < 18) {
            throw age;
        }

        cout << "You are eligible." << endl;
    }
    catch (int myNum) {
        cout << "Exception caught!" << endl;
        cout << "Age is " << myNum
             << ". Must be 18 or above." << endl;
    }

    cout << "Program continues..." << endl;

    return 0;
}
