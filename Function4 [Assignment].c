//assignment26aug

	RETURN AND ARGUMENT 

char , float :return and argument 

/*
#include<stdio.h>
char dis(char a);
int main()
{
   printf("%c",dis('a')); 
    return 0;
}
char dis(char a)
{
    return a;
}*/


/*
#include<stdio.h>
float add(float a,float b);
int main()
{
    printf("%f",add(3.2,4.2));
    return 0;
}
float add(float a,float b)
{
    float c;
    c=a+b;
    return c;
}*/
-------------------------------------------------------------------------------

addition
sub
multi
div 
/*
#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int multi(int a,int b);
int divi(int a,int b);
int main()
{
    int a,b;
    printf("enter the values ");
    scanf("%d %d",&a,&b);
    printf("the addition is %d\n",add(a,b));
    printf("the subtraction is %d\n",sub(a,b));
    printf("the multiplication is %d\n",multi(a,b));
    printf("the division is %d\n",divi(a,b));
    return 0;
}
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int sub(int a,int b)
{
    int c;
    c=a-b;
    return c;
}
int multi(int a,int b)
{
    int c;
    c=a*b;
    return c;
}
int divi(int a,int b)
{
    int c;
    c=a/b;
    return c;
}*/
-------------------------------------------------------------------------------

swap()  :with third variable 
wswap() :without third variable 

/*
#include<stdio.h>
int swap(int a,int b);
int wswap(int a,int b);
int main()
{
    int a,b;
    printf("enter the numbers ");
    scanf("%d %d",&a,&b);
   swap(a,b);
   wswap(a,b);
    return 0;
}
int swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("%d %d\n",a,b);
    return 0;
}

int wswap(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d",a,b);
    return 0;
}
*/
-------------------------------------------------------------------------------

   
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
#include<stdio.h>
int arm(int a);
int pal(int p);
int even(int e);
int rev(int r);
int count(int c);
int sum(int s);
int fact(int f);
int fib(int g);

int main()
{
    char a;
    printf("enter the character ");
    scanf("%c",&a);
    if(a=='a')
    {
    int a;
    printf("enter the value ");
    scanf("%d",&a);
    printf("%d",arm(a));
    }
    else if(a=='p')
    {
        int p;
        printf("enter the value ");
        scanf("%d",&p);
        printf("%d",pal(p));
    }
    else if(a=='e')
    {
        int e;
        printf("enter the value ");
        scanf("%d",&e);
        printf("%d",even(e));
    }
    else if(a=='r')
    {
        int r;
        printf("enter the value");
        scanf("%d",&r);
        printf("%d",rev(r));
    }
    else if(a=='c')
    {
        int c;
        printf("enter the value ");
        scanf("%d",&c);
        printf("%d",count(c));
    }
    else if(a=='s')
    {
        int s;
        printf("enter the value ");
        scanf("%d",&s);
        printf("%d",sum(s));
    }
    else if(a=='f')
    {
        int f;
        printf("enter the value ");
        scanf("%d",&f);
        printf("%d",fact(f));
    }
    else if(a=='g')
    {
        int g;
        printf("enter the value ");
        scanf("%d",&g);
       printf("%d",fib(g));
    }
    return 0;
}
int arm(int a)
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
    return sum;
}

int pal(int p)
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
   return sum;
}

int even(int e)
{
    if(e%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return e;
}

int rev(int r)
{
    int rem,sum=0;
    while(r>0)
    {
        rem=r%10;
        sum=sum*10+rem;
        r=r/10;
    }
    return sum;
}

int count(int c)
{
    int count=0;
    while(c>0)
    {
        c=c/10;
        count++;
    }
    return count;
}

int sum(int s)
{
    int sum=0,rem;
    while(s>0)
    {
        rem=s%10;
        sum=sum+rem;
        s=s/10;
    }
    return sum;
}

int fact(int f)
{
    int value=1;
    for(int i=1;i<=f;i++)
    {
        value=value*i;
    }
    return value;
}

int fib(int g)
{
    int n1=0,n2=1,n3;
    for(int i=1;i<=g;i++)
    {
        n3=n1+n2;
       
        n1=n2;
        n2=n3;
    }
    return n3;
}*/
