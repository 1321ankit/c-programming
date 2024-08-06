/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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