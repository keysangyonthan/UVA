// this algorithm to solve a polynomial has a time compelxity of linear time
#include<iostream>
using namespace std;
int horner(int poly[],int n,int x){
    int result=0;
    for(int i=0;i<n;i++)
        result=result*x+poly[i];

    return result;
}

int main()
{
    // Let us evaluate value of 2x3 - 6x2 + 2x - 1 for x = 3
    int poly[] = {2, -6, 2, -1};
    int x = 3;
    int n = sizeof(poly)/sizeof(poly[0]);
    cout << "Value of polynomial is " << horner(poly, n, x);
    return 0;
}

