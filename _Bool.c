//类型符_Bool
#include<stdio.h>
#include<stdbool.h>
int main()
{
    //_bool();
    another();
}
int _bool()
{
    float score;
    printf("Please Enter your score:");
    scanf("%f",&score);
    _Bool a,b;      //直接引用类型符_Bool
    a=score>=60;
    b=score<=69;
    if(a&&b)
        printf("level:C");
}
int another()
{
    float score;
    printf("Please Enter your score:");
    scanf("%f",&score);
    bool a,b;   //这种写法必须在开头调用<stdbool.h>函数库
    a=score>=60;
    b=score<=69;
    if(a==true&&b==true)
        printf("level:C");
}
