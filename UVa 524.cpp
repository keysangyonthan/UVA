/*
*       UVs 524
*       Prime Ring Problem
*
*       author nadeem hussain shaikh
*
*/

#include<iostream>
#include<cstdio>

#include<string.h>
using namespace std;


int isPrime[42] = { 0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1,
        0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1 };

#define valid(num, i) (isPrime[current[i - 1] + num] && (i != length - 1 || isPrime[num + 1]))
int taken[17], current[17], length;

void close_circle(int remaining) {
    int i;
    if (remaining == length)
        for (i = 0; i < length; i++)
            printf("%d", (current[i])), printf(((i != length - 1) ? " " : "\n"));
    else
        for (i = 2 + ((remaining + 1) & 1); i <= length; i += 2)
            if (!taken[i] && valid(i, remaining)) {
                taken[i] = 1, current[remaining] = i;
                close_circle(remaining + 1);
                taken[i] = 0;
            }
}

int main() {
    memset(taken, 0, sizeof taken), memset(current, 0, sizeof current);
    int T = 0;
    current[0] = 1, taken[0] = 1;
    while (scanf("%d", &length) != EOF) {
        if (T) printf("\n");
        printf("Case %d:\n", ++T);
        close_circle(1);
    }
    return 0;
}
