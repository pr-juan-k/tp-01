#include <stdio.h>

int main(){
    printf("Hola mundo");
    int num = 1;
    int *punt;
    punt = num;
    printf("\nEl contenido del puntero:%d",*punt);
    printf("\nLa direccion de memoria que guarda el puntero:%p",punt);
    printf("\nLa direccion de memoria de la variable:%d",&num);
    printf("\nLa direccion de memoria del puntero:%d",&punt);
    printf("\nTamanio de memoria de la variable:%d",sizeof(num));
    return 0;
}