#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int arr[50],brr[50],i,n,j=1;
    cout<<"Enter the number of elements to be inserted : ";
    cin>>n;
    cout<<"---------------------\nFirst Array\n---------------------\n";

    // Taking 1st Array Elements from the user
	for(i=0;i<n;i++)
	{
		cout<<"Enter Element "<<j<<" : ";
		cin>>arr[i];
		++j;
	}
    j=1;
     cout<<"---------------------\nSecond Array\n---------------------\n";
    // Taking 2nd Array Elements from the user
	for(i=0;i<n;i++)
	{
		cout<<"Enter Element "<<j<<" : ";
		cin>>brr[i];
		++j;
	}
    // Equal or not
    for(i=0;i<n;i++)
    {
        if(arr[i]==brr[i])
            continue;
        else
        {
            cout<<"Arrays are Not Equal";
            getch();
            return 0;
        }
    }
    cout<<"\n\nBoth the Arrays are Equal";
    getch();
    return 0;
}