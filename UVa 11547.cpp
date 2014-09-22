/* UVa 11547
* Automatic answer
*
*   author nadeem hussian shaikh
*/
#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main(){
    int t;
    long long int n;
    cin>>t;

    while(t--){
        cin>>n;

        n=(((((((n*567)/(9))+7492)*235)/(47))-498)/10);
        printf("%d\n", (int) (n % 10));
    }
    return 0;
}

