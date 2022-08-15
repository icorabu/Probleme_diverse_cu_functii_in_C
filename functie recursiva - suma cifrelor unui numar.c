//suma cifrelor unui numar - cu functie recursiva
// suma = 0 cand n = 0
// suma = n%10 + suma(n/10) ....
// in loc de n/10 se poate trece n-n%10
#include <stdio.h>
int suma(int n){
    int s;
    if (n == 0)
        s = 0;
    else
        s = n%10 + suma(n/10);
    return s;
}
int main(){
    int n;
    printf("n = ");
    scanf("%d",&n);
    printf("Suma cifrelor lui %d este %d.\n", n, suma(n));
    return 0;
}
