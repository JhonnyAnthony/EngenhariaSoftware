#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n=3;
    int *n2;
    printf("N = %p = %i = %li bytes\n",&n,n,sizeof(n));
    n=5;
    n2 = &n;
    printf("N = %p = %i = %li bytes\n",&n,n,sizeof(n));
    printf("N2 = %p = %i = %li bytes\n",n2,*n2,sizeof(n2));
    *n2=6;
    printf("N = %p = %i = %li bytes\n",&n,n,sizeof(n));
    printf("N2 = %p = %i = %li bytes\n",n2,*n2,sizeof(n2));
    int n3 =  3;
    *n2 =n3;
    printf("N = %p = %i = %li bytes\n",&n,n,sizeof(n));
    printf("N2 = %p = %i = %li bytes\n",n2,*n2,sizeof(n2));
    printf("N3 = %p = %i = %li bytes\n",&n3,n3,sizeof(n3));
    return 0;
}