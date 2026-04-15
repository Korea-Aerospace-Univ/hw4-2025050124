#include <stdio.h>

int main()
{
    int N = 0;
    int n = 0;
    int a = 0;
    int b = 0;
    char ch = '\0';

    scanf("%d", &N);

    for (n = 0; n < N; n = n + 1)
    {
        scanf(" %c", &ch);

        if (ch >= 'a' && ch <= 'z')
        {
            a = a + 1;
            b = 0;
        }

        if (ch >= '0' && ch <= '9')
        {
            b = b + 1;
            a = 0;
        }
    }

    printf("%d", a);
    printf("\n%d", b);

    return 0;
}
