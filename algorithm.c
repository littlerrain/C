//�㷨��ϰ
#include<stdio.h>
//1~5�ĳ˻�

int main()
{
    int product=1;
    int m;
    for(m=1;m<6;m++)    //ִ��˳��:m=1;m<6;product=product*m;m++
    {
        product=product*m;
    }
    printf("product=%d",product);   //����������䲻�ܷ���ѭ�������
}



//��ǿ�棬������1������һ�����ĳ˻�

int main()
{
    printf("������һ������:\n");
    int product=1;
    int m,n;
    scanf("%d",&m);
    for(n=1;n<m+1;n++)
    {
        product=product*n;
    }
    printf("1��%d�ĳ˻�Ϊ:%d",m,product);
}


//��1-1/2+1/3-1/4+...+1/99-1/100.

int main()
{
    int mole,deno;  //������ӷ�ĸ
    mole=1;
    double sum=0;   //��������������
    for(deno=1;deno<=100;deno++){
        sum+=mole*1.0/deno;   //<=>sum=sum+mole*1.0/i;ע���������ֵĸ�ʽ
        mole=-mole;
    }
    printf("sum=%lf",sum);  //%lf double�����������ʽ��%f float�����������ʽ
}



//�жϸ��������Ƿ�Ϊ����

#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,i;
    printf("Enter num:");
    scanf("%d",&n);
    m=sqrt(n);
    for(i=2;i<=m;i++){
        if(n%i==0) break;
    }
    if(i<=m) printf("Not a prime number!");
    else printf("A prime number");
}



//��չ:�жϸ�����һ�����е�����������ӡ����.
