//     *
//    ***
//   *****

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < (2*i+1); k++)
        {
            printf("*");
        }
        printf("\n");
        
        
    }
    
    return 0;
}

//      0 
//    0 1 2 
//  0 1 2 3 4 

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <(2*(n-i)-1); j++)
        {
            printf(" ");
        }

        for (int k = 0; k < 2*i+1; k++)
        {
            printf("%d ",k);
        }
        printf("\n");
        
        
        
    }
    
    return 0;
}

