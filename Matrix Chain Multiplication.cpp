#include<stdio.h>
#include<limits.h>
#include<string.h>
// Matrix Ai has dimension p[i-1] x p[i] for i = 1..n

int temp[30][30];
int MatrixChainOrder(int p[], int i, int j)
{
    if(i == j)
        return 0;
    int k;
    int min = INT_MAX;
    int count;
    if(temp[i][j]!=-1) return temp[i][j];
    // place parenthesis at different places between first and last matrix,
    // recursively calculate count of multiplcations for each parenthesis
    // placement and return the minimum count
    for (k = i; k <j; k++)
    {
        count = MatrixChainOrder(p, i, k) +
                MatrixChainOrder(p, k+1, j) +
                p[i-1]*p[k]*p[j];

        if (count < min)
            min = count;
    }
    temp[i][j]=min;
    // Return minimum count
    return min;
}

// Driver program to test above function
int main()
{
    int arr[] = {10, 20, 30,10, 20, 30,10, 20, 30,10, 20, 30,10, 20, 30,20, 30,10, 20, 30,20, 30,10, 20, 30};
    int n = sizeof(arr)/sizeof(arr[0]);

    for( int i=0;i<30;i++)
        for( int j=0;j<30;j++)
            temp[i][j]=-1;

    printf("Minimum number of multiplications is %d ",
                          MatrixChainOrder(arr, 1, n-1));


    return 0;
}
