//�Ƚ�����������С��������ϴ���
#include<stdio.h>
//�Լ�д�ģ���Ȼ��ʵ��ָ�����ܣ���������ʹ�ô˷��������д�ĳ���Ƚϸ��ӵ������ʹ�ô˷��������.

int main()
{
    int a,b,max;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        max=a;
        printf("max=%d\n",max);
    }
    else if(a==b)
    {
        printf("%d=%d",a,b);    //֮ǰ�������ִ�����뷨 ("%d",a,"=","%d",b)
    }
    else
    {
        max=b;
        printf("max=%d\n",max);
    }
}



//�ض���һ��������ʹ����бȽ���������С�Ĺ��ܣ�����ʹ�ô˷���

int main()
{
    int max(int x,int y);
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=max(a,b);
    printf("max=%d\n",c);
    return 0;
}
int max(int x,int y)    //����max����
{
    int z;
    //if(x>y) z=x;
    //else z=y;
    //��������������ּ�д��ʽ
    z=(x>y)?x:y;
    return(z);
}



//�Ƚ������ַ���С

int main()
{
    int max;
    char c,d;
    scanf("%c %c",&c,&d);
    c=(int)c;   //ת����������
    d=(int)d;
    if(c>d)
    {
        max=c;
        printf("max=%d\n",max);
    }
    else if(c<d)
    {
        max=d;
        printf("max=%d\n",max);
    }
    else
    {
        return -1;
    }
}



//�Ƚ�����������С���������������Сֵ

int main()
{
    int max(int x,int y,int z);
    int min(int x,int y,int z);
    int a,b,c,d,f;
    scanf("%d %d %d",&a,&b,&c);
    d=max(a,b,c);
    f=min(a,b,c);
    printf("max=%d\n",d);
    printf("min=%d\n",f);
}
int max(int x,int y,int z)
{
    int p,q;
    if(x>y)
    {
        p=x;
        if(p>z) q=p;
        else q=z;
        return(q);
    }
    else
    {
        p=y;
        if(p>z) q=p;
        else q=z;
        return(q);
    }
}
int min(int x,int y,int z)
{
    int p,q;
    //�˽�����Ŀ(Ԫ)�����֮����Զ����´������Ż������Ѿ��������油����
    if(x<y)
    {
        p=x;
        if(p<z) q=p;
        else q=z;
        return(q);
    }
    else
    {
        p=y;
        if(p<z) q=p;
        else q=z;
        return(q);
    }
}

//������Ĵ��������һЩ�Ż�����һ���ǲ��Ǿ�����ˣ�

int main()
{
    int max(int x,int y,int z);
    int min(int x,int y,int z);
    int a,b,c,d,f;
    scanf("%d %d %d",&a,&b,&c);
    d=max(a,b,c);
    f=min(a,b,c);
    printf("max=%d\n",d);
    printf("min=%d\n",f);
}
int max(int x,int y,int z)
{
    int p,q;
    p=x>y?x:y;
    q=p>z?p:z;
    return(q);
}
int min(int x,int y,int z)
{
    int p,q;
    p=x<y?x:y;
    q=p<z?p:z;
    return(q);
}



//��չ�Լ��Ľ�
//����10�������������������

int main()
{
    int max,n[10];
    int i;
    max=1;  //max=����ĵ�һ����
            //��������Ȼ�����ˣ������ɶȲ��ߣ�������ͨ�û����Ǻܺ��ã��ĵĴ�������Խ϶�.
    for(i=0;i<10;i++){
        scanf("%d",&n[i]);
        if(max<n[i]) max=n[i];
    }
    printf("max=%d",max);
    return 0;
}



//�Ľ���

int main()
{
    int max,n[10];
    int i;
    for(i=0;i<10;i++){
        scanf("%d",&n[i]);
    }
    max=n[0];   //����ֱ�ӽ�������ĵ�һ����
    for(i=0;i<10;i++){
        if(max<n[i]) max=n[i];
    }
    printf("%d\n", max);
    return 0;
}

//�ܽ�:���������ѧϰ���ۻ��������Ż������ʴ����д��Ҳ����һ��һϦ����˼�����ܽᣬ�����������ߣ�����ֻ�ǰ��˹���





