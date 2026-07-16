#include <iostream>
using namespace std;

void printArray(int arr[] , int size) {
    cout << "Printing the Array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
     cout << endl  << " " << endl << endl;
}

int main()
{
    // declare
    int number[15];
    cout << "Value at index [0] is: " << number[0] << endl;
    cout << "Value at index [7] is: " << number[7] << endl;

      cout << endl << "" << endl;
    
    // initialising an array
    int first[3] = {5, 7, 12};
    cout << "Value at index [0] is: " << first[0] << endl;
    cout << "Value at index [2] is: " << first[2] << endl;
      
      cout << endl << "" << endl;

    //initialising an array
    int second[14] = {5, 7, 11};
    int n = 14;

    printArray(second, 14);

    //initialising all locations with 0
    int third[7] = {0};
    n = 7;

     printArray(third, 7);

        
}