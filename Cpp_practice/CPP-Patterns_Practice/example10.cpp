#include<iostream>
using namespace std;

int main() {

int n;
cin>>n;

int row = 1;
int count =1;
while(row<=n) {

int col = 1;
while(col<=n){
    char ch = 'A'+count-1;
    cout<< ch << " ";
    count = count + 1;
    col = col + 1;
}
cout<<endl;
row = row + 1;
}


}