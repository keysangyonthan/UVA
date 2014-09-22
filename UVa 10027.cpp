#include<iostream>
#include<cstdio>
#include<map>
#include<string>

using namespace std;

int find(map<string,string> m,string s)
{   int count=0;
    cout<<s.size();
    for(int i = 0; i<s.size();i++)
        for(int j=0 ;j<=i;j++)
            if(m.find(s.substr(i,j-i+1))!=m.end())
                count++;
    return count;
}



int main()
{
    //freopen("test.in","r",stdin);
    int n;
    cin>>n;
    fflush(stdin);
    while(n--)
    {
        char  s[80];
        scanf("\"%[A-z]\"",s);
        fflush(stdin);
        char  a[80],b[80];
        map<string ,string> m;
        while(scanf("\"%[A-z]\"->\"%[A-z]\"", a,b)==2)
            {m[a]=b;
            fflush(stdin);
            }
        //for(map<string,string>::iterator it=m.begin(); it!=m.end(); it++)
          //  cout<< it->first <<" "<< it->second<<endl;
          cout<<find(m,s);
    }
    return 0;
}
