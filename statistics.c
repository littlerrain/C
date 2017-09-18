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


//统计输入数字位数
#include<stdio.h>
int main()
{
    count_num();
}
int count_num()
{
    printf("Enter num:\n");
    int m,n=0;    //int型数据，最大只能输入10位数，超过则出错
    scanf("%d",&m);
    if(m>10^9){
        printf("超出输入可识别范围！");
        return 0;
    }
    while(m)
    {
        n++;
        m=m/10;
    }
    printf("%d",n);
}
