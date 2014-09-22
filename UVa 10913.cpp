#include<iostream>
#include<cstdio>
using namespace std;

int max(int a,int b,int c)
{
    if(a>b && a> c) return a;
    else if(b>a && b> c) return b;
    else return c;
}
int walk(int maze[75][75],int n,int i, int j,int k)
{
    cout<<maze[i][j]<<" n= "<<n<<" i = "<<i<<" j = "<<j<<" k = "<<k;
    if(n==i && n==j)
      return maze [n][n];
    if(i<1 || i > n) return 0;
    if( j <1 || j> n) return 0;
    if(maze[i][j]<0) k--;
    if(k<0) return 0;



    return max(walk(maze,n,i,j+1,k),walk(maze,n,i,j-1,k),walk(maze,n,i+1,j,k));


}

int main()
{
    freopen("testin","r",stdin);
    freopen("test.out","w",stdout);
    int n,k;
    while(true)
    {
        cin>>n>>k;
        if(!(n|k))
            break;
        int maze[75][75]={};

        for( int i =1; i<=n ; i++)
            for( int j=1; j<=n ; j++)
                cin>>maze[i][j];

        cout<<walk(maze,n,1,1,k);
    }
    return 0;
}
