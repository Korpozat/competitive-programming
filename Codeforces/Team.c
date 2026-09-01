#include <stdio.h>

int main(void){
    int n;
    int counter = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        int petya;
        int vasya;
        int tonya;
        scanf("%d %d %d", &petya, &vasya, &tonya);

        if (petya + vasya + tonya >= 2){
            counter += 1;
        }
    }
    printf("%d\n", counter);
    return 0;
}