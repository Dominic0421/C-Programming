#include<stdio.h>
#include<ctype.h>
#include<string.h>
void to_lower(char *s){
    while (*s){
        *s=(char)tolower((unsigned char)*s);
        s++;
    }
}
int find(char *a,char *b){
    while (*b){
        if (*a++==*b++) continue;
        return -1;
    }
    return 0;
}
int main(){
    char s1[130],s2[130];
    int len1,len2;
    fgets(s1,130,stdin);
    len1=(int)strlen(s1);
    if (s1[len1-1]=='\n') s1[len1-1]='\0';
    fgets(s2,130,stdin);
    len2=(int)strlen(s2);
    if (s2[len2-1]=='\n') s2[len2-1]='\0';
    to_lower(s1);
    to_lower(s2);
    int cnt=0,check,pos=-1;
    for (int i=0;i<=len1-len2;i++){
        check=find(s1+i,s2);
        if (check==0){
            if (pos==-1) pos=i;
            cnt++;
        }
    }
    printf("%d %d",cnt,pos);
    return 0;
}
