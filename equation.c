//求方程ax²+bx+c=0的根。
#include<stdio.h>
#include<math.h>
int main()
{
    equation();
}
int equation()
{
    double a,b,c,disc,p,q,x1,x2;
    printf("Enter a b c(eg:1 4 2):\n");
    scanf("%lf %lf %lf",&a,&b,&c);    //格式控制字符串决定输入格式
    disc=b*b-4*a*c;     //注意这里的disc一定要写在scanf后面,否则输出结果异常！
    if(a==0){
        printf("Isn't a quadratic equation!\n");
    }
    else if(disc<0) {
        p=-b/(2*a);
        q=sqrt(-disc)/(2*a);    //disc<0,sqrt下的数必须>=0,所以要加-号
        printf("Have two complex roots:\n");
        printf("x1=%8.4f+%6.4fi\nx2=%8.4f-%6.4fi",p,q,p,q);
    }
    else if(disc==0) {
        printf("Have two equal real roots:\n");
        x1=(-b+sqrt(disc))/(2.0*a);    //如果对运算符的优先级不是很熟练的话，建议一定要善于运用()
        printf("x1=x2=%5.2f\n",x1);    //%5.2f:输出的数据占5列,小数占2列
    }
    else {
        printf("Have two distinct real roots:\n");
        x1=(-b+sqrt(disc))/(2.00*a);
        x2=(-b-sqrt(disc))/(2.00*a);
        printf("x1=%3.2f\nx2=%3.2f\n",x1,x2);   //建议使用%3.2f这种输出格式①可以根据实际需要输出小数位数;②输出数据整齐美观.
    }
}





