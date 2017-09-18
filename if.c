//任意输入一组整数，按从小到大的顺序输出

#include<stdio.h>
int main()
{
    smax();
}
int smax()
{
    int x,t,i,j,k,l;
    printf("How many numbers you want to input:");
    scanf("%d",&x);
    int n[x];
    printf("Please input:");
    for(i=0;i<x;i++){
        scanf("%d",&n[i]);
        printf("%d ",n[i]);
    }
/*突然来了灵感，输入的数据本身是有先后顺序的，从最后输入的那个数字开始，
分别和它的前一位比较，较小的话就和前一位互换，反之则不换，最后就可以得到
一列按从小到大排列的数*/
    printf("\n");
    //一个嵌套循环
    for(j=x-1;j>=0;j--){
        for(k=j-1;k>=0;k--){
            if(n[j]<n[k]){
                t=n[j];
                n[j]=n[k];
                n[k]=t;
            }
        }
    }
    for(l=0;l<x;l++){
        printf("%d ",n[l]);
    }
}
/*
  其实反过来道理是一样的，即将第一位和它的后一位比较，
  较大的话与后一位互换，反之则不变，同样可以达到目的。
*/
