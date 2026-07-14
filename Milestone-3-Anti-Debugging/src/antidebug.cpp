#include<iostream>
#include <windows.h>
using namespace std;
int main(){
 if(IsDebuggerPresent()){
 cout<<"Debugger Detected Haulting The Program!"<<endl;
 cin.ignore();
cin.get();
 return 0;
 }
 cout<<"No debugger Detected!"<<endl;
cin.ignore();
cin.get();
 return 0;
 }
 
