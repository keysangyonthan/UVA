/*
*       UVa 11242
*       author nadeem hussain shaikh
*
*/

#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
int main()
{   freopen("test.in","r",stdin);
    int front, rear;
    cin>>front>>rear;
    int sf[front];
    int sr[rear];
    for(int i=0;i<front;i++)
        cin>>sf[i];
    for(int i=0;i<rear;i++)
            cin>>sr[i];
    float ratio[front*rear];
    int k=0;
    for(int i=0;i<front;i++)
        for(int j=0;j<rear;j++)
            ratio[k++]=(float)(sr[j]/(float)sf[i]);

    qsort (ratio, front*rear, sizeof(float), compare);

    float spread[front*rear-1];

    for( int i =0; i< (front*rear-1);i++)
        spread[i]=ratio[i+1]/ratio[i];

    qsort (spread, front*rear-1, sizeof(float), compare);

    cout<<spread[front*rear-2];


    return 0;
}

