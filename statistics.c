//ͳ��������ĸ����

#include<stdio.h>
void main()
{
    printf("Enter english content:\n");
    char *p,a[80];     //����char *p��char p[]�Ĳ�ͬ����,*p��һ��ָ�������ַ��ָ��
    int i,n=0;
    gets(a);
    for(p=a;*p!='\0';p++){
        if(*p>='a'&&*p<='z'||*p>='A'&&*p<='Z')
            n++;
    }
    printf("%d\n",n);
}


//ͳ����������λ��
#include<stdio.h>
int main()
{
    count_num();
}
int count_num()
{
    printf("Enter num:\n");
    int m,n=0;    //int�����ݣ����ֻ������10λ�������������
    scanf("%d",&m);
    if(m>10^9){
        printf("���������ʶ��Χ��");
        return 0;
    }
    while(m)
    {
        n++;
        m=m/10;
    }
    printf("%d",n);
}
