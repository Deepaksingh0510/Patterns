//   *
//   ***
//   *****

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    for (int i = 1; i <=n; i++)
    {
        for (int k = 1; k <=2*i-1; k++)
        {
            printf("* ");
        }
        printf("\n");
             
    }
    
    return 0;
}


// 1
// 123
// 12345
// 1234567
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=2*i-1; j++)
        {
            printf("%d",j);
        }
        printf("\n");
        
    }
    
    return 0;
}