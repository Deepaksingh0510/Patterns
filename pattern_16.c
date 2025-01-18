//   A
//  AB
// ABC
//ABCD

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n-i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <i; k++)
        {
            printf("%c",k+'A');
        }
        printf("\n");
        
        
    }
    
    
    return 0;
}