//�ַ����ݵ��������

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
    printf("ԭ��������ַ����ݵ����������");
    //return(a,b,c);
}
//�Ľ���
int inout()
{
    putchar(getchar());
    putchar(getchar());
    putchar(getchar());
    putchar('\n');
    return 0;
}



//�Ż��棬������չΪ���������������ַ� ��

int io_anychar()
{
    //int i,n[i];   ���ֶ�������ķ�ʽ�Ǵ����,��Ϊi��û��ֵ�����泤ע�Ͳ����иĽ���
    int i,n[10];    //����һ������,Ԫ�ظ���������������;������ζ�������һ��Ҫ��ϸ�˽����֪ʶ�������׳���.
    int x;
    for(i=0;i<=x;i++){
        n[i]=getchar();     //�Ӽ��������ÿ���ַ��洢�������Ԫ����
    }
    for(i=0;i<=x;i++){
    putchar(n[i]);
    }
}
//ע��:�����ַ�����ʱ��Ҫ�������룬�������������������



//�Ľ�
int io_anychar_1()
{
    int i,x;
    printf("How many chars you want input:");
    scanf("%d",&x);
    int n[x];
    printf("Please input chars:\n");
    for(i=0;i<=x;i++){
        n[i]=getchar();     //�Ӽ��������ÿ���ַ��洢�������Ԫ����
    }
    for(i=0;i<=x;i++){
    putchar(n[i]);
    }
}


//�ռ��ڿƼ�O(��_��)O����~
int io_anychar_2()
{
    printf("Enter chars:\n");
    for( ;(c=getchar())!='\n';)
        printf("%c",c);
}
