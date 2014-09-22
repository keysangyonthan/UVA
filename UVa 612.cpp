#include<iostream>
#include<string.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    char s[n];

    cin>>s;
    cout<<s[0];
    int sum=0;
    for(int i =0;i<strlen(s);i++)
    {
        for(int j=i; j<strlen(s); j++)
        {
            if(s[i]>s[j])
                sum++;

        }

    }
    cout<<sum;
    return 0;
}
