#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
    int i, j = 1, n, arr[50],brr[50], multi, temp,onetime=0;

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
    // Sorting
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        brr[i]=arr[i];
    }
    // Displaying sorted array
    cout << "\nSorted Array is : \n";
    for (i = n-1; i >=0; i--)
    {
        cout << brr[i];
        if (i > 0 )
            cout << ", ";
    }
    // Finding One time Element
    
    cout<<"\n\nAppearing one time : ";
    for(i=0;i<n;i++)
    {   
            multi=0;
            for(j=0;j<n;j++)
            {
                if(j==i)
                    continue;
                if(arr[i]==arr[j])
                {
                    ++multi;
                }
            }
            if(multi==0)
            {   
                ++onetime;
                cout<<endl<<arr[i]<<" ";
            }
    }
    if(onetime==0)
    {
        cout<<"\nNo Element Appered once.";
    }
    getch();
    return 0;
}