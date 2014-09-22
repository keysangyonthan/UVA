#include<iostream>
#include<math.h>
#include<cstdio>
#include<stdlib.h>
using namespace std;

int main()
{

    int n;
    cin >>n;

    while(n--)
    {
        long long int x,y,x1,y1,x2,y2;
        long long int d1,d2,d3,d4;

        cin>>x>>y>>x1>>y1>>x2>>y2;

        d1=abs(y-y1);
        d2=abs(x2-x);
        d3=abs(y2-y);
        d4=abs(x-x1);

        if(d1<=d2 and d1 <= d3 and d1 <= d4)
            cout<<d1<<endl;
        else if(d2<=d1 and d2 <= d3 and d2 <= d4)
            cout<<d2<<endl;
        else if(d3<=d1 and d3 <= d2 and d3 <= d4)
            cout<<d3<<endl;
        else if(d4<=d1 and d4<=d2 and d4 <= d3)
            cout<<d4<<endl;
        else if ((d1==d3 and d1==0) or (d2==d4 and d2==0))
            cout<<'0'<<endl;

    }
    return 0;
}



