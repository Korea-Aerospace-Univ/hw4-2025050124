#include <stdio.h>

int main()
{
    int answer, b; //answer 와 b와 t를 정수형지정 t는 시도 횟수이고 b는 시도값이다.
    int t = 0;

    scanf("%d", &answer); //정답 입력 받기

    do {
        scanf("%d", &b); //시도횟수 1회 추가
        t++;

        if (answer > b) {        //답이 b보다 큰경우
            printf("%d>?\n", b);
        }
        else if (answer < b) {   //답이 b보다 작은경우
            printf("%d<?\n", b);
        }
        

    } while (answer != b); //b와답이 같은경우

    printf("%d==?\n", b);

    printf("시도횟수는%d회\n", t);

    return 0;
}
