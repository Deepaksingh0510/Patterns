// * * * * 
// * * * * 
// * * * * 
// * * * * 

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    
    return 0;
}


// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    for (int i = 1; i <=n ; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
        
    }
    
    return 0;
}