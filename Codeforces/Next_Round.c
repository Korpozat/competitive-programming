#include <stdio.h>

int main(void){
    int n, k;
    int scores[50];
    int count = 0;
    scanf("%d %d", &n, &k);

    for(int i=0; i<n; i++){
        scanf("%d", &scores[i]);
    }
    int cutoff = scores[k - 1];

    for(int i=0; i<n; i++){
        if(scores[i] >= cutoff && scores[i] > 0){
            count += 1;
        }
    }
    printf("%d\n", count);
    return 0;
}