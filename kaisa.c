//��������

#include<stdio.h>
#include<string.h>
int main()
{
    //kaisa();
    ultimate();
    //kaisa_2();
}
//�������������
int kaisa()
{
    char str[]="abcdefghij";
    int i,s;
    char c;
    for(i=0;str[i];i++){
        //printf("%c\n",str[i]);    �������
        c=str[i];
        s=(int)c+4;     //ǿ��ת�����ͣ�������Կ�����ĸλ��λ��
        printf("%c",s);     //���ַ���ʽ���
    }
}
//���������ռ���
int ultimate()
{
    int i,j,k,f=1;
    char s,n[100];
    printf("Please input chars here:\n");
    gets(n);
    printf("----------------------\n");
    for(j=1;j<=26;j++){
            for(i=0;i<strlen(n);i++){       //����strlen������ͳ�������ַ����ĳ���
                   if(n[i]>='A'&&n[i]<='Z'){
                       n[i]=((n[i]-'A')+1)%26+'A';  //26����ĸѭ��λ��
                   }
                   else if(n[i]>='a'&&n[i]<='z'){
                       n[i]=((n[i]-'a')+1)%26+'a';
                   }
            }
            printf("����%2dλ:",f);
            f++;
            for(k=0;k<strlen(n);k++){
                   printf("%c",n[k]);
            }
            printf("\n");
    }
    printf("----------------------\n");
}
/*
д����˼·һ���û��Ҫһ���ʵ��һ��������������ͨ���ܶ෽��������
һ�������в�ͨ��ʱ�򣬻����Ƕ�˼�������������벻����Ч����������δ���
�ǻ����Ҳ���ʱ��Ÿ㶨��,���Ƽ򵥣���д��ʱ��Ҫ˼���ܶණ��������for��
Ƕ��ѭ��һ��Ҫ�����ѭ������,д��ʱ����һ��������˼·�����������һЩ��
*/

//��һ���汾(�����Լ�����λ����,���÷�Χ��С)
int kaisa_2()
{
    char m[100],n[100];
    int i,j,k,t,move;
    printf("Please input chars here:\n");
    gets(m);
    while(1)    //ѭ��ִ�����³���
    {
        printf("input a num in(1~25):");
        scanf("%d",&move);   // %*c:������ʱ����һ����������ֹ������
        for(i=0; i<strlen(m); i++)
        {
            if(m[i] >= 'A' && m[i] <= 'Z')
            {
                m[i] = ((m[i]-'A')+1)%26+'A';
            }
            else if(m[i] >= 'a' && m[i] <= 'z')
            {
                m[i] = ((m[i]-'a')+1)%26+'a';
            }
        }
        for(j=0;j<strlen(m);j++){
            printf("%c",m[j]);
        }
        printf("\n");
        //gets(m);
      /*�����gets(m)�и�����:�����printf("Please input chars here:\n"); gets(m);
      �����д���д��while���d�Ŀ�ͷ���֣�Ȼ�����������gets(m);���д��룬���Բ���
      �����µ��ַ���λ��λ��������Ҫ�Ŀ�����һ��.*/
    }
    return 0;
}
