#include<iostream>
#include<cstdio>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin >>n;
    while(n--)
    {
        char w[100];
        cin>>w;
        int z=0;
        for(int i=strlen(w)-1 ; i>=0 ; i-- ){
            for(int j=i ; j>=0 ; j-- )
                if(w[i] > w[j] )
                {
                    char temp;
                    temp=w[i];
                    w[i]=w[j];
                    w[j]=temp;



                    for(int u=j+1;u<strlen(w);u++)
                        for(int o=u;o<strlen(w);o++)
                            if(w[u]>w[o])
                            {
                                char temp;
                                temp=w[o];
                                w[o]=w[u];
                                w[u]=temp;
                            }

                    cout<<w<<endl;
                    z=1;
                    break;
                }
                if(z==1)
                    break;


        }

    if(z==0)
        cout<<"no answer"<<endl;



    }


return 0;
}
