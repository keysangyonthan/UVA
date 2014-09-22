/*
*   10940 - Throwing cards away II
*
*   author
*   nadeem hussain shaikh
*/

/*   You can notice that the sequence goes like
1,2,2,4,2,4,6,8,2,4..
so
f(2^n) = 2^n
f(2^n + 1) = 2
f(n) = 2 + f(n-1) otherwise
*
*/



#include <stdio.h>
#include <stdlib.h>
#define N 500000
static int* cache;
int main()
{
    int i,n;
    cache = (int*) malloc((N+1)*sizeof(int));
    for(i=0;i<=N;i++)    cache[i]=0;
    cache[0]=0;
    cache[1]=1;
    for(i=2;i<=N;i*=2)
    {
        cache[i] = i;
        cache[i+1] = 2;
    }
    for(i=2;i<=N;i++)
    {
        if(!cache[i])
            cache[i] = 2+cache[i-1];
    }
    scanf("%d",&n);
    while(n!=0)
    {
        printf("%d\n",cache[n]);
        scanf("%d",&n);
    }
    return 0;
}
