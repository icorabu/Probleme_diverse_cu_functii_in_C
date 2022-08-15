//n factorial cu recursivitate

#include <stdio.h>

int factorial(int n){
    int p; //produsul factorial
    if ((n==0) || (n==1))
        p = 1;
    else
        p = n*factorial(n-1);
    return p;
}
        
int main(){
    int n;
    printf ("n = ");
    scanf("%d",&n);
    printf("%d! = %d\n",n,factorial(n));
    
    return 0;
    }
