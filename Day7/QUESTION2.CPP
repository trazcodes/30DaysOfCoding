#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;
int ElementSize();
void ArrayInput(int,int,int [],int);
void ArrayDisplay(int,int [],int);
void MergeArray(int,int,int[],int[]);
// ===================================================================================================
// =========================================MAIN======================================================
int main()
{   
    int i,j=1,arr[50],brr[50],crr[100],n,m,a;
   
    cout<<"First Array : \n-----------------------\n";
    n = ElementSize();
    ArrayInput(i,j,arr,n);
    ArrayDisplay(i,arr,n);
    cout<<"\nSecond Array : \n-----------------------\n";
    m=ElementSize();
    ArrayInput(i,j,brr,m);
    ArrayDisplay(i,brr,m);
    MergeArray(n,m,arr,brr);

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

// -------------------------------------MERGE-----------------------------------
void MergeArray(int n,int m,int arr[],int brr[])
{  
     int i,crr[100],merge,a=0;
    merge=n+m-1;
    for(i=0;i<n;i++)
    {
        crr[i]=arr[i];
    }
    for(i=n;i<=merge;i++)
    {
        crr[i]=brr[a++];
    }
    cout<<"Merged Array\n";
    for (i = 0; i <=merge; i++)
    {
        cout << crr[i];
        if (i < merge)
            cout << ", ";
    }
    cout<<endl;
}
// -------------------------------------X---------------------------------------
