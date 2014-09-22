// power can't be negative
#include <stdio.h>

#define LL long long

LL fast_exp(int b, int n){
  LL res = 1, x = b, p;

  for(p = n; p; p >>= 1, x *= x)
    if(p & 1) res *= x;

  return res;
}

int main(){
  int b, n;

  while(scanf("%d %d", &b, &n) == 2){
    printf("%d^%d = %Ld\n", b, n, fast_exp(b,n));
  }
  return 0;
}

