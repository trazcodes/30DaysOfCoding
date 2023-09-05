// Even odd IN ARRAY
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
    int i, j = 1, n, arr[50], evenArr[50], oddArr[50], even = 0, odd = 0;

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
    // Even and Odd Array
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenArr[even] = arr[i];
            ++even;
        }
        else
        {
            oddArr[odd] = arr[i];
            ++odd;
        }
    }
    // Displaying New Array
    cout << "\nEven Array is : \n";
    for (i = 0; i < even; i++)
    {
        cout << evenArr[i];
        if (i < even - 1)
            cout << ", ";
    }
    cout << "\nOdd Array is : \n";
    for (i = 0; i < odd; i++)
    {
        cout << oddArr[i];
        if (i < odd - 1)
            cout << ", ";
    }
    getch();
    return 0;
}
