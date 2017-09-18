//ÅĞ¶ÏÄ³Ò»ÄêÊÇ·ñÎªÈòÄê
//ÌáÊ¾:(1)ÄÜ±»4Õû³ı£¬µ«²»ÄÜ±»100Õû³ıµÄÄê·İ¶¼ÊÇÈòÄê;(2)ÄÜ±»400Õû³ıµÄÄê·İÊÇÈòÄê;    ²»·ûºÏÕâÁ½¸öÌõ¼şµÄÄê·İ²»ÊÇÈòÄê
//Ë¼Â·:ÌŞ³ı·¨£¬´Ó400¿ªÊ¼¡ª¡ª>100¡ª¡ª>4
#include<stdio.h>
int main()
{
    int year;
    printf("ÇëÊäÈëÄê·İ:\n");
    scanf("%d",&year);
    if(year%400==0){
            printf("%dÊÇÈòÄê",year);
    }
    else if(year%100==0) {
            printf("%d²»ÊÇÈòÄê",year);
    }
    else if(year%4==0) {
            printf("%dÊÇÈòÄê",year);
    }
    else
        printf("%d²»ÊÇÈòÄê",year);
}


//(å¼•å…¥å¸ƒå°”ç±»å‹)ç‰ˆ
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


//ÓÅ»¯°æ

int main()
{
    printf("ÇëÊäÈëÒ»¸öÄê·İ:\n");
    int year;
    scanf("%d",&year);
    if(year%4==0&&year%100!=0||year%400==0){
        printf("%dÊÇÈòÄê",year);
    }
    else{
        printf("%d²»ÊÇÈòÄê",year);
    }
}
