//统计输入字母个数
#include<stdio.h>
void main()
{
    printf("Enter english content:\n");
    char *p,a[80];     //区分char *p和char p[]的不同意义,*p是一个指向数组地址的指针
    int i,n=0;
    gets(a);
    for(p=a;*p!='\0';p++){
        if(*p>='a'&&*p<='z'||*p>='A'&&*p<='Z')
            n++;
    }
    printf("%d\n",n);
}
