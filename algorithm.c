//算法练习
#include<stdio.h>
//1~5的乘积

int main()
{
    int product=1;
    int m;
    for(m=1;m<6;m++)    //执行顺序:m=1;m<6;product=product*m;m++
    {
        product=product*m;
    }
    printf("product=%d",product);   //这里的输出语句不能放在循环语句中
}



//增强版，可以求1到任意一个数的乘积

int main()
{
    printf("请输入一个数字:\n");
    int product=1;
    int m,n;
    scanf("%d",&m);
    for(n=1;n<m+1;n++)
    {
        product=product*n;
    }
    printf("1到%d的乘积为:%d",m,product);
}


//求1-1/2+1/3-1/4+...+1/99-1/100.

int main()
{
    int mole,deno;  //定义分子分母
    mole=1;
    double sum=0;   //输出结果数据类型
    for(deno=1;deno<=100;deno++){
        sum+=mole*1.0/deno;   //<=>sum=sum+mole*1.0/i;注意输入数字的格式
        mole=-mole;
    }
    printf("sum=%lf",sum);  //%lf double型数据输出格式，%f float型数据输出格式
}



//判断给出的数是否为素数

#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,i;
    printf("Enter num:");
    scanf("%d",&n);
    m=sqrt(n);
    for(i=2;i<=m;i++){
        if(n%i==0) break;
    }
    if(i<=m) printf("Not a prime number!");
    else printf("A prime number");
}



//扩展:判断给出的一组数中的素数，并打印出来.
