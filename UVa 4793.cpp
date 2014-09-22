/*
*   UVa 4793
*   Robots on ice
*
*   author nadeem hussain shaikh
*/
#include<iostream>
#include<cstdio>

using namespace std;
int arr[9][9];
int m,n;
    int x1,y1,x2,y2,x3,y3;
    int step1,step2,step3;
int count=0;

void demo(int x,int y,int totalstep)
{

    if(totalstep==m*n-1 && arr[0][1]==0){count++;return ;}
    if(x>=0 && y+1 >=0 && y+1 <n && !arr[x][y+1] && (x!=0 || y+1 !=1))
    {
         totalstep++;
         arr[x][y+1]=1;
         demo(x,y+1,totalstep);
    }
    arr[x][y+1]=0;
    if(x>=0 && y -1 >=0 && y-1 <n && !arr[x][y-1] && ( x!=0 || y-1 !=1) )
    {
         totalstep++;
         arr[x][y-1]=1;
         demo(x,y-1,totalstep);
    }
    arr[x][y-1]=0;
    if(x+1 >=0 && y>=0 && x+1 <m && !arr[x+1][y] && ( x+1!=0 || y!=1))
    {
         totalstep++;
         arr[x+1][y]=1;
         demo(x+1,y,totalstep);
    }
    arr[x+1][y]=0;

    if(x-1 >=0 && y>=0 && x-1 <m && !arr[x-1][y] && ( x-1!=0 || y!=1))
    {
         totalstep++;
         arr[x-1][y]=1;
         demo(x-1,y,totalstep);
    }
    arr[x-1][y]=0;

}

int main()
{

    freopen("test.in","r",stdin);

    cin>>m>>n;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    int totalstep;

    arr[0][0]=1;
    arr[1][0]=1;
    totalstep=2;
    step1= (m*n)/4;
    step2= (m*n)/2;
    step3= 3*(m*n)/4;
    demo(1,0,totalstep);
    cout<<count;
    return 0;

}
