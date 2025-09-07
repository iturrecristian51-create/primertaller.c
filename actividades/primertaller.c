#include <stdio.h>

void llenararray(int a[], int n){
    for(int i=0; i< n; i++) {
        int num;
        do {
            printf(" ingresarnumero (debe ser positivo )[%d]:",i +1);
            scanf("%d", &num);
                 
    
    while (getchar() != '\n'); 

            if(num<= 0){
                printf("debe ser positivo intenta denuevo\n ");
            }

        } while (num <= 0);
        {
            a[i] = num;
        }
        
    }

}




int main(void) {
    int arreglo[10];
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
    while (getchar() != '\n'); 

    
       switch (opcion)
       {
       case 1:
        printf("llenando lista\n");
        llenararray(arreglo, 10);
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
        
        
        
        

        
        
    } while (opcion != 5); 

    return 0;
}
