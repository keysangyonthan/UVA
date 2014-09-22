    /*  COUNT SORT
    *   sorting complexity  O(n)
    *   more appropriate in case of input with duplicate values
    */
#include<iostream>
#include<stdlib.h>
using namespace std;

void count_sort(int a[],int n,int k){

    int count [k];
    int i,j;
    int b[n];

        // initilizing the array to zero
    for(i=0;i<=k;i++){
        count[i]=0;
    }

        // make an array of frequency of the input
    for(i=0;i<n;i++)
        count[a[i]]++;

        // make the freq comulative
    for(i=1;i<=k;i++)
        count[i] +=count[i-1];

        //initilize the other array
    for(j=0;j<n;j++)
        b[j]=0;

        // sorting the array
    for(i=0;i<n;i++){
        count[a[i]]--;
        b[count[a[i]]]=a[i];
    }


            // print the output
    for(i=0;i<n;i++)
        cout<<b[i]<<endl;
}

int  main()
{

    int a[]={0,1,1,1,2,2,2,0,0,0,0,3,2,3,3};
    int n=sizeof(a)/sizeof(a[0]);

    count_sort(a,n,4);
}
