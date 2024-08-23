//assignment12aug

1-->10 number print for loop
/*
#include <stdio.h>

int main()
{
  for(int i=1;i<=10;i++)
  {
      printf("%d \n",i);
  }

    return 0;
}
*/
-----------------------------------------------------------

50-->100 number print for loop
/*
# include <stdio.h>
int main()
{
    for(int i=50;i<=100;i++)
    {
        printf("%d \n",i);
    }
}
*/
-----------------------------------------------------------

56-->78 number print for loop
/*
#include<stdio.h>
int main()
{
    for(int i=56;i<=78;i++)
    {
        printf("%d \n",i);

    }
}
*/

10---->1 number print for loop
/*
#include <stdio.h>
int main()
{
    for(int i=10;i>=1;i--)
    {
    printf("%d \n",i);
    }
}
*/
-----------------------------------------------------------

100----->50
number print for loop
/*
#include<stdio.h>
int main()
{
    for(int i=100;i>=50;i--)
    {
        printf("%d \n",i);
    }
}
*/
-----------------------------------------------------------

78---->56  number print for loop

/*
#include<stdio.h>
int main()
{
    for(int i=78;i>=56;i--)
    {
        printf("%d \n",i);
    }
}
*/
-----------------------------------------------------------

1--->5 even number : 
/*
#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        if(i%2==0)
        {
            printf("%d \n",i);
        }
    }
}
*/
-----------------------------------------------------------
	
78--->56 odd number
/*
#include<stdio.h>
int main()
{
	for(int i=78; i>=56; i--)
	{
		if(i%2!=0)
		{
			printf("%d \n",i);
		}
	}
	return 0;
}
*/
-----------------------------------------------------------

1--->10 number sum for loop through
/*
#include<stdio.h>
int main()
{
    int sum=0;
    for(int i=1;i<=10;i++)
    {
         sum=sum+i;

    }
     printf("the sum of first 10 number is %d \n",sum);
    return 0;
}
*/
-----------------------------------------------------------

factorial
/*
#include<stdio.h>
int main()
{
    int fact=1;
    for(int i=1;i<=5;i++)
    {
     fact=fact*i;   
    }
    printf("%d",fact);
    return 0;
}
*/
-----------------------------------------------------------

Fibonacci series
/*
#include<stdio.h>
int main()
{
    int n1=0,n2=1,n3;
    printf("%d %d ",n1,n2);
    for(int i=1;i<=5;i++)
    {
        n3=n1+n2;
        printf("%d ",n3);
        n1=n2;
        n2=n3;
    }
    return 0;
}
*/
