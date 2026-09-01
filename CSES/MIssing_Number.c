#include<stdio.h>
int main(){
    long long n;
    long long sum = 0;
    scanf("%lld", &n);
    for(int i=1; i<=n-1; i++){
        long long a;
        scanf("%lld", &a);
        sum += a;
    }
    long long ans = ((n*(1+n))/2) - sum;
    printf("%lld", ans);
}