// Key Search in Array
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
    int i, j = 1, n, arr[50], key, keyNum = 1,occu=0;

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

    // Key to be Searched
    cout << "\nEnter the Element to be Searched : ";
    cin >> key;

    // Finding the Key
    for (i = 0; i < n; i++)
    {
        if (keyNum > 1)
        {
            if (arr[i] == key)
            {
                cout << ", " << i+1;
                ++occu;
                continue;
            }
        }
        else if (arr[i] == key)
        {   
            cout << "\nElement Found in Index No. : " << i+1;
            ++keyNum;
            ++occu;
            
            continue;
        }
        
    }
    // Occurance of the Key
        cout<<"\nOccurance : "<<occu;
    
        if(keyNum==1)
            cout<<"\nElement Does Not Exist";
    getch();
    return 0;
}
