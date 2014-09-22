 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
 
struct DATA
{
    char c;
    int count;
};
 
bool compare(DATA a, DATA b)
{
    if(a.count > b.count )
    {
        return true;
    }
    else if(a.count == b.count)
    {
        return a.c < b.c;
    }
    else
    {
        return false;
    }
}
 
 
int main()
{
    char c;
    string input;
    DATA inp[26];
    for(int i=0; i<26; i++)
    {
        inp[i].c = i + 'A';
        inp[i].count = 0;
    }
    int cases, len;
    cin>>cases;
    cin.ignore();
    while(cases--)
    {
        getline(cin, input);
        len = input.length();
        for(int i=0; i<len; i++)
        {
            c = input[i];
            if('a'<=c && c <='z')
            {
                 inp[c - 'a'].count++;
            }
            else if('A' <= c && c <= 'Z')
            {
                inp[c - 'A'].count++;
            }
        }
    }
 
    sort(inp, inp+26, compare);
    for(int i=0; i<26; i++)
    {
        if(inp[i].count==0) break;
        cout<<inp[i].c<<" "<<inp[i].count<<endl;
    }
 
}