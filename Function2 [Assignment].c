//assignment23aug

addition
sub
multi
div 
through function
/*
#include<stdio.h>
void add(int a,int b);
void sub(int a,int b);
void multi(int a,int b);
void divi(int a,int b);
int main()
{
    int num1,num2;
    printf("enter the numbers ");
    scanf("%d %d",&num1,&num2);
    add(num1,num2);
    sub(num1,num2);
    multi(num1,num2);
    divi(num1,num2);
    return 0;
}
void add(int a,int b)
{
    int c=a+b;
    printf("addition %d\n",c);
}
void sub(int a,int b)
{
    int c=a-b;
    printf("substraction %d\n",c);
}
void multi(int a,int b)
{
    int c=a*b;
    printf("multiplication %d \n",c);
}
void divi(int a,int b)
{
    int c=a/b;
    printf("division %d",c);
}*/
---------------------------------------------

swap()  :with third variable 
wswap() :without third variable 
/*
#include<stdio.h>
void swap(int a,int b);
void wswap(int a,int b);
int main()
{
 int num1,num2;
 printf("enter the values ");
 scanf("%d %d",&num1,&num2);
 swap(num1,num2);
 wswap(num1,num2);
 return 0;
}
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("%d %d\n ",a,b);
}

void wswap(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d",a,b);
}*/
---------------------------------------------

    
 a :
	check Armstrong number 

p :
	check palindrome number 

e :
	check even number 

r :
	reverse number check 
c :
	count digit 

s :
	sum of digit 

f :
	factorial 

g :
	Fibonacci

/*    
#include <stdio.h>
void arm(int a);
void pal(int p);
void even(int e);
void rev(int r);
void count(int c);
void sum(int s);
void fact(int f);
void fib(int g);
int main()
{
  char a;
  printf("enter the character ");
  scanf("%c",&a);
  if(a=='a')
  {
      int s;
      printf("enter the value ");
      scanf("%d",&s);
      arm(s);
  }
  else if(a=='p')
  {
       int d;
      printf("enter the value ");
      scanf("%d",&d);
      pal(d); 
  }
  else if(a=='e')
  {
      int f;
      printf("enter the value ");
      scanf("%d",&f);
      even(f);
  }
  else if(a=='r')
  {
      int g;
      printf("enter the value ");
      scanf("%d",&g);
      rev(g);
  }
  else if(a=='c')
  {
      int h;
      printf("enter the value ");
      scanf("%d",&h);
      count(h);
  }
  else if(a=='s')
  {
      int j;
      printf("enter the value ");
      scanf("%d",&j);
      sum(j);
  }
  else if(a=='f')
  {
      int k;
      printf("enter the value ");
      scanf("%d",&k);
      fact(k);
  }
  else if(a=='g')
  {
      int l;
      printf("enter the values ");
      scanf("%d",&l);
      fib(l);
  }

    return 0;
}
void arm(int a)
{
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
        printf("armstrong");
    }
    else
    {
        printf("not");
    }
}

void pal(int p)
{
   int rem,sum=0;
   int temp=p;
   while(p>0)
   {
       rem=p%10;
       sum=sum*10+rem;
       p=p/10;
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

void even(int e)
{
    if(e%2==0)
    {
        printf("even number");
    }
    else 
    {
        printf("odd");
    }
}

void rev(int r)
{
   int rem,sum=0;
   while(r>0)
   {
       rem=r%10;
       sum=sum*10+rem;
       r=r/10;
   }
   printf("%d",sum);
}

void count(int c)
{
    int count;
    while(c>0)
    {
        c=c/10;
        count++;
    }
    printf("%d",count);
}

 void sum(int s)
 {
     int rem;
     int sum=0;
     while(s>0)
     {
         rem=s%10;
         sum=sum+rem;
         s=s/10;
     }
     printf("%d",sum);
 }
 
 void fact(int f)
 {
     int value=1;
     for(int i=1;i<=f;i++)
     {
         value=value*i;
     }
     printf("%d",value);
 }
 
 void fib(int g)
 {
    
         
     int num1=0,num2=1,num3;
      for(int i=1;i<=g;i++)
     {
     num3=num1+num2;
     printf("%d",num3);
     num1=num2;
     num2=num3;
     }
 }
*/ 
------------------------------------------
1 2 3 4 5 
2 3 4 5 6 
3 4 5 6 7 
4 5 6 7 8 
5 6 7 8 9 

/*
#include <stdio.h>

int main()
{
   for(int i=1;i<=5;i++)
   {
       for(int j=1;j<=5;j++)
       {
       printf(" %d",(i+j)-1);
           
       }
       printf("\n");
   }

    return 0;
}
*/
------------------------------------------
        
1 6 11 16 21
2 7 12 17 22
3 8 13 18 23
4 9 14 19 24
5 10 15 20 25 
/*
#include <stdio.h>

int main()
{

   for(int i=1;i<=5;i++)
   {
       int x=i;
       for(int j=1;j<=5;j++)
       {
         printf(" %d",x);
         x=x+5;
       }
       printf("\n");
   }

    return 0;
}*/
