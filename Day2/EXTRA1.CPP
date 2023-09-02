// Inserting an Element to the end of and Array


#include <iostream>
#include <stdio.h>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
     int i, n, key, arr[50];
       // Taking the total No of elements from the user
    cout << "Enter the Number of Elements : ";
    cin >> n;

    // Taking the Elements from the user
    for (i = 0; i < n; i++)
    {
        cout << "Enter Element " << i+1<< " : ";
        cin >> arr[i];
    }
    // Displaying the Array provided by the User
    cout << "\nEntered Array is : \n";
    for (i = 0; i < n; i++)
    {
        cout << arr[i];
        if (i < n - 1)
            cout << ", ";
    }
    // New Element
    cout<<"\n\nEnter Element to Insert: ";
    cin>>key;
    arr[i] = key;
    // Displaying the new array
    cout<<"\nThe New Array is:\n";
    for(i=0; i<=n; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    getch();
    return 0;
}