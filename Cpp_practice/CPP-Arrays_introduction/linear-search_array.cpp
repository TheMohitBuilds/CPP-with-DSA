#include<iostream>
using namespace std;
 
bool search(int arr[], int size, int key) {
 
    for(int i = 0; i<size; i++)
    if(arr[i] == key)  {
        return 1;
    }
   return 0;

}
int main() {
    int arr[7] = {5, 7, 12, 2, 4, 6, 1};

    cout << "Enter the element to search for : " << endl;
    int key;
    cin >> key;

    bool found = search(arr, 7, key);

    if(found) {
        cout << "Key is present" << endl;
    }
    else{
        cout << "Key is absent" << endl;
    }
}