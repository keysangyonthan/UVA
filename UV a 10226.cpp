/*
*  UVa 10226 - Hardwood Species
*
*   author
*   nadeem hussain shaikh
*/
#include<iostream>
#include<map>
#include<string>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<stdio.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    map<string,int> vi;
    vector<string> trees;
    int total=0;
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
    t=1;
    char   *temp;
    while(gets(temp))
    {



        if(!vi[temp])
        {
            vi[temp]=1;

            trees.push_back(temp);
        }
        else
        {
            vi[temp]++;
        }

        total++;


    }

    sort(trees.begin(),trees.end());
        for(int i =0 ;i<(trees.size());i++)
        {
            cout<<trees[i]<<' ';
            printf("%.4lf\n",vi[trees[i]]*100.00/total);
        }

}
