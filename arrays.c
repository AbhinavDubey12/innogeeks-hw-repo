#include<stdio.h>
int in();
int out();
int insert();
int delete();

int n,ar[100],i;
int main()
{
    int ch;
    char re;
    printf("enter number of array elements");
    scanf("%d",&n);
    in();
    out();
    do
    {   
        printf("enter a case \n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        default:
            printf("the array is \n");
            break;
        }
        out();
        printf("y or n");
        scanf(" %c",&re);
    } while(re=='y');
    out();
    return 0;
    
}

int in()
{
    printf("enter array elements \n");
    for(i=0;i<n;i++)
      scanf("%d",&ar[i]);
    return 0;  
}

int out()
{
    printf("the array elements are \n");
    for(i=0;i<n;i++)
      printf("%d",ar[i]);
    return 0;  
}

int insert()
{
    int pos,x;
    printf("enter a position to be changed \n");
    scanf("%d",&pos);
    printf("enter the new value");
    scanf("%d",&x);
    for(i=n-1;i>=pos;i--)
      ar[i+1]=ar[i];
      ar[pos]=x;
    n=n+1;
    return 0;  
}

int delete()
{
    int pos1;
    printf("enter the position to be deleted");
    scanf("%d",&pos1);
    for(i=pos1+1;i<n;i++)
      ar[i-1]=ar[i];
    n--;
    return 0;  
}