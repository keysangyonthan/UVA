/*
*       UVa 10340 - All in All
*
*   author nadeem hussain shaikh
*
*/

#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

int main(){
    freopen("test.in","r",stdin);


    string s1,s2;
    int n,cont;

    while(cin>>s1>>s2){
        n=s1.size();
        cont=0;

        for(int i=0;i<s2.size() && cont<n;i++)
            if(s2[i]==s1[cont]) cont++;

        if(cont==n) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}
