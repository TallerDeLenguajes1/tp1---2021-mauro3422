#include <stdio.h>

int main(){
    //Declaro variable
    int variable1=32;
    //Declaro el puntero y que apunte a la direccion de la V1
    int *p1=&variable1;
    
    //a
    printf("Contenido del puntero:%d\n",*p1);

    //b
    printf("La direccion de memoria almacenada por el puntero:%p\n",p1);

    //c
    printf("La direccion de memoria de la variable:%p\n",&variable1);

    //d
    printf("La direccion de memoria del puntero:%p\n",&p1);

    //e
    printf("Tamaño  de memoria utilizado por la V1:%d bytes\n",(sizeof(variable1)));

    getchar();
    return 0;
}