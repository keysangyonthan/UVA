#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
    int t;
    cin>>t;
    while(t--){
        int n;
        int s=0;

        cin>>n;

        s=n;

        while(n>2)
        {
            s+=n/3;
            n=n/3 +n%3;


        }

        if(n==2)
            s++;
        cout<<s<<endl;
    }
    return 0;

}
