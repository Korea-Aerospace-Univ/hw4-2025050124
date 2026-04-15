#include <stdio.h>

int main()
{
    int answer;
    
    int b;
    
    int t=0;
    
    scanf("%d",&answer);
    
    do{
        scanf("\n%d",&b);
        if(answer>b){
            printf("%d<?\n",b);
        
        t=t+1;
        
        }
        else if(answer<b){
            printf("%d>?\n",b);
            
        t=t+1;
        
        }
        
        
        
        
         
    }while(answer!=b);
    
    
    printf("%d==?\n",b);
    
    
    printf("\n%d",t);
    
}
