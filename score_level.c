//����:
//1������ȼ�����ѯ��Ӧ������Χ
//2�������������ѯ�ȼ�

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
    //ֱ������Ԫ�����д�������һЩ����if����Ƚ��鷳
}
