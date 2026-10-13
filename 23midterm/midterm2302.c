#include<stdio.h>
#include<string.h>

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
    char x[500],num[500],let1[500],let2[500];
    scanf("%s",x);
    int m=strlen(x);
    int a,b,c;
    a=b=c=0;
    for (int k=0;k<m;k++){
        if (x[k]>='0'&&x[k]<='9'){
            num[a++]=x[k];
        }else if (x[k]>='a'&&x[k]<='z'){
            let1[b++]=x[k];
        }else let2[c++]=x[k];
    }
    num[a]=let1[b]=let2[c]='\0';
    sort(num);
    sort(let1);
    sort(let2);
    strcat(num,let1);
    strcat(num,let2);
    for (int d=0;2*d<m;d++){
        printf("%c",num[2*d]);
    }
    if (m%2==0){
        for (int d=0;2*d-1<m&&m-1-2*d>0;d++){
        printf("%c",num[m-1-2*d]);
        }
    }else{
        for (int d=0;2*d-1<m&&m-2-2*d>0;d++){
        printf("%c",num[m-2-2*d]);
        }
    }
    return 0;
}
