//assignment6aug
1)
week days 
/* 1
#include <stdio.h>

int main()
{
    int a;
    printf("enter the value ");
    scanf("%d",&a);
    if(a==1)
    {
        printf("sunday");
    }
    else if(a==2)
    {
        printf("monday");
    }
    else if(a==3)
    {
        printf("tuesday");
    }
    else if(a==4)
    {
        printf("wednesday");
    }
    else if(a==5)
    {
        printf("thrusday");
    }
    else if(a==6)
    {
        printf("friday");
    }
    else if(a==7)
    {
        printf("saturday");
    }
    else
    {
        printf("invalid input");
    }

    return 0;
}
*/
-------------------------------------------------------

    
2)months
/* 2
#include <stdio.h>

int main()
{
    int a;
    printf("enter the value ");
    scanf("%d",&a);
    if(a==1)
    {
        printf("jan");
    }
    else if(a==2)
    {
        printf("feb");
    }
    else if(a==3)
    {
        printf("march");
    }
    else if(a==4)
    {
        printf("april");
    }
    else if(a==5)
    {
        printf("may");
    }
    else if(a==6)
    {
        printf("june");
    }
    else if(a==7)
    {
        printf("july");
    }
      else if(a==8)
    {
        printf("aug");
    }
      else if(a==9)
    {
        printf("sept");
    }
      else if(a==10)
    {
        printf("oct");
    }
      else if(a==11)
    {
        printf("nov");
    }
      else if(a==12)
    {
        printf("dec");
    }
    else
    {
        printf("invalid input");
    }

    return 0;
}
*/
-------------------------------------------------------

3)seasons 
1:spring
2 :summer 
3 :
/* 3

#include <stdio.h>

int main()
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
      
      return 0;
}
*/
    -------------------------------------------------------

4)
q,w,e,r,t,y,u,i,o,p :upper line 

a,s,d,f,g,h,j,k,l :mid line 

z,x,c,v,b,n,m :lower line 

input is not valid 

/* 4
#include <stdio.h>

int main()
{
    char a;
    printf("enter the value ");
    scanf("%c",&a);
    if(a=='q' || a=='w' || a=='e' || a=='r' || a=='t'|| a=='y' || a=='u' || a=='i' || a=='o' || a=='p')
    {
        printf("upper line");
    }
    else if(a=='a'|| a=='s' || a=='d' || a=='f' || a=='g' || a=='h' || a=='j' || a=='k' || a=='l' )
    {
        printf("mid line");
    }
     else if(a=='z'|| a=='x' || a=='c' || a=='v' || a=='b' || a=='n' || a=='m' )
    {
        printf("lower line");
    }
    else
    {
        printf("invalid input");
    }
      
      return 0;
}
*/
-------------------------------------------------------

5)
a :apple 
b :ball
c :cat 
d :dog 
/* 5
#include <stdio.h>

int main()
{
    char a;
    printf("enter the value ");
    scanf("%c",&a);
    if(a=='a')
    {
        printf("apple");
    }
    else if(a=='b')
    {
        printf("ball");
    }
    else if(a=='c')
    {
        printf("cat");
    }
    else if(a=='d')
    {
        printf("dog");
    }
    else
    {
        printf("invalid input");
    }
    
    return 0;
}
*/
    -------------------------------------------------------

    6)
a :
	two number addition

s :
	two number substraction

m :
	two number multiplication

d :
	two number divide 

o :
	two number modular 

input is not valid 
--------------------------------------------------
s :
	two number input number swap without third variable 

w :
	two number input number swap with third variable 

input is not valid 
/* 6,7
#include <stdio.h>

int main()
{
    char a;
    printf("enter any character");
    scanf("%c",&a);
    if (a=='a'){
        int num1,num2,num3;
        printf("enter the value of num1,num2");
        scanf("%d %d",&num1,&num2);
        num3=num1+num2;
        printf("%d",num3);
    }
    else if (a=='b'){
           int num1,num2,num3;
        printf("enter the value of num1,num2");
        scanf("%d %d",&num1,&num2);
        num3=num1-num2;
        printf("%d",num3);
        
    }
      else if (a=='c'){
           int num1,num2,num3;
        printf("enter the value of num1,num2");
        scanf("%d %d",&num1,&num2);
        num3=num1*num2;
        printf("%d",num3);
        
    }
      else if (a=='d'){
           int num1,num2,num3;
        printf("enter the value of num1,num2");
        scanf("%d %d",&num1,&num2);
        num3=num1/num2;
        printf("%d",num3);
        
    }
      else if (a=='e'){
           int a,b;
        printf("enter the value of a,b");
        scanf("%d %d",&a,&b);
        a=a+b;
        b=a-b;
        a=a-b;
        printf("%d %d",a,b);
        
    }
      else if (a=='f'){
           int a,b,temp;
        printf("enter the value of a,b");
        scanf("%d %d",&a,&b);
        temp=a;
        a=b;
        b=temp;
        printf("%d %d",a,b);
        
    }
    
    else {
        printf("invalid");
    }
        
    return 0;
}
*/
-------------------------------------------------------

user input number : 
	2 nd 3 both 
	6 and 9 anyone 
	5 and 4 both 
	3 and 8 anyone 

input is not valid 
/* 8
#include <stdio.h>

int main()
{
  int a;
  printf("enter the value ");
  scanf("%d", &a);
  if(a%2==0 && a%3==0)
  {
      printf("divisible by both");
  }
  else if(a%6==0 || a%9==0)
  {
    printf("divisible");  
  }
    else if(a%5==0 && a%4==0)
  {
    printf("divisible by both");  
  }
    else if(a%3==0 || a%8==0)
  {
    printf("divisible");  
  }
  else
  {
      printf("invalid input");
  }

    return 0;
}
*/
-------------------------------------------------------

1----->10 this number is between 1 to 10 
11---->20 this number is between 11 to 20
34--->89 this number is between 34 to 89 
input is not valid 
/* 9
#include<stdio.h>
int main()
{
    int a;
    printf("enter the value ");
    scanf("%d",&a);
    if (a>=1 && a<=10)
    {
        printf("this number is between 1 to 10");
    }
     else if (a>=11 && a<=20)
    {
        printf("this number is between 11 to 20");
    }
    
     else if (a>=34 && a<=89)
    {
        printf("this number is between 34 to 89");
    }
    else
    {
        printf("invalid input");
    }
    
    return 0;
}
*/
-------------------------------------------------------


user five marks input 
all subject marks greater 36 
	pass

fail
/* 10
#include<stdio.h>
int main()
{
    int maths,science,computer,english,hindi;
    printf("enter the marks of maths,science,computer,english,hindi ");
    scanf("%d %d %d %d %d", & maths, & science, & computer, & english, & hindi);
    if(maths>36 && science>36 && computer>36 && english>36 && hindi>36)
    {
        printf("pass");
    }
    else
    {
        printf("fail");
    }
    
    return 0;
}
*/
-------------------------------------------------------


user five marks input 
all subject marks greater 36 
	average 
	total average is :...

fail
/* 11
#include<stdio.h>
int main()
{
    int maths,science,computer,english,hindi,total,avg;
    printf("enter the marks of maths,science,computer,english,hindi: ");
    scanf("%d %d %d %d %d", & maths, & science, & computer, & english, & hindi);
    if(maths>36 && science>36 && computer>36 && english>36 && hindi>36)
    {
        total=maths+science+computer+english+hindi;
        printf("total marks is:%d\n",total);
        avg=total/5;
        printf("avg marks is:%d",avg);
    }
    else
    {
        printf("fail");
    }
    
    return 0;
}
*/
-------------------------------------------------------

user five marks input 
all subject marks greater 40
	percentage...

fail
/* 12
#include<stdio.h>
int main()
{
    int maths,science,computer,english,hindi,total;
    float percentage;
    printf("enter the marks of maths,science,computer,english,hindi: ");
    scanf("%d %d %d %d %d", & maths, & science, & computer, & english, & hindi);
    if(maths>40 && science>40 && computer>40 && english>40 && hindi>40)
    {
        total=maths+science+computer+english+hindi;
        printf("total marks is:%d\n",total);
        percentage=(total/500.0)*100;
        printf("percentage is %f",percentage);
    }
    else
    {
        printf("fail");
    }
    
    return 0;
}
*/
-------------------------------------------------------

C program to convert temperature from Fahrenheit to Celsius and Celsius to Fahrenheit
celsius 
f---->c 
fahrenheit
c---f 
/* 13
#include<stdio.h>
int main()
{
    int a;
    float c,f;
    printf("enter 1 for temperature in fahrenheit or 2 for temperature in celsius ");
    scanf("%d",&a);
    if (a==1)
    {
    printf("enter the temperature in celsius");
    scanf("%f",&c);
    f=(9/5.0)*c+32;
    printf("we get temperature in fahrenheit: %f",f);
    }
    else if (a==2)
    {
        printf("enter the temperature in fahrenheit");
        scanf("%f",&f);
        c=(f-32)*5/9.0;
        printf("we get temperature in celsius: %f",c);
        }
        else
        {
            printf("dont want to change");
        }
    return 0;
}

*/
    -------------------------------------------------------

C program to enter student marks and find percentage and grade
A college has the following rules for the grading system:
5 marks (grade + %)
1. Below 25 – F
2. 25 to 45 – E
3. 45 to 50 – D
4. 50 to 60 – C
5. 60 to 80 – B 
6. Above 80 – A
/* 14
#include<stdio.h>
int main()
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
    
    return 0;
}
*/
    -------------------------------------------------------


salalry :
holidays (1) =full salary 
2-5 =5% 
5-14 =10% 
15 =50% 
else =not salary 

output : 
name:
address: 
bank details: 
salary : 
alot :
 holidays 
/*
#include <stdio.h>

int main()
{
   int holiday,salary,name,addess,bankdetails,netsalary;
   printf("ankit\n");
   printf("my address is jagatpura \n");
   printf("bank details: 123456\n");
    printf("enter the salary: ");
   scanf("%d", & salary);
   
   printf("enter the number of holidays: ");
   scanf("%d", & holiday);
  
   if(holiday==1)
   {
       printf("your salary after one holiday is %d",salary);
   }
   else if(holiday>=2 && holiday<=5)
   {
       netsalary=salary-salary*5/100;
         printf("your salary after all the holidays is %d",netsalary);
   }
     else if(holiday>=5 && holiday<=14)
   {
       netsalary=salary-salary*10/100;
         printf("your salary after all the holidays is %d",netsalary);
   }
     else if(holiday==15)
   {
       netsalary=salary-salary*50/100;
         printf("your salary after all the holidays is %d",netsalary);
   }
   else
   {
       printf("no salary left");
   }

    return 0;
}
*/
     -------------------------------------------------------

electric city bill : 
4 unit 
40 
1- 10 = 10% 
11-20 =15% 
21-40 =30% 
50 =50% 

output : 
name:
unit :3 
amout 30 
discout : 10% 
total pay amount : 
/*
#include<stdio.h>
int main()
{
    int unit,amount,discount,tpamount;
    printf("enter the number of units consumed ");
    scanf("%d",& unit);
    
      amount = unit*10;
    printf("your amount is %d \n",amount);
    
    if(unit>=1 && unit<=10)
    {
      printf("you get 10 percent discount\n");
        tpamount=amount-(amount*10/100);
        printf("the total pay amount is %d",tpamount);
    }
    else if(unit>=11 && unit<=20)
    {
      printf("you get 15 percent discount\n");
        tpamount=amount-(amount*15/100);
        printf("the total pay amount is %d",tpamount);
    }
    else if(unit>=21 && unit<=40)
    {
      printf("you get 30 percent discount\n");
        tpamount=amount-(amount*30/100);
        printf("the total pay amount is %d",tpamount);
    }
     else if(unit==50)
    {
      printf("you get 50 percent discount\n");
        tpamount=amount-(amount*50/100);
        printf("the total pay amount is %d",tpamount);
    }
    
  return 0;
  
}
*/











