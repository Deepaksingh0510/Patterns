//     *
//    * *
//   *   *
//  *     *
// *********
 #include<stdio.h>
 
 int main(){
    int n;
    scanf("%d",&n);

    for (int i = 1; i <=n; i++)
    {

        for (int j = 1; j <=n; j++)
        {
            if (i==n|| i+j==n+1)
            {
                printf("*"); 
            }
            else{
                printf(" ");
            }    
        }
        for (int l = 2; l <=i; l++)
        {
            if (i==n ||l==i)
            {
                printf("*");    
            }
            else{
                printf(" ");
            }
             
        }
        
        printf("\n");
        
    }
    
    return 0;
 } 