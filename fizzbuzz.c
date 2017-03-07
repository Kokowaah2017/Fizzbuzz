#include<stdio.h>

int main()
{
    int i;
    for(i=1;i<=100;i++)
    {
        if(i%3==0)
        {
            if(i%5==0)
                printf("fizzbuzz\n");
            else
                printf("fizz\n");
        }
        else
        {
            if(i%5==0)
                printf("buzz\n");
            else
                printf("%d\n",i);
        }
	if(i%7==0)
		printf("7-buzz\n");
    }
    return 0;
}
