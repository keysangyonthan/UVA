#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int NumberOf1(int n)
{
    int count = 0;
    while(n)
    {
        if(n & 1)
            count ++;

        n = n >> 1;
    }

    return count;
}


int main() {

    int n;
    cin>>n;
    int k;
    int sum=0;
    while(n--)
    {
        cin>>k;
        sum=sum+NumberOf1(k);
    }

    if(sum%2)
        cout<<"Shaka :)"<<endl;
    else
        cout<<"The other player :("<<endl;

    return 0;
}
