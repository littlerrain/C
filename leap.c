//�ж�ĳһ���Ƿ�Ϊ����
//��ʾ:(1)�ܱ�4�����������ܱ�100��������ݶ�������;(2)�ܱ�400���������������;    ��������������������ݲ�������
//˼·:�޳�������400��ʼ����>100����>4
#include<stdio.h>
int main()
{
    int year;
    printf("���������:\n");
    scanf("%d",&year);
    if(year%400==0){
            printf("%d������",year);
    }
    else if(year%100==0) {
            printf("%d��������",year);
    }
    else if(year%4==0) {
            printf("%d������",year);
    }
    else
        printf("%d��������",year);
}


//(引入布尔类型)版
int main()
{
    int year,leap;
    printf("Enter year:");
    scanf("%d",&year);
    if(year%400==0||year%4==0&&year%100!=0)
        leap=1;
    else
        leap=0;
    if(leap)
        printf("%d is ",year);
    else
        printf("%d isn't ",year);
    printf("a leap year.\n");
    return 0;
}


//�Ż���

int main()
{
    printf("������һ�����:\n");
    int year;
    scanf("%d",&year);
    if(year%4==0&&year%100!=0||year%400==0){
        printf("%d������",year);
    }
    else{
        printf("%d��������",year);
    }
}
