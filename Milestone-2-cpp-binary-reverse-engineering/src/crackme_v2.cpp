#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    string secret = "REVERSE_ENGINEER_2026";
    cout << " PROJECT 1: REBOOTED " << endl;
    cout << "Enter the security override code: ";
    cin >> input;
    cout << endl;
    if (input == secret) {
        cout << "SUCCESS: Access Granted!" << endl;
    } else {
        cout << "FAILURE: Systems Locked!" << endl;
    }
    cout << "\nPress Enter to exit...";
    cin.ignore(); 
    cin.get(); 

    return 0;
}
