#include<stdio.h>

int main()
{
    int a,b,sum;
    a=123;
    b=456;
    sum=a+b;
    printf("sum=%d\n",sum);
    return 0;
}



// 进阶版

int main()
{
    int a,b,sum;
    scanf("%d+%d+%d",&a,&b,&sum);   //加号为了让输入更形象化
    sum=a+b;
    printf("sum=%d\n",sum);
    return 0;
}


//优化一下
int main()
{
    int a,b;
    scanf("%d+%d",&a,&b);
    printf("a+b=",a+b);
    return 0;
}

