 // assignment26aug
 
 /*
#include <stdio.h>
float show();
int main()
{
  printf("%f",show());

    return 0;
}
float show()
{
    int a=2,b=3,c;
    c=a+b;
    return c;
}*/


/*
#include<stdio.h>
int add();
int sub();
int multi();
int divi();
int main()
{
    printf("the addition is %d\n",add());
    printf("the subtraction is %d \n",sub());
    printf("the multiplication is %d\n",multi());
    printf("the division is %d",divi());
    return 0;
}
int add()
{
    int a,b,c;
    printf("enter the values for addition ");
    scanf("%d %d",&a,&b);
    c=a+b;
    return c;
}

int sub()
{
    int a,b,c;
    printf("enter the values for subtraction ");
    scanf("%d %d",&a,&b);
    c=a-b;
    return c;
}

int multi()
{
    int a,b,c;
    printf("enter the values for multiplication ");
    scanf("%d %d",&a,&b);
    c=a*b;
    return c;
}

int divi()
{
    int a,b,c;
    printf("enter the values for division ");
    scanf("%d %d",&a,&b);
    c=a/b;
    return c;
}
*/

/*
#include<stdio.h>
int swap();
int wswap();
int main()
{
    swap();
    wswap();
  
    return 0;
}
int swap()
{
    int a,b,temp;
    printf("enter the values ");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("%d %d\n",a,b);
    return 0;
}
int wswap()
{
    int a,b;
    printf("enter the values ");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d",a,b);
}*/


/*
#include<stdio.h>
int arm();
int pal();
int even();
int rev();
int count();
int sum();
int fact();
int fib();

int main()
{
    char a;
    printf("enter the character ");
    scanf("%c",&a);
    if(a=='a')
    {
    printf("%d",arm());
    }
    else if(a=='p')
    {
        printf("%d",pal());
    }
    else if(a=='e')
    {
        printf("%d",even());
    }
    else if(a=='r')
    {
        printf("%d",rev());
    }
    else if(a=='c')
    {
        printf("%d",count());
    }
    else if(a=='s')
    {
        printf("%d",sum());
    }
    else if(a=='f')
    {
        printf("%d",fact());
    }
    else if(a=='g')
    {
        printf("%d",fib());
    }
    return 0;
}
int arm()
{
   int a;
   printf("enter the number ");
   scanf("%d",&a);
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
      printf("armstrong ");
    
  }
  else
  {
      printf("not");
  }
    return sum;
}

int pal()
{
    int p,rem,sum=0;
    printf("enter the value ");
    scanf("%d",&p);
    int temp=p;
    while(p>0)
    {
        rem=p%10;
        sum=sum*10+rem;
        p=p/10;
    }
    if(sum==temp)
    {
        printf("palindrome");
    }
    else
    {
        printf("not");
    }
    return sum;
}

int even()
{
    int e;
    printf("enter the number ");
    scanf("%d",&e);
    if(e%2==0)
    {
        printf("even number");
    }
    else
    {
        printf("odd number");
    }
    return e;
}

int rev()
{
    int r;
    printf("enter the number ");
    scanf("%d",&r);
    int rem,sum=0;
    while(r>0)
    {
        rem=r%10;
        sum=sum*10+rem;
        r=r/10;
    }
    return sum;
}

int count()
{
    int c;
    int count=0;
    printf("enter the number ");
    scanf("%d",&c);
    while(c>0)
    {
        c=c/10;
        count++;
    }
    return count;
}

int sum()
{
    int s,rem,sum=0;
    printf("enter the number ");
    scanf("%d",&s);
    while(s>0)
    {
        rem=s%10;
        sum=sum+rem;
        s=s/10;
    }
    return sum;
}

int fact()
{
    int f,fact=1;
    printf("enter the number ");
    scanf("%d",&f);
    for(int i=1;i<=f;i++)
    {
        fact=fact*i;
    }
    return fact;
}

int fib()
{
    int b,num1=0,num2=1,num3;
    printf("enter the value ");
    scanf("%d",&b);
    for(int i=1;i<=b;i++)
    {
        num3=num1+num2;
        
        num1=num2;
        num2=num3;
      
    }
      return num3; 
    
}*/