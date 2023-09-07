#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;
int main() 
{ 
    int i, j = 1, n, arr[50],dup[n];

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
  
// check duplicate Elements
    for(int i=0; i<n; i++){

        if(dup[i]!=1){
           int count = 1;
           for(int j=i+1; j<n; j++){
              if(arr[i]==arr[j]){
                 count++;
                 dup[j]=1;
              }
            }
            if(count!=1)
             cout<<"\n Duplicate Elements : "<<arr[i]<<" ";
         }
     }
    getch();
    return 0; 
}