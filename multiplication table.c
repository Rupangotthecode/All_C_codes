#include <stdio.h>

int main()
{
    int a,i,r;
    printf("enter any number:\n");
    scanf("%d",&a);
    printf("enter no of table:\n");
    scanf("%d",&r);
    printf("the table is: \n");
    for (i=1;i<=r;i++)
    {
        printf(" %d*%d=%d \n" ,a,i,a*i);
    }
    return 0;
}
