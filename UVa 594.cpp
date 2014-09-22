/*  UVa 594
*   One Little, Two Little, Three Little Endians
*
*   author nadeem hussain shaikh
*/

#include<iostream>
#include<cstdio>
using namespace std;
union
{
        int i;
        char c[4];
} A,B;
int main()
{
        while( scanf("%d",&A.i)==1 )
        {

                B.c[0]=A.c[3];
                B.c[1]=A.c[2];
                B.c[2]=A.c[1];
                B.c[3]=A.c[0];
                printf("%d converts to %d\n",A.i,B.i);
        }
        return 0;
}
