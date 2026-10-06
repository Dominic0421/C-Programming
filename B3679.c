#include<stdio.h>
#include<math.h>
int main(){
    int i,n,k,T,x,y,cnt=0;
    scanf("%d %d %d",&n,&k,&T);
    int x1[n],x2[k],x3[T],y1[n],y2[k],y3[T];
    for (i=0;i<n;i++){
        scanf("%d %d",&x1[i],&y1[i]);
    }
    for (i=0;i<k;i++){
        scanf("%d %d",&x2[i],&y2[i]);
    }
    for (i=0;i<T;i++){
        scanf("%d %d",&x3[i],&y3[i]);
    }
    double d;
    for (i=0;i<T;i++){
        double max=0;
        for (int j=0;j<n;j++){
            d=sqrt(pow((x1[j]-x3[i]),2)+pow((y1[j]-y3[i]),2));
            if (d>max) {x=x1[j];y=y1[j];max=d;}
        }
        for (int j=0;j<k;j++){
            if (x==x2[j]&&y==y2[j]) {cnt++;break;}
        }
    }
    printf("%d",cnt);
    return 0;
}