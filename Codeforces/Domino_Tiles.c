#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int x=1; x<=n; x++){
        int total = 0;
        int length;
        scanf("%d", &length);

        char s[length + 1];
        scanf("%s", s);

        for(int first=0; first<=1; first++){
            for(int second=0; second<=1; second++){
                char pattern[length + 1];
                if (first == 0){
                    pattern[0] = '0';
                }
                else{
                    pattern[0] = '1';
                }
                if (second == 0){
                    pattern[1] = '0';
                }
                else{
                    pattern[1] = '1';
                }
                for (int i = 2; i < length; i++){
                    if (pattern[i - 2] == '0'){
                        pattern[i] = '1';
                    }
                    else{
                        pattern[i] = '0';
                    }
                }   
            int valid = 1;

            for(int i=0; i<length; i++){
                if (s[i] != '?' && s[i] != pattern[i]){
                    valid = 0;
                    }
                }
            if (valid == 1){
                total += 1;
                }
            }
        }
        printf("%d\n", total);
    }
}
