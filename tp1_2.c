#include <stdio.h>

float R_elCuadradoDeUnNumero(int num);
void elCuadradoDeUnNumero(int num);
void infoContenido(int num);
void invertir(int *num1,int *num2);
void ordenado(int *num1,int *num2);

int main(){
    R_elCuadradoDeUnNumero(21);
    elCuadradoDeUnNumero(25);
    infoContenido(9);
    int num1 = 20,num2 = 42;
    int *pun1 = &num1;
    int *pun2 = &num2;
    printf("\nValor inicial num1: %d y num2: %d",num1,num2);
    invertir(pun1,pun2);
    printf("\nValor invertidos num1: %d y num2: %d",num1,num2);
    ordenado(pun1,pun2);
    printf("\nValor ordenados num1: %d y num2: %d",num1,num2);
    puts("------");


    return 0;
}
float R_elCuadradoDeUnNumero(int num){
    return (num * 2);
}
void elCuadradoDeUnNumero(int num){
    float res;
    res = num *2;
    printf("\nEl cuadrado es:%.1f",res);
}
void infoContenido(int num){
    printf("\nEl numero:%d",num);
    printf("\nLa direccion de memoria:%d",&num);
}
void invertir(int *num1,int *num2){
    int num;
    num = *num1;
    *num1 = *num2;
    *num2 = num;
}
void ordenado(int *num1,int *num2){
    int num;
    if (*num1 > *num2 )
    {
        num = *num1;
        *num1 = *num2;
        *num2 = num;
    }
    
}
