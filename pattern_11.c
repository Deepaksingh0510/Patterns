// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a=1;
    for (int i = 1; i <= n+1; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            printf("%d ",a);
            a++;
        }
        printf("\n");
        
    }
    
    return 0;
}