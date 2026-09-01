#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    char word[101];
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        scanf("%100s", word);
        int length = (int)strlen(word);

        if(length > 10){
            printf("%c%d%c\n", word[0], length - 2, word[length - 1]);
        }
        else{
            printf("%s\n", word);
        }
    }
    return 0;
}