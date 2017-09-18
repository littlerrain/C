//功能:
//1、输入等级，查询对应分数范围
//2、输入分数，查询等级

#include<stdio.h>
#include<math.h>
int main()
{
    //l_score();
    s_level();
}
int l_score()
{
    char level;
    printf("Enter level level:");
    level=getchar();
    switch(level)
    {
        case 'A':printf("90~100");break;
        case 'B':printf("80~89");break;
        case 'C':printf("70~79");break;
        case 'D':printf("60~69");break;
        case 'E':printf("0~<60");break;
        default:printf("Enter Error!");

    }
}
int s_level()
{
    int score;
    printf("Enter your score:");
    scanf("%d",&score);
    score<0||score>100?printf("it's over the limit!"):score>=90&&score<=100?printf("A"):score>=80&&score<=89?printf("B"):score>=70&&score<=79?printf("C"):score>=60&&score<69?printf("D"):printf("E");
    //直接用三元运算符写出来简洁一些，用if语句会比较麻烦
}
