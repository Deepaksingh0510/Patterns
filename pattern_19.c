//   A
//  ABA
// ABCBA
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    for (int i = 1; i <=n; i++)
    {
        char s='A';
        char d='A';
        
        for (int j = 1; j <=n-i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <=i; k++)
        {
            printf("%c",s);
            s++;    
        }
        for (int l = 1; l <=i-1; l++)
        {
            printf("%c",d);
            d++;
        }
        
        printf("\n");
        
    }
    
    return 0;
}