#include<stdio.h>
#include "../inc/sum.h"

int main()
{
        printf("Case 7\n");
        int res = sum();
        printf("Sum = %d\n",res);
        return 0;
}

int sum()
{
        int a = 10, b = 5;
        return a+b;
}
