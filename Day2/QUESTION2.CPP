// Minimum in Array
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
    int i, j = 1, n, min, arr[50];

    // Taking the total No of elements from the user
    cout << "Enter the Number of Elements : ";
    cin >> n;

    // Taking the Elements from the user
    for (i = 0; i < n; i++)
    {
        cout << "Enter Element " << j << " : ";
        cin >> arr[i];
        ++j;
    }
    // Displaying the Array provided by the User
    cout << "\nEntered Array is : \n";
    for (i = 0; i < n; i++)
    {
        cout << arr[i];
        if (i < n - 1)
            cout << ", ";
    }
    // Finding Minimum Number

    min=arr[0];
    for(i = 0 ; i < n; i++)
        if(arr[i]<min)
            min=arr[i];
    cout<<"\nMinimum Number : "<<min;

    getch();
    return 0;
}