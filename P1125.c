#include<stdio.h>
#include<string.h>
int main(){
    int n,maxn,minn,d;
    char s[100];
    int c[26]={0};
    scanf("%s",s);
    n=strlen(s);
    for (int i=0;i<n;i++){
        c[s[i]-'a']++;
    }
    maxn=0;
    minn=n;
    for (int j=0;j<26;j++){
        if (c[j] == 0) continue;        
        if (c[j] > maxn) maxn = c[j];
        if (c[j] < minn) minn = c[j];
    }
    d=maxn-minn;
    int isprime=1;
    for (int i=2;i<=d/i;i++){
        if (d%i==0){
            isprime=0;
            break;
        }
    }
    if (isprime&&d>=2){
        printf("Lucky Word\n");
        printf("%d",d);
    }else {
        printf("No Answer\n");
        printf("0");
    }
        
}