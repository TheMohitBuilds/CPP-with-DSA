#include <iostream>
using namespace std;

void Update(int arr[], int n)
{
    cout << endl
         << "Inside the main function : " << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << endl;
    } 

    cout << "Going back to main function : " << endl;
}

int main()
{

    int arr[4] = {2,4,6,8};
    Update(arr, 4);

    cout << endl << "Printing in main function : " << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << endl;
    }

   
}