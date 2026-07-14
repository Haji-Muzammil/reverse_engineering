#include<iostream>
#include<string>
using namespace std;
int main(){
    string name ;
    int key;
    cout<<"Enter the Name: "<<endl;
    cin>>name;
    cout<<"Enter the Passkey: "<<endl;
    cin>>key;

    unsigned int ck = 0;
    for (char c : name) {
        ck += (int)c;
    }
    ck = ck * 0xCAFEE;

    if (key == ck) {
        cout << "\nSUCCESS: License Activated for " << name << "!\n";
    } else {
        cout << "\nFAILURE: Invalid Serial Key!\n";
    }
    cin.ignore();
    cin.get();
}
