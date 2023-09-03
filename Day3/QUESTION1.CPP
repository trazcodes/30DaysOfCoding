#include<iostream>
#include<conio.h>
#include<stdio.h>


using namespace std;

int main()
{
    int arr[50],n,num=0,i,j;
    // Taking input
    cout<<"Enter No. of Elements: ";
    cin>>n;
    

        for(i=0; i<n; i++)
        {
            cout<<"\nEnter Element "<<i+1<<" : ";
                cin>>arr[i];
        }
// Displaying Original Array
  cout<<"\nOriginal Array : ";

  for(i=0;i<n;i++)
  {
  cout<<arr[i];
  if(i!=n-1)
  cout<<", ";
  }
// Duplicate Elements
  cout<<"\n\nDuplicate Element: \n\n";
  for(i=0; i<n; i++)
   {
    for(j=i+1;j<n;j++)
    {
    if(arr[i]==arr[j])
    {
    ++num;
    cout<<" "<<arr[i]<<" ";
    }
   }
   }
   if(num==0)
    cout<<"No Duplicate Element Found";
    getch();
  return 0;
 }