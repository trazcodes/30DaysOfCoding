#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	
	int i,j=1,k=0,n,arr[50],brr[50];

	// Taking the total No of elements from the user
	cout<<"Enter the Number of Elements : ";
	cin>>n;

	// Taking the Elements from the user
	for(i=0;i<n;i++)
	{
		cout<<"Enter Element "<<j<<" : ";
		cin>>arr[i];
		++j;
	}

	// Displaying the Array provided by the User
	cout<<"\nEntered Array is : \n";
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
		if(i<n-1)
			cout<<", ";
	}
	// Reversing the Array
	for(i=n-1;i>=0;i--)
	{

		brr[k++]=arr[i];
	}

	// Displaying the Reversed Array
	cout<<"\nReversed Array is : \n";
	for(i=0;i<n;i++)
	{

		cout<<brr[i];
		if(i<n-1)
			cout<<", ";
	}
       getch();
	   return 0;
}

