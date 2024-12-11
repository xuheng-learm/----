#include<stdio.h>
int main()
{

    int a,x,c,m=0;
    scanf("%d",&a);
    scanf("%d",&x);
    printf("| 周日 | 周一 | 周二 | 周三 | 周四 | 周五 | 周六 |\n");
    printf("| ---- | ---- | ---- | ---- | ---- | ---- | ---- |\n");
    printf("| ");
    for (int i = 1; i <8 ; i++)
    {
        if (i<a||(a!=0))
        {
            printf("     |",i);
        }
        else{
            printf("%d\t|",i);
        }
        
    }

    printf("\n");


c=x-(7-a);
    //printf("\n%d",c);

    //printf("\n%d",c/7);


    printf("| ");
    for (int i = 1; i <= c; i++)
    {
        printf("%d\t|",i+(7-a));m++;   
    if (m==7)
    {
        printf("\n");printf("| ");
        m=0;
    }
    

    }
    






    
}