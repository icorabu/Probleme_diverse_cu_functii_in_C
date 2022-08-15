//suma primelor n numere naturale
// suma(n) = n + suma(n-1)
#include <stdio.h>
int suma(int n){
    int s;
    if (n == 0)
        s = 0;
    else
        s = n + suma(n-1);
    return s;
}
int main(){
    int n;
    printf("n = ");
    scanf("%d",&n);
    printf("Suma primelor %d numere este %d.\n",n,suma(n));
    return 0;
}
