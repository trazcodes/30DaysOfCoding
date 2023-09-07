// SUM OF 1. SINGLE ARRAY 2. TWO ARRAY
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;
int ElementSize();
void ArrayInput(int,int,int [],int);
void ArrayDisplay(int,int [],int);
void OneArraySum(int,int[],int);
void TwoArraySum(int[],int[],int);

// ===================================================================================================
// =========================================MAIN======================================================
int main()
{   
    int i,j=1,arr[50],brr[50],crr[50],n,a;
    cout<<"1.Sum of Single Array\n2.Sum of 2 Array\nSelect 1 or 2 : ";
    cin>>a;
    switch (a)
    {
        case 1: {
                    n = ElementSize();
                    ArrayInput(i,j,arr,n);
                    ArrayDisplay(i,arr,n);
                    OneArraySum(i,arr,n);
                }break;
        case 2: {
                    n = ElementSize();
                    cout<<"First Array : \n-----------------------\n";
                    ArrayInput(i,j,arr,n);
                    ArrayDisplay(i,arr,n);
                    cout<<"\nSecond Array : \n-----------------------\n";
                    ArrayInput(i,j,brr,n);
                    ArrayDisplay(i,brr,n);
                    TwoArraySum(arr,brr,n);
                }break;
        default : cout<<"Invalid Selection";
                    break;

    }
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
// -----------------------------------------X-----------------------------------

// ----------------------------------One Array Sum------------------------------
void OneArraySum(int i,int arr[],int n)
{   
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    cout<<"\nSum of Array : "<<sum;
}
// -----------------------------------------------------------------------------

// ----------------------------------Two Array Sum------------------------------

void TwoArraySum(int arr[],int brr[],int n)
{
    int crr[50],i;
    cout<<"\nSum of Two Array : \n";
    for(i=0;i<n;i++)
    {
        crr[i]=arr[i]+brr[i];
    }
     for (i = 0; i < n; i++)
    {
        cout << crr[i];
        if (i < n - 1)
            cout << ", ";
    }
}
// -----------------------------------------------------------------------------
