//��������һ������������С�����˳�����

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
/*ͻȻ������У���������ݱ��������Ⱥ�˳��ģ������������Ǹ����ֿ�ʼ��
�ֱ������ǰһλ�Ƚϣ���С�Ļ��ͺ�ǰһλ��������֮�򲻻������Ϳ��Եõ�
һ�а���С�������е���*/
    printf("\n");
    //һ��Ƕ��ѭ��
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
  ��ʵ������������һ���ģ�������һλ�����ĺ�һλ�Ƚϣ�
  �ϴ�Ļ����һλ��������֮�򲻱䣬ͬ�����ԴﵽĿ�ġ�
*/
