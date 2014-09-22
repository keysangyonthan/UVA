#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    char s1[80]="as";
    string s2("nadeem");
    string s3("hussain");

    s3+s2;

    cout<<"s3 "<<s3<<endl<<"s2 "<<s2+s3<<endl;

    map<char,int> m;
    int i;

    // put pairs in to map

    for(i=0;i<26;i++)
        m.insert(pair<char,int>('A'+i,65+i));

    char ch;
    cout<<"enter key";
    cin>>ch;

    map<char,int>::iterator p;

    // find value given key

    p=m.find(ch);

    if(p!=m.end())
        cout<<"its the ASCII value is"<<p->second;
    else
        cout<<"key not in map";
    return 0;
}
