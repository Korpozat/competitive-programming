#include<stdio.h>
#include<string.h>

int main(){
    char s[1000001];
    int sum = 1;
    int maxnum = 1;
    scanf("%s", s);

    for(int x=1; s[x]!='\0'; x++){
        if(s[x] == s[x-1]){
            sum += 1;
            if(maxnum < sum){
                maxnum = sum;
            }
        }
        else{
            sum = 1;
        }
    }
    printf("%d", maxnum);
}