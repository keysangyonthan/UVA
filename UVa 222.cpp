#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>

#include<algorithm>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<map>
#include<sstream>



#define FOR(i, s, e) for(int i=s; i<e; i++)
#define loop(i, n) for(int i=0; i<n; i++)
#define getint(n) scanf("%d", &n)
#define pb(a) push_back(a)
#define ll long long
#define SZ(a) int(a.size())
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
#define mem(a, v) memset(a, v, sizeof(a))
#define all(v) v.begin(), v.end()
#define pi acos(-1.0)
#define INF 10000000000
#define mod abs
#define pf printf
#define sf scanf

using namespace std;

#define MAXX 52 + 1

double final_dist;
double tank, miles_per_gallon;

double dist[MAXX];
double cost[MAXX];

double mincost[MAXX][MAXX];

int cnt;

double bfs_style()
{



    loop(i, cnt+1)
    {
        FOR(j, i, cnt+1)
        {
            mincost[i][j] = INF;
        }
    }

    mincost[0][0] = cost[0];



    for(int i=1; i<=cnt; i++)
    {
        double distance = dist[i];
        if(distance <= tank * miles_per_gallon)
        {
            mincost[0][i] = mincost[0][0];
        }


        loop(j, i)
        {
            distance = dist[i] - dist[j];
            if(2 * distance >= tank * miles_per_gallon || ( i < cnt && (dist[i+1] - dist[j])/miles_per_gallon > tank) )
                mincost[i][i] = min(mincost[i][i], mincost[j][i] + cost[i] * (distance/miles_per_gallon) );
        }



       // mincost[i][i] += (cost[i] * tank);

        if(mincost[i][i] >= INF) continue;

        mincost[i][i] += 200;


        for(int j=i+1; j<=cnt; j++)
        {
            distance = dist[j] - dist[i];

            if(distance <= tank * miles_per_gallon)
            {
                mincost[i][j] = mincost[i][i] ;
            }
        }
    }

    loop(i, cnt)
    {
        mincost[cnt][cnt] = min(mincost[cnt][cnt], mincost[i][cnt]);
    }

    return mincost[cnt][cnt];






}


int main()
{       freopen("test.in","r",stdin);
    double result;
    int kaseno = 0;
    while(true)
    {
        cin>>final_dist;
        if(final_dist < 0) break;

        cin>>tank>>miles_per_gallon>>cost[0]>>cnt;
        cnt++;

        cost[0] = cost[0] * 100;
        dist[0] = 0;


        FOR(i, 1, cnt)
        {
            cin>>dist[i]>>cost[i];
        }

        dist[cnt] = final_dist;

        result = bfs_style() + 0.5;
        result = (ll) result;
        result /= 100.0;

        pf("Data Set #%d\nminimum cost = $%.2lf\n", ++kaseno, result);

    }

    return 0;
}
