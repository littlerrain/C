//比较两个整数大小，并输出较大者
#include<stdio.h>
//自己写的，虽然能实现指定功能，但不建议使用此方法，如果写的程序比较复杂的情况下使用此方法会很乱.

int main()
{
    int a,b,max;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        max=a;
        printf("max=%d\n",max);
    }
    else if(a==b)
    {
        printf("%d=%d",a,b);    //之前会有这种错误的想法 ("%d",a,"=","%d",b)
    }
    else
    {
        max=b;
        printf("max=%d\n",max);
    }
}



//重定义一个函数，使其具有比较两整数大小的功能，建议使用此方法

int main()
{
    int max(int x,int y);
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=max(a,b);
    printf("max=%d\n",c);
    return 0;
}
int max(int x,int y)    //定义max函数
{
    int z;
    //if(x>y) z=x;
    //else z=y;
    //可以用下面的这种简写方式
    z=(x>y)?x:y;
    return(z);
}



//比较两个字符大小

int main()
{
    int max;
    char c,d;
    scanf("%c %c",&c,&d);
    c=(int)c;   //转换数据类型
    d=(int)d;
    if(c>d)
    {
        max=c;
        printf("max=%d\n",max);
    }
    else if(c<d)
    {
        max=d;
        printf("max=%d\n",max);
    }
    else
    {
        return -1;
    }
}



//比较三个整数大小，输出其中最大和最小值

int main()
{
    int max(int x,int y,int z);
    int min(int x,int y,int z);
    int a,b,c,d,f;
    scanf("%d %d %d",&a,&b,&c);
    d=max(a,b,c);
    f=min(a,b,c);
    printf("max=%d\n",d);
    printf("min=%d\n",f);
}
int max(int x,int y,int z)
{
    int p,q;
    if(x>y)
    {
        p=x;
        if(p>z) q=p;
        else q=z;
        return(q);
    }
    else
    {
        p=y;
        if(p>z) q=p;
        else q=z;
        return(q);
    }
}
int min(int x,int y,int z)
{
    int p,q;
    //了解了三目(元)运算符之后可以对以下代码作优化，我已经在它后面补充了
    if(x<y)
    {
        p=x;
        if(p<z) q=p;
        else q=z;
        return(q);
    }
    else
    {
        p=y;
        if(p<z) q=p;
        else q=z;
        return(q);
    }
}

//对上面的代码进行了一些优化，看一下是不是精简多了？

int main()
{
    int max(int x,int y,int z);
    int min(int x,int y,int z);
    int a,b,c,d,f;
    scanf("%d %d %d",&a,&b,&c);
    d=max(a,b,c);
    f=min(a,b,c);
    printf("max=%d\n",d);
    printf("min=%d\n",f);
}
int max(int x,int y,int z)
{
    int p,q;
    p=x>y?x:y;
    q=p>z?p:z;
    return(q);
}
int min(int x,int y,int z)
{
    int p,q;
    p=x<y?x:y;
    q=p<z?p:z;
    return(q);
}



//扩展以及改进
//输入10个数，输出其中最大的数

int main()
{
    int max,n[10];
    int i;
    max=1;  //max=输入的第一个数
            //代码量虽然减少了，但自由度不高，即对普通用户不是很好用，改的代码量相对较多.
    for(i=0;i<10;i++){
        scanf("%d",&n[i]);
        if(max<n[i]) max=n[i];
    }
    printf("max=%d",max);
    return 0;
}



//改进版

int main()
{
    int max,n[10];
    int i;
    for(i=0;i<10;i++){
        scanf("%d",&n[i]);
    }
    max=n[0];   //这里直接接收输入的第一个数
    for(i=0;i<10;i++){
        if(max<n[i]) max=n[i];
    }
    printf("%d\n", max);
    return 0;
}

//总结:代码会随着学习的累积而不断优化，优质代码的写成也不是一朝一夕，多思考多总结，做代码的设计者，而不只是搬运工！





