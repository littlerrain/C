//一个简单的计算器

#include<stdio.h>
#include<math.h>

int main()
{
    void sum(double x,double y),sub(double x,double y),mul(double x,double y),div(double x,double y),rem(int x,int y);
    double a,b;
    char action;
    printf("Tell me you want:(+ - * / %%):\n");
    action=getchar();
    //scanf("%c",action);
    printf("Enter Numbers:\n");
    scanf("%lf%lf",&a,&b);
    switch(action)
    {
        case '+':sum(a,b);break;
        case '-':sub(a,b);break;
        case '*':mul(a,b);break;
        case '/':div(a,b);break;
        case '%':rem(a,b);break;
        default:printf("运算符输入错误！");
    }
}
void sum(double x,double y)
{
    printf("sum=%lf",x+y);
}
void sub(double x,double y)
{
    printf("sub=%lf",x-y);
}
void mul(double x,double y)
{
    printf("mul=%lf",x*y);
}
void div(double x,double y)
{
    printf("%div=%lf",x/y);
}
void rem(int x,int y)
{
    printf("rem=%d",x%y);
}
