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
