#include<stdio.h>

int main()
{
    int a,b,sum;
    a=123;
    b=456;
    sum=a+b;
    printf("sum=%d\n",sum);
    return 0;
}



// ���װ�

int main()
{
    int a,b,sum;
    scanf("%d+%d+%d",&a,&b,&sum);   //�Ӻ�Ϊ�������������
    sum=a+b;
    printf("sum=%d\n",sum);
    return 0;
}


//�Ż�һ��
int main()
{
    int a,b;
    scanf("%d+%d",&a,&b);
    printf("a+b=",a+b);
    return 0;
}

