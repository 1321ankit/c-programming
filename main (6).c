//assignment 8 aug

/*
#include<stdio.h>

int main()
{
   int a,b;
   printf("enter the value ");
   scanf("%d %d",&a,&b);
   if(a>b)
   {
       printf("%d",a);
   }
   else
   printf("%d",b);

    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the values ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("a is bigger %d",a);
    }
    if(a<b && b>c)
    {
        printf("b is bigger %d",b);
    }
    else
    {
    printf("c is bigger %d",c);
    }
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
    if(a=='e')
    {
        int num;
        printf("enter any number ");
        scanf("%d",&num);
        if(num%2==0)
    {
        printf("number is even");
    }
    else
    {
        printf("number is odd");
    }
    }
    
    
    else if(a=='v')
    {
        int age;
        printf("enter your age");
        scanf("%d",&age);
        if(age>=18)
        {
            printf("valid voter id");
        }
        else
        {
            printf("invalid voter id");
        }
    }
    
    
     else if(a=='s')
    {
        
      int a;
    printf("enter the value ");
    scanf("%d",&a);
    if(a==1)
    {
        printf("spring");
    }
    else if(a==2)
    {
        printf("summer");
    }
    else if(a==3)
    {
        printf("monsoon");
    }
    else if(a==4)
    {
        printf("autumn");
    }
    else if(a==5)
    {
        printf("winter");
    }
    else
    {
        printf("invalid input");
    }
    }
    
    else if(a=='m')
    {
      int maths,science,computer,english,hindi,total;
    float percentage;
    printf("enter the marks of maths,science,computer,english,hindi: ");
    scanf("%d %d %d %d %d", & maths, & science, & computer, & english, & hindi);

        total=maths+science+computer+english+hindi;
        printf("total marks is:%d\n",total);
        percentage=(total/500.0)*100;
        printf("percentage is %f \n",percentage);
        if(percentage>80)
        {
            printf("A");
        }
        else if (percentage>=60)
        {
            printf("B");
        }
        else if (percentage>=50)
        {
            printf("C");
        }
        else if (percentage>=45)
        {
            printf("D");
        }
        else if (percentage>=25)
        {
            printf("E");
        }
        else 
        {
            printf("F");
        }
    }
 
 
   else if(a=='k')
   {
       char b;
    printf("enter the value ");
    scanf(" %c",&b);
    if(b=='q' || b=='w' || b=='e' || b=='r' || b=='t'|| b=='y' || b=='u' || b=='i' || b=='o' || b=='p')
    {
        printf("upper line");
    }
    else if(b=='a'|| b=='s' || b=='d' || b=='f' || b=='g' || b=='h' || b=='j' || b=='k' || b=='l' )
    {
        printf("mid line");
    }
     else if(b=='z'|| b=='x' || b=='c' || b=='v' || b=='b' || b=='n' || b=='m' )
    {
        printf("lower line");
    }
    else
    {
        printf("invalid input");
    }
      
   }



else if(a=='z')
{
    char y;
    printf("enter any character");
    scanf(" %c",&y);
      if (y=='w'){
           int num1,num2;
        printf("enter the value of a,b");
        scanf("%d %d",&num1,&num2);
        num1=num1+num2;
        num2=num1-num2;
        num1=num1-num2;
        printf("%d %d",num1,num2);
        
    }
      else if (y=='o'){
           int a,b,temp;
        printf("enter the value of a,b");
        scanf("%d %d",&a,&b);
        temp=a;
        a=b;
        b=temp;
        printf("%d %d",a,b);
        
    }
    
    else
    {
        printf("invalid");
    }
}
else if(a=='c')
{
    char v;
    printf("enter any character ");
    scanf(" %c", &v);
    if(v=='a' || v=='e' || v=='i' || v=='o' || v=='u')
    {
        printf("vowel");
    }
    else
    {
        printf("consonant");
    }
    
}


    else
    {
        printf("invalid input");
    }
    
    return 0;
}
*/



/*
#include<stdio.h>
int main()
{
    int a=1;
    while(a<=10)
    {
        printf("%d \n",a);
        a++;
    }
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int a=1;
    while(a<=100)
    {
        printf("%d \n",a);
        a++;
    }
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int a=50;
    while(a<=100)
    {
        printf("%d \n",a);
        a++;
    }
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int a=45;
    while(a<=89)
    {
        printf("%d \n",a);
        a++;
    }
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int a=10;
    while(a>=1)
    {
        printf("%d \n",a);
        a--;
    }
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int a=100;
    while(a>=1)
    {
        printf("%d \n",a);
        a--;
    }
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int a=100;
    while(a>=50)
    {
        printf("%d \n",a);
        a--;
    }
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int a=89;
    while(a>=45)
    {
        printf("%d \n",a);
        a--;
    }
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int a=1;
    while(a<=10)
    {
        if(a%2==0)
        {
        printf("%d \n",a);
        }
        a++;
    }
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int a=1;
    while(a<=100)
    {
        if(a%2==0)
        {
        printf("%d \n",a);
        }
        a++;
    }
    return 0;
}
*/


/*
#include<stdio.h>
int main()
{
    int a=50;
    while(a<=100)
    {
        if(a%2==0)
        {
        printf("%d \n",a);
        }
        a++;
    }
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int a=45;
    while(a<=89)
    {
        if(a%2==0)
        {
        printf("%d \n",a);
        }
        a++;
    }
    return 0;
}
*/


/*
#include<stdio.h>
int main()
{
    int a=10;
    while(a>=1)
    {
        if(a%2==0)
        printf("%d \n",a);
        a--;
    }
    return 0;
}
*/



/*
#include<stdio.h>
int main()
{
    int a=100;
    while(a>=1)
    {
        if(a%2==0)
        printf("%d \n",a);
        a--;
    }
    return 0;
}
*/



/*
#include<stdio.h>
int main()
{
    int a=89;
    while(a>=45)
    {
        if(a%2==0)
        printf("%d \n",a);
        a--;
    }
    return 0;
}
*/



/*
#include<stdio.h>
int main()
{
    int a=1;
    while(a<=10)
    {
        if(a%2!=0)
        {
        printf("%d \n",a);
        }
        a++;
    }
    return 0;
}
*/



/*
#include<stdio.h>
int main()
{
    int a=1;
    while(a<=100)
    {
        if(a%2!=0)
        {
        printf("%d \n",a);
        }
        a++;
    }
    return 0;
}
*/



/*
#include<stdio.h>
int main()
{
    int a=50;
    while(a<=100)
    {
        if(a%2!=0)
        {
        printf("%d \n",a);
        }
        a++;
    }
    return 0;
}
*/



/*
#include<stdio.h>
int main()
{
    int a=45;
    while(a<=89)
    {
        if(a%2!=0)
        {
        printf("%d \n",a);
        }
        a++;
    }
    return 0;
}
*/



/*
#include<stdio.h>
int main()
{
    int a=10;
    while(a>=1)
    {
        if(a%2!=0)
        printf("%d \n",a);
        a--;
    }
    return 0;
}
*/



/*
#include<stdio.h>
int main()
{
    int a=100;
    while(a>=1)
    {
        if(a%2!=0)
        printf("%d \n",a);
        a--;
    }
    return 0;
}
*/



/*
#include<stdio.h>
int main()
{
    int a=100;
    while(a>=50)
    {
        if(a%2!=0)
        printf("%d \n",a);
        a--;
    }
    return 0;
}
*/



/*
#include<stdio.h>
int main()
{
    int a=89;
    while(a>=45)
    {
        if(a%2!=0)
        printf("%d \n",a);
        a--;
    }
    return 0;
}
*/


/*
#include<stdio.h>
int main()
{
    char x;
    printf("enter any character ");
    scanf("%c",&x);
    if(x=='a')
    {
        int y=1;
        while(y<=10)
        {
            printf("%d\n",y);
            y++;
        }
    }
    else if(x=='b')
    {
        int y=56;
        while(y>=34)
        {
            printf("%d\n",y);
            y--;
        }
    }
    else if(x=='c')
    {
        int y=1;
        while(y<=100)
        {
            if(y%2==0)
            {
            printf("%d\n",y);
            }
            y++;
        }
    }
    else if(x=='d')
    {
        int y=87;
        while(y>=32)
        {
            if(y%2!=0)
            {
            printf("%d\n",y);
            }
            y--;
        }
    }
    return 0;
}
*/