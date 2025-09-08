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



void mostrararray(int a[],int n){
    for (int i = 0; i < n; i++){
    printf("%d\n", a[i]);
    }
printf("\n");
}

void ordenaracendente(int a[], int n){

    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-i-1; j++)
        {
            if (a[j]>a[j+1]){
            int temp=a[j];
            a[j]= a[j+1];
            a[j+1]=temp;
            
                
            
            }
        }
        
    }
    
     printf("Lista ordenada de forma ascendente.\n");   
    
    
}

void ordenardecendente(int a[], int n){
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-i-1; j++)
        {
            if (a[j]<a[j+1]){
            int temp=a[j];
            a[j]= a[j+1];
            a[j+1]=temp;
            
                
            
            }
        }
        
    }
    printf("lista ordenada de forma decendente\n");
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
        mostrararray(arreglo,10);
        break;

        case 3:
        printf("ordenando acendente\n");
        ordenaracendente(arreglo,10);
        mostrararray(arreglo,10);
        break;
       
        case 4:
        printf("ordenando decendente\n");
        ordenardecendente(arreglo,10);
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
