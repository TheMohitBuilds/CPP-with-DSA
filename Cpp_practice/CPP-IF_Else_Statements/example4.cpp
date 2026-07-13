#include<iostream>
using namespace std;

int main () {

    char ch;

cout << "Enter a character:";
cin >> ch;

//checking for lowercase ('a' to 'z')
if(ch >='a'&& ch <='z')
{cout << "This is lower case" << endl;}

//checking for uppercase ('A' to 'Z')
else if(ch >='A' && ch <='Z')
{cout << "This is Upper case" << endl;}

//checking for numeric value ('0' to '9')
else if(ch >='0' && ch <='9')
{cout << "This is Numeric" << endl;}

//if it doesn't match any of the above
else{cout << "This is a special character or symbol" << endl;}






}