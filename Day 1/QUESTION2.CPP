#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int main ()
{
    char str1[50],str2[50], temp;
    int i=0, j;
    // Taking String input from the user
    cout << "Enter a string : ";
    gets(str1);
    // Calculating the length of the String
    j = strlen(str1) - 1;
    // Reversing the String
    for (j; j >= 0; j--,i++)
    {
        str2[i] = str1[j]; 
    }
    cout << "\nReverse string : " << str2;
    getch();
    return 0;
}