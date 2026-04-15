#include <stdio.h>

int main()
{
    int answer, b;
    int t = 0;

    scanf("%d", &answer);

    do {
        scanf("%d", &b);
        t++;

        if (answer > b) {
            printf("%d>?\n", b);
        }
        else if (answer < b) {
            printf("%d<?\n", b);
        }
        else {
            printf("%d==?\n", b);
        }

    } while (answer != b);

    printf("시도횟수는%d회\n", t);

    return 0;
}
