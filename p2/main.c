#include <stdio.h>

int main()
{
    int N;
    int n = 0;   
    int a = 0;   
    int b = 0;   
    int lc = 0;  
    char ch;

    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        scanf(" %c", &ch);

        
        if(ch >= 'a' && ch <= 'z'){
            lc++;
            if(lc > b){
                b = lc;
            }
            n = 0; 
        }

        
        else if(ch >= '0' && ch <= '9'){
            n++;
            if(n > a){
                a = n;
            }
            lc = 0; 
        }

        
        else{
            n = 0;
            lc = 0;
        }
    }

    printf("%d\n", b); 
    printf("%d\n", a); 

    return 0;
}
