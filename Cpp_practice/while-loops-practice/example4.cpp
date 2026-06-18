#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 2;
    while(i<n) {
      //if it gets divided,then it is not a prime number

      if(n%i == 0) {cout << " Not Prime for "<< i << endl;}

      else{cout << " prime for "<< i << endl;}
      i = i + 1;


    }

    
}