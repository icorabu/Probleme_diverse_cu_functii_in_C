//cu functie recursiva
//combinari de n luate cate k
//Cnk = C(n-1)k + C(n-1)(k-1)
#include <stdio.h>
int comb(int n, int k){
    if ((k == 0) || (k == n))
        return 1;
    else
        return comb(n-1,k) + comb(n-1,k-1);
}
int main(){
    int n,k;
    printf("n = ");scanf("%d",&n);
    printf("k = ");scanf("%d",&k);
    printf("Comb(%d,%d) = %d;\n",n,k,comb(n,k));
    return 0;
}
