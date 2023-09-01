// HACKERRANK
// Read  numbers from stdin and print their sum to stdout.
// Input:
// One line that contains  space-separated integers: 
// a, b, and c.
// Constraints :
// 1<=a,b,c<=1000
// Output
// Print the sum of the three numbers on a single line.

#include <cmath>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <conio.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a,b,c,sum;
     cout<<"Enter 3 Numbers : ";
     cin>>a>>b>>c;
     if(a>=1 || a<=1000 && b>=1 || b<=1000 && c>=1 || c<=1000)
     {  
         sum=a+b+c;
         cout<<"Sum : "<<sum<<endl;
         getch();
         return 0;
     }
     cout<<"ERROR, Numbers must be between 1-1000"<<endl;
     getch();
     return 0;
}
