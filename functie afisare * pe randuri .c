//program afisare * pe randuri, cu functie
//in functie de valoarea din a[]

#include <stdio.h>

void afisare(int n, int a[]){
    int i,j;
    for (i=0;i<n;i++){
        if (a[i]>=0){
            for (j=0;j<a[i];j++)
                printf("* ");
        }
        printf("\n");
    }
}
int main(){
    int i,n,a[10];
    printf("n = ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    afisare(n, a);
}
