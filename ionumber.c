//����һ�������ж��Ǽ�λ�����������ÿһλ
#include<stdio.h>
#include<math.h>
//�и�bugδ�����������������1(2,3...)000��1(2,3...)000000��12(3,4,5...)00000����ʱ�������쳣
//�������ַ�������������λ������10λ������¶����쳣
int main()
{
    out_num();
}
void out_num()
{
    int m,n,i,m1,n1,num,gewei;
    n=0;
    printf("Enter number:\n");
    scanf("%d",&m);
    m1=m;
    gewei=m1%10;
    while(m)
    {
        n++;
        m/=10;
    }
    printf("������%d\n",n);
    printf("�������ҡ���>\n");
    i=1;
    for(num=n-1;num>0;num--)
    {
        n1=(int)(m1/(pow(10,num)));
        m1=(int)(m1-(n1*pow(10,num))+1);
        printf("��%dλ��:",i);
        printf("%d\n",n1);
        i++;
    }
    printf("��%dλ��:",i);
    printf("%d",gewei);
}


//���д���ÿ�����ֵ���һ�ַ���
//�Ƚ�����ת��Ϊ�ַ�����Ȼ������ַ���
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);//����nֵ��
    output(n);//�������λ��
    return 0;
}
void output(int n)
{
    char a[11];
    int i;
    sprintf(a, "%d", n);//תΪ�ַ�����
    for(i = 0; a[i]; i++)//�����ַ�����
        printf("%c\n", a[i]);//�������λֵ��
}
