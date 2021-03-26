#include <stdio.h>

int cuadradode(int num);
void voidcuadrado(int num);
void mostrarDirecc(int var);
void invertir(int *a ,int *b);
void orden(int *a, int *b);
int main(){
    
    int resp=1;
    int v1;
    int num1;
    int num2;

    int resultado;
    printf("Ingrese un numero:");
    scanf("%d",&v1);
    fflush(stdin);
    //a)
    resultado=cuadradode(v1);
    printf("\nCuadrado del numero:%d\n",resultado);

    voidcuadrado(v1);
    //c)
    printf("Direccion Orignal V1==%p\n",&v1);
    mostrarDirecc(v1);
    
  
    while (resp=1)
    {
    
    //d)
    printf("Ingrese a:");
    scanf("%d",&num1);
    fflush(stdin);
    printf("\nIngrese b:");
    scanf("%d",&num2);
    fflush(stdin);


    printf("----------Invetir numeros----------\n");
    invertir(&num1,&num2);
    printf("a:%d\n",num1);
    printf("b:%d\n",num2);


    //e)
    printf("\n----------Numeros Ordenados----------\n");
    
    orden(&num1,&num2);


    //f)
    printf("\n¿Desea ingresar otro par de numeros? Ingrese su respuesta Si=[1] No=[2]");
    scanf("%d",&resp);
    fflush(stdin);
    }
    
    
    
    getchar();
    return 0;
}

int cuadradode(int num){
    
    int resul;
    resul = num*num;

    return(resul);
}

void voidcuadrado(int num){

    int resul;
    resul = num*num;

    printf("Void resultado=%d\n",resul);
}
void mostrarDirecc(int var){
    //La DIRECCION de la variable es diferente a la que esta en el main, ya que a la funcion se le envia una copia de la variable que se guarda en otra direccion de memoria. Esto pasa para que no se pierda/edite la varible original, si se quisiese ver la direccion original, se podria enviar el puntero a la funcion.

    printf("La direccion de la variable:%p\n",&var);
    printf("Contenido de la variable:%d\n",var);
}
void invertir(int *a ,int *b){
    int temp;

    temp=*b;
    *b=*a;
    *a=temp;
}
void orden(int *a, int *b){
    int temp;
    if (*a>*b)
    {
        temp=*a;
        *a=*b;
        *b=temp;
    }
    printf("menor a:%d\nmayor b:%d",*a,*b);
    
}