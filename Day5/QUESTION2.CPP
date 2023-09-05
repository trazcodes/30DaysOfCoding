// FIRST OCCURANCE OF KEY IN ARRAY
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
    int i, j = 1, n, arr[50], key;

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
    // Key Searching
    cout<<"\nEnter the key to be searched : ";
    cin>>key;
    for (i = 0; i < n; i++)
    {
        if(arr[i]==key)
            {
                cout<<"\nKey Found!\nFirst Occurance of the Key is in Index : "<<i;
                getch();
                return 0;
            }
    }
    cout<<"Key Not Found";
    getch();
    return 0;
}