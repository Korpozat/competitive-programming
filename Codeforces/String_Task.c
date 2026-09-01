#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
    char str[105];
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++){
        str[i] = tolower(str[i]);

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y'){
            continue;
        }
        else{
            printf(".%c", str[i]);
        }
    }
    printf("\n");

    return 0;
}