#include <iostream>  
#include <cstring>  
#include <cstdio>  
using namespace std;  
#define LL long long  
const LL INF = (LL)1 << 60;  
int n, K;  
  
LL f[2][80][80][10], grid[80][80];  
int mod(int x)  
{  
    return (x + 2) % 2;  
}  
  
LL dp(int i, int j, int k, int l)  
{  
    if(i < 1 || j < 1 || k < 0) {  
        //printf("*%d %d %d %d %lld\n", i, j, k, l, -INF + 1);  
        return -INF + 1;  
    }  
    LL &ans = f[l][i][j][k];  
    if(ans != -INF) return ans;  
    int t = 0;  
    ans = -INF + 1;  
    if(grid[i][j] < 0) t = -1;  
    if(i > 0)  
        ans = max(dp(i - 1, j, k + t, l), dp(i - 1, j, k + t, mod(l - 1)));  
    if(l == 0){  
        if(j > 1) ans = max(ans, dp(i, j - 1, k + t, l));  
    }else{  
        if(j < n) ans = max(ans, dp(i, j + 1, k + t, l));  
    }  
    if(ans != -INF + 1){  
        ans += grid[i][j];  
    }  
    //printf("%d %d %d %d %lld\n", i, j, k, l, f[l][i][j][k]);  
    return ans;  
}  
  
int main()  
{  
    //freopen("input.txt", "r", stdin);  
    int con = 1;  
    while(scanf("%d %d", &n, &K) == 2){  
        if(!n && !K) break;  
        for(int i = 1; i <= n; i++)  
            for(int j = 1; j <= n; j++)  
                scanf("%lld", &grid[i][j]);  
  
        for(int i = 0; i <= n; i++)  
            for(int j = 0; j <= n; j++)  
                for(int k = 0; k <= K; k++)  
                    f[0][i][j][k] = f[1][i][j][k] = -INF;  
  
        if(grid[1][1] >= 0)  
            f[0][1][1][0] = f[1][1][1][0] = grid[1][1];  
        else if(K >= 1)  
            f[0][1][1][1] = f[1][1][1][1] = grid[1][1];  
  
        LL ans = -INF;  
        for(int i = 0; i <= K; i++){  
            ans = max(ans, dp(n, n, i, 0));  
        }  
        if(ans != -INF + 1){  
            printf("Case %d: %lld\n", con++, ans);  
        }else printf("Case %d: impossible\n", con++);  
    }  
    return 0;  
}  