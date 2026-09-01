#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if(n == 3 || n == 2){
        printf("NO SOLUTION\n");
    }
    else{
        for(int j=2; j<=n; j+=2){
            printf("%d ", j);
        }
        for(int i=1; i<=n; i+=2){
            printf("%d ", i);
        }
    }
}