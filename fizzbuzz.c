#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(i%3==0&&i%5==0)
        {printf ("fizzbuzz /n");}
        else if(i%3==0)
        printf("fizz /n");
        else if (i%5==0)
            printf("buzz/n");
        else
        printf("%d__",i);
    }
    return 0;
}