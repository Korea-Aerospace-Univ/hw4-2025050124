#include <stdio.h>

int main()
{
    int N;
    int n = 0;   // 숫자 연속 개수
    int a = 0;   // 숫자 최대값
    int b = 0;   // 소문자 최대값
    int d = 0;  // 소문자 연속 개수 
    char ch;

    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        scanf(" %c", &ch);

        // 소문자
        if(ch >= 'a' && ch <= 'z'){
            d++;
            if(d > b){
                b = d;
            }
            n = 0; // 숫자 끊김
        }

        // 숫자
        else if(ch >= '0' && ch <= '9'){
            n++;
            if(n > a){
                a = n;
            }
            d = 0; // 소문자 끊김
        }

        // 그 외 (대문자 등)
        else{
            n = 0;
            d = 0;
        }
    }

    printf("%d\n", b); // 소문자 최대
    printf("%d\n", a); // 숫자 최대

    return 0;
}
