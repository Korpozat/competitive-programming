#include<stdio.h>

int main(void){
    int total = 0;
    int i;
    scanf("%d", &i);
    for(int a=0; a<i; a++){
        char thing[4];
        scanf("%3s", thing);
        if(thing[1] == '+'){
            total += 1;
        }
        else{
            total -= 1;
        }
    }
    printf("%d", total);
    return 0;
}