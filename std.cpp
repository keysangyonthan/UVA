#include <cstdio>
#include<iostream>
#include<stack>
using namespace std;


int main() {
  freopen("a.txt","r", stdin);
    stack<int> o;
   cout<<(char)cin.get();
    o.push(1);
    o.push(2);
    o.push(3);
    cout<<o.top();
    o.pop();
    cout<<o.top();
  return 0;
}
