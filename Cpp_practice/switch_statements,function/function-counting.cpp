#include <iostream>
using namespace std;

void printCounting(int n)
{
    // Function body
    
    for (int i = 1; i <= n; i++)
    { 
        cout << i << " " << endl;
    }
    cout << endl;
    return;
}

int main() {

int n;
cin>>n;

// Function call
printCounting(n);

return 0;


}
