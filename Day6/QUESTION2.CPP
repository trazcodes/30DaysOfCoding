#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;
int main() 
{ 
    int i, j = 1, n1,n2, arr[50],brr[50],found,nomiss=0;

    // Taking the total No of elements from the user
    cout<<"\n------------------------------------";
    cout<<"\nFirst Array";
    cout<<"\n------------------------------------";
    cout << "\nEnter the Number of Elements : ";
    cin >> n1;

    // Taking the Elements from the user
  
    for (i = 0; i < n1; i++)
    {
        cout << "\nEnter Element " << j << " : ";
        cin >> arr[i];
        ++j;
    }
    cout<<"\n\n------------------------------------";
    cout<<"\nSecond Array";
    cout<<"\n------------------------------------";
    cout << "\nEnter the Number of Elements : ";
    cin >> n2;
    j=1;
    for (i = 0; i < n2; i++)
    {
        cout << "\nEnter Element " << j << " : ";
        cin >> brr[i];
        ++j;
    }
    // Missing Element Check
    cout<<"\nMissing : \n";
    for(i=0;i<n1;i++)
    {   
        found=0;
        for(j=0;j<n2;j++)
        {
            if(arr[i]==brr[j])
            {   
                ++found;
                break;
            }
        }
        if(found==0)
        {
            ++nomiss;
            cout<<arr[i]<<" ";
        }
    }
    if(nomiss==0)
    cout<<"\nNo Missing Element";
    getch();
    return 0;
}

