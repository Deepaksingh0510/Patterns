#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n-i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < (2*i+1); k++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    n=n-1;
    for (int l = 0; l < n; l++)
    {
        for (int m = 0; m < l+1; m++)
        {
            printf(" ");
        }
        for (int o = 0; o < (2*(n-l)-1); o++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    
    return 0;
}