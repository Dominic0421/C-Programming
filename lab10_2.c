#include<stdio.h>
int main(){
    struct Operation{
        char op;
        int quantity;
    };
    int capacity,stock,n;
    scanf("%d %d %d",&capacity,&stock,&n);
    for (int i=0;i<n;i++){
        struct Operation operation;
        scanf(" %c %d",&operation.op,&operation.quantity);
        if (operation.op=='B'){
            if (operation.quantity>stock){
                printf("REJECT %d\n",stock);
            }else{
                stock-=operation.quantity;
                printf("OK %d\n",stock);
            }
        }
        else if (operation.op=='R'){
                if (operation.quantity+stock>capacity){
                     printf("REJECT %d\n",stock);
                }else{
                     stock+=operation.quantity;
                     printf("OK %d\n",stock);
                 }
        }
    }
    return 0;
}