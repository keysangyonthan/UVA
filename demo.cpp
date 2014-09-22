#include <cmath>
#include <cstdio>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a[130]={0};


    int n;
    cin>>n;

    for(int i=0; i<n ;i++)
    {
        char s[101];
        cin>>s;

        int temp[130]={0};
        for (int i =0;i<strlen(s);i++)
        {
            if(temp[s[i]]==0)    {

                temp[s[i]]=1;
                   a[s[i]]++;
            }
        }
    }
    int count=0;
    for(int i=97; i<123 ;i++)
    {
        if(a[i]==n)
            count++;

    }
    cout<<count;
    return 0;
}
