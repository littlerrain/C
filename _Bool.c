//���ͷ�_Bool
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
    _Bool a,b;      //ֱ���������ͷ�_Bool
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
    bool a,b;   //����д�������ڿ�ͷ����<stdbool.h>������
    a=score>=60;
    b=score<=69;
    if(a==true&&b==true)
        printf("level:C");
}
