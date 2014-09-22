#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int min, max,max1;

    freopen("test.in","r",stdin);
    while(cin>>min>>max)
    {
        cout<<min<<" "<<max<<" ";
        int tempmin=min<max?min:max;
        max=max>min?max:min;
        min=tempmin;
        max1=0;
        for ( int i= min; i<=max; i++)
        {
            long long int k=i;
            int temp=1;
            while(k!=1)
            {
                if(k%2==0)
                {
                    k>>=1;      // bit is faster then normal math operation
                    temp++;
                }
                else
                {
                    k=3*k+1;
                    k>>=1;
                    temp+=2;
                }


            }


            if(temp>max1) max1=temp;
        }
        cout<<max1<<endl;
    }

    return 0;
}
