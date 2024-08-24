/*
#include<stdio.h>
void show();
int main()
{
     show();
    return 0;
}
void show() 
{
    printf("Hello world");
}*/


/*
#include<stdio.h>
void add();
void sub();
void multi();
void divi();
int main(){
    add();
    sub();
    multi();
    divi();
    return 0;
}
void add()
{
   int a,b,c;
   printf("enter the values for addition ");
   scanf("%d %d",&a,&b);
   c=a+b;
   printf("addition of two numbers is %d\n",c);
}
void sub()
{
    int a,b,c;
   printf("enter the values for subtraction ");
   scanf("%d %d",&a,&b);
   c=a-b;
   printf("subtraction of two numbers is %d\n",c); 
}
void multi()
{
    int a,b,c;
   printf("enter the values for multiplication ");
   scanf("%d %d",&a,&b);
   c=a*b;
   printf("multiplication of two numbers is %d\n",c); 
}
void divi()
{
    int a,b,c;
   printf("enter the values for division");
   scanf("%d %d",&a,&b);
   c=a/b;
   printf("division of two numbers is %d\n",c); 
}
*/


/*
#include<stdio.h>
void swap();
void wswap();
int main()
{
    swap();
    wswap();
    return 0;
}
void swap()
{
    int a,b,temp;
    printf("enter the values of a and b ");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("the swap values of a and b is %d %d \n",a,b);
    
}
void wswap()
{
   int a,b;
    printf("enter the values of a and b ");
    scanf("%d %d",&a,&b); 
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the swap values of a and b is %d %d",a,b);

}*/


/*
#include<stdio.h>
void armstrong();
void palindrome();
void evennum();
void rev();
void count();
void sumd();
int main()
{
    char a;
    printf("enter a character ");
    scanf("%c",&a);
    if(a=='a')
    {
        armstrong();
    }
    else if(a=='p')
    {
        palindrome();
    }
    else if(a=='e')
    {
        evennum();
    }
    else if(a=='r')
    {
        rev();
    }
    else if(a=='c')
    {
        count();
    }
    else if(a=='s')
    {
        sumd();
    }
    else
    {
        printf("invalid input");
    }
    return 0;
}
void armstrong()
{
    int a=153;
    int rem,sum=0;
    int temp=a;
   
    while(a>0)
    {
        rem=a%10;
        sum=sum+rem*rem*rem;
        a=a/10;
    }
    if(temp==sum)
    {
        printf("armstrong number");
    }
    else
    {
        printf("not");
    }
}

void palindrome()
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
        printf("palindrome number");
    }
    else
    {
        printf("not a palindrome");
    }
}

void evennum()
{
    int a;
    printf("enter any number ");
    scanf("%d",&a);
    
        if(a%2==0)
        {
            printf("even number \n");
        }
        else
        {
            printf("odd number \n");
        }
    
}

void rev()
{
    int a=123;
    int rem,sum=0;
    while(a>0)
    {
        rem=a%10;
        sum=sum*10+rem;
        a=a/10;
    }
    printf("the reverse number is %d",sum);
}

void count()
{
    int a=12345;
    int count=0;
    while(a>0)
    {
        a=a/10;
        count++;
    }
    printf("the digit count is %d",count);
}

void sumd()
{
    int a=1234;
    int rem,sum=0;
    while(a>0)
    {
        rem=a%10;
        sum=sum+rem;
        a=a/10;
    }
    printf("the sum of digits is %d",sum);
}
*/


/*
#include<stdio.h>
int main()
{
    int a;
    printf("enter any number ");
    scanf("%d",&a);
    int p;
    int value=1;
    printf("enter any power value ");
    scanf("%d",&p);
     for(int i=1;i<=p;i++)
     {
         value=value*a;
     }
     printf("%d",value);
    return 0;
}
*/ 

/*
#include<stdio.h>
int main()
{
    int a;
    printf("enter the value of a ");
    scanf("%d",&a);
    if(a>0)
    {
        printf("positive number");
    }
    else if(a<0)
    {
        printf("negative number");
    }
    else
    {
        printf("zero");
    }
    
    return 0;
}
*/


/*
#include <stdio.h>

int main()
{
   int a=2345;
   int rem;
   int last;
   last=a%10;
   printf("the last number is %d\n",last);
   while(a>0)
   {
       rem=a%10;
       a=a/10;
   }
printf("the first number is %d",rem);

    return 0;
}
*/


/*
#include <stdio.h>
int main()
{
   int a=2345;
   int rem;
   int last;
   int sum;
   last=a%10;
   printf("the last number is %d\n",last);
   while(a>0)
   {
       rem=a%10;
       a=a/10;
   }
printf("the first number is %d\n",rem);
sum=last+rem;
printf("the sum is %d",sum);
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
  int a=1234;
  int rem;
  int value=1;
  while(a>0)
  {
      rem=a%10;
      value=value*rem;
      a=a/10;
  }
  printf("%d",value);
}*/


/*
#include<stdio.h>
int main()
{
    
     int a,rem,sum;
      
     for(int i=100;i<=1000;i++)
     {
       a=i;
       sum=0;
    while(a>0)
    {
       rem=a%10;
       sum=sum+rem*rem*rem;
       a=a/10;
    }
    if(i==sum)
    {
        printf("%d armstrong\n",i);
    }
  
     }
     
}
*/