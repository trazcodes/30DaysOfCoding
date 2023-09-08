// Prime in array
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include<array>
using namespace std;
int ElementSize();
void ArrayInput(int,int,int [],int);
void ArrayDisplay(int,int [],int);
void ArrayPrime(int,int[],int);
// ===================================================================================================
// =========================================MAIN======================================================
int main()
{   int i,j,arr[50],n;
    n = ElementSize();
    ArrayInput(i,j,arr,n);
    ArrayDisplay(i,arr,n);
    ArrayPrime(i,arr,n);
    getch();
    return 0;
}
// ====================================================================================================
// ====================================================================================================

// ------------------------------ArraySize-----------------------------------
int ElementSize()
{   
    int n;
    cout << "Enter the Number of Elements : ";
    cin >> n;
    return n;
}
// ---------------------------------X-----------------------------------------

// ------------------------------Array Input----------------------------------
void ArrayInput(int i, int j, int arr[], int n)
{   
    for (i = 0; i < n; i++)
    {
        cout << "Enter Element " << j << " : ";
        cin >> arr[i];
        ++j;
    }
}
// -------------------------------------X---------------------------------------

// -----------------------------------Array Display-----------------------------
void ArrayDisplay(int i,int arr[], int n)
{   

    cout << "\nEntered Array is : \n";
    for (i = 0; i < n; i++)
    {
        cout << arr[i];
        if (i < n - 1)
            cout << ", ";
    }
    cout<<endl;
}
// -------------------------------------X---------------------------------------

// -----------------------------------Prime or Not------------------------------
void ArrayPrime(int i,int arr[],int n)
{
    int j,prime;
    cout<<"\nPrime Numbers : \n";
    for(i=0;i<n;i++)
    {
        prime=1;
        if(arr[i]==0||arr[i]==1)
            prime=0;
        for(j=2;j<=arr[i]/2;++j)
        {
            if(arr[i]%j==0)
                prime=0;  
        }
        if(prime==1)
            {
                cout << arr[i];
                 if (i < n - 1)
                    cout << " ";
            }
    }
}



// -------------------------------------X---------------------------------------

