//判断某一年是否为闰年
//提示:(1)能被4整除，但不能被100整除的年份都是闰年;(2)能被400整除的年份是闰年;    不符合这两个条件的年份不是闰年
//思路:剔除法，从400开始——>100——>4
#include<stdio.h>
int main()
{
    int year;
    printf("请输入年份:\n");
    scanf("%d",&year);
    if(year%400==0){
            printf("%d是闰年",year);
    }
    else if(year%100==0) {
            printf("%d不是闰年",year);
    }
    else if(year%4==0) {
            printf("%d是闰年",year);
    }
    else
        printf("%d不是闰年",year);
}


//(寮曞叆甯冨皵绫诲瀷)鐗�
int main()
{
    int year,leap;
    printf("Enter year:");
    scanf("%d",&year);
    if(year%400==0||year%4==0&&year%100!=0)
        leap=1;
    else
        leap=0;
    if(leap)
        printf("%d is ",year);
    else
        printf("%d isn't ",year);
    printf("a leap year.\n");
    return 0;
}


//优化版

int main()
{
    printf("请输入一个年份:\n");
    int year;
    scanf("%d",&year);
    if(year%4==0&&year%100!=0||year%400==0){
        printf("%d是闰年",year);
    }
    else{
        printf("%d不是闰年",year);
    }
}
