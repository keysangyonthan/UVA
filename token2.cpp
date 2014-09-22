/*   UVa 482
*
*   author nadeem hussain shaikh
*/
#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;

int main()
{
    char *token;char text[100];
    cin.getline(text,100);
    stringstream ss1(text);
    string value;
    while(ss1>>value)
    {
        cout<<value<<endl;
    }
}
