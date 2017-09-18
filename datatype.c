//根据输出结果，深刻理解C语言是如何处理数据类型的

#include<stdio.h>

int main()
{
    char c1,c2;
    char c3,c4;
    int c5,c6;
    c1=97;
    c2=98;
    c3=197;
    c4=198;
    c5=97;
    c6=98;
    printf("c1=%c,c2=%c\n",c1,c2);
    printf("c1=%d,c2=%d\n\n",c1,c2);
    printf("c3=%c,c4=%c\n",c1,c2);
    printf("c3=%d,c4=%d\n\n",c3,c4);
    printf("c5=%c,c6=%c\n",c5,c6);
    printf("c5=%d,c6=%d\n\n",c5,c6);
    return 0;
}



//键盘如何输入数据使a=3,b=7,x=8.5,y=71.82,c1='A',c2='a'

#include<stdio.h>
int main()
{
    int a,b;
    float x,y;
    char c1,c2;
    scanf("a=%d b=%d",&a,&b);
    //scanf("%d%d",&a,&b);
    scanf("%f%e",&x,&y);
    //scanf("x=%fy=%e",&x,&y);
    scanf("\n%c%c",&c1,&c2);    //这里加上和去掉换行符的效果是不同的，输入数据时，前者要加空格，后者不能加
    //printf("c1=%c,c2=%c",c1,c2);
    //printf("x=%.1f,y=%.2f",x,y);
    printf("a=%d,b=%d,x=%.1f,y=%.2f,c1=%c,c2=%c",a,b,x,y,c1,c2);
    return 0;
}
//运行程序，依次输入:a=3 b=7 8.5 71.82 Aa   注意中间是有空格的
//结论:自己尝试各种组合方式，会有意想不到的收获，上面注释部分只是简单地几种尝试













