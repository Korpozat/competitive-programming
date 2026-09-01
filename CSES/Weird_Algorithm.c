#include<stdio.h>

int main(){
    long long n;
    scanf("%lld", &n);
    printf("%lld ", n);

    while (n != 1){
        if (n % 2 == 1){
            n = (n * 3) + 1;
        }
        else{
            n = n / 2;
        }
        printf("%lld\n", n);
    }
    return 0;
}