#include <stdio.h>
 
int main(){
    int i;
    int totalx = 0;
    int totaly = 0;
    int totalz = 0;
    scanf("%d", &i);
    for(int n=1; n<=i; n++){
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        totalx += x;
        totaly += y;
        totalz += z;
    }
    if (totalx == 0 && totaly == 0 && totalz == 0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}