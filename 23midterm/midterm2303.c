#include<stdio.h>
#include<string.h>

void count(char *x){
    int n=strlen(x);
    for (int i=0;i<n;){
        int j=i;
        while (j<n&&x[j]==x[i]) j++;
        int cnt=j-i;
        printf("%c",x[i]);
        if (cnt-1) printf("%d",cnt);
        i=j;
    }
    printf("\n");
}

void swap(char *a,char *b){
    char t;
    t=*a;
    *a=*b;
    *b=t;
}

void sort(char *a){
    int n=strlen(a);
    for (int i=0;i<n-1;i++){
        int s=0;
        for (int j=0;j<n-i-1;j++){
            if (*(a+j+1)<*(a+j)){
                swap (a+j,a+j+1);
                s=1;
            }
        }
        if (!s) break;
    }
}

int main(){
    char m[128];
    scanf("%s",m);
    count(m);
    sort(m);
    count(m);
    return 0;
}