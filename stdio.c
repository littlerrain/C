//字符数据的输入输出

#include<stdio.h>
char a,b,c;
int main()
{
    //output();
    //inout();
    //io_anychar();
    //io_anychar_1();
    io_anychar_2();
}
int input()
{
    a=getchar();
    b=getchar();
    c=getchar();
    //return(a,b,c);

}
int output()
{
    input();
    putchar(a);
    putchar(b);
    putchar(c);
    putchar('\n');
    printf("原来这就是字符数据的输入输出！");
    //return(a,b,c);
}
//改进版
int inout()
{
    putchar(getchar());
    putchar(getchar());
    putchar(getchar());
    putchar('\n');
    return 0;
}



//优化版，并且扩展为能输入输出任意个字符 ↓

int io_anychar()
{
    //int i,n[i];   这种定义数组的方式是错误的,因为i并没有值，下面长注释部分有改进版
    int i,n[10];    //定义一个数组,元素个数可以任意设置;关于如何定义数组一定要详细了解相关知识，否则极易出错.
    int x;
    for(i=0;i<=x;i++){
        n[i]=getchar();     //从键盘输入的每个字符存储在数组的元素中
    }
    for(i=0;i<=x;i++){
    putchar(n[i]);
    }
}
//注意:输入字符数据时，要连续输入，否则会引起输出结果错误



//改进
int io_anychar_1()
{
    int i,x;
    printf("How many chars you want input:");
    scanf("%d",&x);
    int n[x];
    printf("Please input chars:\n");
    for(i=0;i<=x;i++){
        n[i]=getchar();     //从键盘输入的每个字符存储在数组的元素中
    }
    for(i=0;i<=x;i++){
    putchar(n[i]);
    }
}


//终极黑科技O(∩_∩)O哈哈~
int io_anychar_2()
{
    printf("Enter chars:\n");
    for( ;(c=getchar())!='\n';)
        printf("%c",c);
}
