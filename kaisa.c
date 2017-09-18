//凯撒密码

#include<stdio.h>
#include<string.h>
int main()
{
    //kaisa();
    ultimate();
    //kaisa_2();
}
//凯撒密码初级版
int kaisa()
{
    char str[]="abcdefghij";
    int i,s;
    char c;
    for(i=0;str[i];i++){
        //printf("%c\n",str[i]);    测试输出
        c=str[i];
        s=(int)c+4;     //强制转换类型，这里可以控制字母位移位数
        printf("%c",s);     //以字符形式输出
    }
}
//凯撒密码终极版
int ultimate()
{
    int i,j,k,f=1;
    char s,n[100];
    printf("Please input chars here:\n");
    gets(n);
    printf("----------------------\n");
    for(j=1;j<=26;j++){
            for(i=0;i<strlen(n);i++){       //引入strlen函数，统计输入字符串的长度
                   if(n[i]>='A'&&n[i]<='Z'){
                       n[i]=((n[i]-'A')+1)%26+'A';  //26个字母循环位移
                   }
                   else if(n[i]>='a'&&n[i]<='z'){
                       n[i]=((n[i]-'a')+1)%26+'a';
                   }
            }
            printf("右移%2d位:",f);
            f++;
            for(k=0;k<strlen(n);k++){
                   printf("%c",n[k]);
            }
            printf("\n");
    }
    printf("----------------------\n");
}
/*
写代码思路一定得活，不要一根筋，实现一个功能往往可以通过很多方法，或者
一个方法行不通的时候，换个角度思考往往会有意想不到的效果，上面这段代码
是花了我不少时间才搞定的,看似简单，但写的时候要思考很多东西，比如for的
嵌套循环一定要搞清楚循环规则,写的时候有一个清晰的思路在里面会容易一些。
*/

//另一个版本(可以自己控制位移数,适用范围较小)
int kaisa_2()
{
    char m[100],n[100];
    int i,j,k,t,move;
    printf("Please input chars here:\n");
    gets(m);
    while(1)    //循环执行以下程序
    {
        printf("input a num in(1~25):");
        scanf("%d",&move);   // %*c:在输入时跳过一个变量，防止误输入
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
      /*这里的gets(m)有个作用:如果把printf("Please input chars here:\n"); gets(m);
      这两行代码写入while语句d的开头部分，然后在这里加上gets(m);这行代码，可以不断
      输入新的字符和位移位数，有需要的可以试一下.*/
    }
    return 0;
}
