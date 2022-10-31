#include <stdio.h>

int main()
{
    int in;
    printf("choose the subjects that you have passed in and enter the respective numbers\n 1:maths\n 2:science\n 3:both\n ");
    scanf("%d",&in);
    if(in<3)
    {
        printf("congrats,you have won 15 rupees");
    }
    else
    {
        printf("congrats, you have won 45 rupees");
    }
    return 0;
}
