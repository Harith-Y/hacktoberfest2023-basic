#include<stdio.h>
int main()
{

    int na,nb,q,r,ona,prod;
    scanf("%d %d",&na, &nb);
    ona=na;

    while (na>=nb)
    {
        na=na-nb;
    }
    r=na;
    //printf("%d",r);

    ona=ona-r;
    prod=0;

    for (q=0;q<ona;q=q+1)
    {
        prod=prod+nb;
        if (prod==ona)
            break;
    }
    printf("%d %d",q+1,r);
return 0;
}