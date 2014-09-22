// larget palindrome in string

#include<iostream>
#include<string.h>


using namespace std;
char *s;
int max(int a, int b)
{
    return a>b?a:b;
}
int len(int l ,int r)
{
     if( l == r ) {  return 1;}

     if( l+1 == r ){
        if( s[l] == s[r] ){   return 2;}
            else    return 1;}

    if( s[l] == s[r] ){

        return 2 + len(l+1,r-1);

    }
    else
        return max(len(l,r-1),len(l+1,r));



}


int main()
{   s="NEVERODDOREVENING";
    cout<<len(0,strlen(s)-1);
    return 0;

}
