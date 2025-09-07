#include <stdio.h>

int main(void) {
 int opcion;
    do {
        printf("\n  menu\n");
        printf("1.llenar lista\n");
        printf("2.mostrarlista\n");
        printf("3.ordenar de forma acendente\n");
        printf("4.ordenar de forma decendente\n");
        printf("5.salir\n");
        printf("elige una opcion\n");
        
    scanf("%d", &opcion);
    
       switch (opcion)
       {
       case 1:
        printf("llenando  lista\n");
        break;

        case 2:
        printf("mostrando lista\n");
        break;

        case 3:
        printf("ordenando acendente\n");
        break;
       
        case 4:
        printf("ordenando decendente\n");
        break;

        case 5:
        printf("saliendo delprograma\n");
        break;


       default:
        break;

       } 
        
        
        
        

        
        opcion = 0; 
    } while (opcion != 5); 

    return 0;
}
