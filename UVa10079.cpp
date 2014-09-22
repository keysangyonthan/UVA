#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    long long int n,max;


    while(cin>>n)
    {
        if(n<0) break;
        max=n*(n+1)/2 + 1;
        cout<<max<<endl;
    }

    return 0;
}
