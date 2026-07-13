#include<iostream>
using namespace std;

int main() { 

int n;
cin >> n;

int i = 2;
int sum = 0;

while(i<=n) {

    if(i%2 == 0)
i=i+2;
sum=sum+i;
}

cout << " value of sum is " << endl;


}