#include<iostream>
#include<cstdio>
#include<sstream>
#include<string.h>
using namespace std;

int main()
{

    int n;
    cin>>n;

    while(n--)
    {
        char  b[26],w[100];
        cin>>b;
        cin>>w;
        int count=0;
        for(int i=0;i<strlen(b);i++)
        {
             for(int j=0;j<strlen(w);j++)
             {
                 if(b[i]==w[j])
                 {      count++;
                     break;
                 }

             }
        }
        cout<<count<<endl;
    }

}
