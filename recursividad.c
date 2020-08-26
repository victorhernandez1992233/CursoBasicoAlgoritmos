#include<stdio.h>


long result;
int n;

long factorial(int n){
    if (n == 0)
        return 1;
    else
        return(n *factorial (n-1));
}


main(int argc, char const *argv[]){

    printf("ingrese un numero a calcular");
    scanf("%d", &n);

    if(n<0){
        printf("el numero debe ser mayor  a cero");

    }
    else{
        result = factorial(n);
        printf("%d! = %ld\n", n, result);
    }
    
}