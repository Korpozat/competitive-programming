#include<stdio.h>

int main(){
    int n;
    long long total = 0;
    scanf("%d", &n);
    int arr[n + 1];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(int j=1; j<n; j++){
        if (arr[j] < arr[j-1]){
            total += arr[j-1] - arr[j];
            arr[j] = arr[j-1];
        }
    }
    printf("%lld\n", total);
}