#include<stdio.h>
int first_pos(int a[],int n,int x){
    int i;
    for (i=0;i<n;i++){
        if (a[i]==x) return i;
    }
    return -1;
}
int main(){
    int n,i,check,cnt=0;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    for (i=0;i<n;i++){
        check=first_pos(a,n,a[i]);
        if (check==i){
            printf("%d ",a[i]);
            cnt++;
        }
    }
    printf("\n%d",cnt);
    return 0;
}
