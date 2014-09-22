/*
*   UVa 10360 - Rat Attack
*       n*d^2 for the pre processing
*       n^2 for the sorting algorithm
*
*   author nadeem hussain shaikh
*/

#include<iostream>
#include<cstdio>
using namespace std;
#define max(a, b)  (a < b ? b : a)
#define min(a, b)  (a > b ? b : a)
int matrix[1025][1025];

int main()
{
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);

        int t;
        cin>>t;

        while(t--){
            int d;  // the distance
            int ratpop;


            for(int i=0;i<=1024;i++)
                for(int j=0;j<=1024;j++)
                    matrix[i][j]=0;

                            int resX, resY, maxi = -1;
            cin>>d>>ratpop;
            while(ratpop--)
            {
                int x,y,value;
                cin>>x;cin>>y;cin>>value;


                for ( int j = max (0, x - d); j <= min (x + d, 1024); j++ )
                    for ( int k = max (0, y - d); k <= min (y + d, 1024); k++ )
                        matrix [j] [k] += value;


                for ( int i = 0; i < 1025; i++ ) {
                    for ( int j = 0; j < 1025; j++ ) {
                        if ( maxi < matrix [i] [j] ) {
                            maxi = matrix [i] [j];
                            resX = i;
                            resY = j;
                        }
                    }
                }


            }


        cout<<resX<<" "<<resY<<" "<<maxi;




    }



    return 0;

}
