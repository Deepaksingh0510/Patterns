//    1
//   121
//  12321
// 1234321
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        int s=i-1;
        for (int j = 1; j <= n-i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%d",k);
        }
        for (int l = 1; l <=i-1; l++)
        {
            printf("%d",s);
            s--;
        }
        
        printf("\n");
        
    }
    
    return 0;
}