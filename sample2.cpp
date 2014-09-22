#include<iostream>
#include<stdio.h>
using namespace std;
char digits[100];

int main()
{   int n;
    scanf("%d",&n);

    while(n--)
    {
        scanf("0.%[0-9]...", &digits); // surprised?
        printf("the digits are %s \n",digits);

    }

}
