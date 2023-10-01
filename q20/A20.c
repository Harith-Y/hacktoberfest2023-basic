#include<stdio.h>
void main()
{
    
    int e,oe;
    float b,ob;
    float n=1;
    scanf(" %f", &b);
    ob=b;
    if (b>=0)
    {
        scanf(" %d", &e);
        oe=e;
        if (e>0)
        {
            while (e>0)
            {
                n=n*b;
                --e;
            }
            printf("%f",n);
        }
        else if (e==0)
        {
            if (b>0)
                printf("1");
            else
                printf("The result is Undefined. \n");
            
        }
        else
        {
            e=-e;
            while (e>0)
            {
                n=n*b;
                --e;
            }
            printf("1/%f",n);
        }
    }
    
    else
    {
        scanf(" %d", &e);
        oe=e;
        if (e>0)
        {
            if (e%2==0)
            {
                b=-b;
                while (e>0)
                {
                    
                    n=n*b;
                    --e;
                    
                }
                printf("%f",n);
            }
            else 
            {
                b=-b;
                while (e>0)
                {
                    
                    n=n*b;
                    --e;
                    
                }
                printf("-%f",n);
            }
        }
        else if (e==0)
            printf("1");
        else
        {   
            e=-e;
            if (e%2==0)
            {
                b=-b;
                while (e>0)
                {
                    
                    n=n*b;
                    --e;
                    
                }
                printf("1/%f",n);
            }
            else 
            {
                b=-b;
                while (e>0)
                {
                    
                    n=n*b;
                    --e;
                    
                }
                printf("-1/%f",n);
            }
            
        }
    
    }
        
}