//输入一个数，判断是几位数，并且输出每一位
#include<stdio.h>
#include<math.h>
//有个bug未解决，当输入类似于1(2,3...)000、1(2,3...)000000、12(3,4,5...)00000的数时输出结果异常
//以下两种方法在输入数字位数超出10位的情况下都会异常
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
    printf("共输入%d\n",n);
    printf("从左往右——>\n");
    i=1;
    for(num=n-1;num>0;num--)
    {
        n1=(int)(m1/(pow(10,num)));
        m1=(int)(m1-(n1*pow(10,num))+1);
        printf("第%d位是:",i);
        printf("%d\n",n1);
        i++;
    }
    printf("第%d位是:",i);
    printf("%d",gewei);
}


//输出写入的每个数字的另一种方法
//先将数字转换为字符串，然后遍历字符串
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);//输入n值。
    output(n);//输出各个位。
    return 0;
}
void output(int n)
{
    char a[11];
    int i;
    sprintf(a, "%d", n);//转为字符串。
    for(i = 0; a[i]; i++)//遍历字符串。
        printf("%c\n", a[i]);//输出各个位值。
}
