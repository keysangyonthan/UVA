/*   UVa 482
*
*   author nadeem hussain shaikh
*/
#include<iostream>
#include<algorithm>
#include<string.h>

using namespace std;

int main()
{
    char *token;char text[100];
    cin.getline(text,100);
    token=strtok(text," ");

    while(token!=NULL)
    {
        cout<<token<<endl;
        token=strtok(NULL," ");
    }
}
