#include<stdio.h>
#include "../inc/sum.h"

int main()
{
        printf("Case 5\n");
        int res = sum();
        printf("Sum = %d\n",res);
        return 0;
}

int sum()
{
        int a = 10, b = 5;
        return a+b;
}
