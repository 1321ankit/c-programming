/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*
#include <stdio.h>

int main()
{
int a=1;
int sum=0;
while(a<=10)
{
    sum=sum+a;
    a++;
}
 printf("%d",sum);
    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    int a=342484;
    int count=0;
    while(a>0)
    {
        a=a/10;
        count++;
    }
    printf("%d",count);
    return 0;

}
*/

/*
#include<stdio.h>
int main()
{
    int a=4456;
    int rem;
    int sum=0;
    while(a>0)
    {
        rem=a%10;
        sum=sum*10+rem;
        a=a/10;
    }
    printf("%d",sum);
    return 0;
}
*/

/*
# include<stdio.h>
int main()
{
    int a=121;
    int rem,sum=0;
    int temp=a;
    while(a>0)
    {
        rem=a%10;
        sum=sum*10+rem;
        a=a/10;

    }
    if(temp==sum)
    {
        printf("palindrome");
    }
    else
    {
        printf("not a palindrome");
    }
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int a=153;
    int rem;
    int sum=0;
    int temp=a;
    while(a>0)
    {
        rem=a%10;
        sum=sum+rem*rem*rem;
        a=a/10;
    }
    if(temp==sum)
    {
        printf("armstrong");
    }
    else
    {
        printf("not");
    }
   return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int a=9;
    int rem;
    int sum=0;
    int temp=a;
    a=a*a;
    while(a>0)
    {
        rem=a%10;
        sum=sum+rem;
        a=a/10;
    }
    if(temp==sum)
    {
        printf("neon number");
    }
    else
    {
        printf("not");
    }
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int a=434;
    int rem;
    int sum=0;
    while(a>0)
    {
        rem=a%10;
        sum=sum+rem;
        a=a/10;
    }
    printf("%d",sum);
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    char a;
    printf("enter any character ");
    scanf("%c",&a);
    if(a=='a')
    {
        int a=153,rem,sum=0;
        int temp=a;
        while(a>0)
        {
            rem=a%10;
            sum=sum+rem*rem*rem;
            a=a/10;
        }
        if(temp==sum)
        {
            printf("armstrong");
        }
        else
        {
            printf("not");
        }
    }
    else if(a=='p')
    {
        int a=121,rem,sum=0;
        int temp=a;
        while(a>0)
        {
            rem=a%10;
            sum=sum*10+rem;
            a=a/10;
        }
        if(temp==sum)
        {
            printf("palindrome");
        }
        else
        {
            printf("not");
        }
    }
    else if(a=='r')
    {
        int a=123,rem,sum=0;
        while(a>0)
        {
            rem=a%10;
            sum=sum*10+rem;
            a=a/10;
        }
        printf("%d",sum);
    }
    else if(a=='s')
    {
        int a=12345,rem,sum=0;
        while(a>0)
        {
            rem=a%10;
            sum=sum+rem;
            a=a/10;
        }
        printf("%d",sum);
    }
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int a=1,sum=0;
    while(a<=10)
    {
        if(a%2==0)
        {
           sum=sum+a;
        }
        a++;
    }
    printf("sum of first 10 even number is %d",sum);
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int a=10,sum=0;
    while(a>=1)
    {
        if(a%2!=0)
        {
            sum=sum+a;
        }
        a--;
    }
    printf("sum of first 10 odd number is %d",sum);
    return 0;
}
*/