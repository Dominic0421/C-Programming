#include<stdio.h>
int main(){
    int n,d;
    scanf("%d",&n);
    for (int i=n+1;i<1e6;i++){
        int t=i;
        int a[10]={0};
        while (t/10>0){
            d=t%10;
            a[d]++;
            t=t/10;
        }
        a[t]++;
        int isprime=1;
        for (int j=0;j<10;j++){
            if (!(a[j]==j||a[j]==0)) {isprime=0;break;}
        }
        if (isprime==1){
            printf("%d",i);
            break;
        }

    }
}