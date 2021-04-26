#include <stdio.h>
#include <stdlib.h>

float Dolar = 0.050;
float Euro = 0.042;
float Libra_Esterlina = 0.036;

int main(){

    float cantidad = 0, resultadoConversion = 0;
    int opcion, divisa;

    printf("----------------------------------------------------\n");
    printf("\t\tConvertidor de Divisas\n");
    printf("----------------------------------------------------\n\n");
    printf("Bienvenido usuario, por favor seleccione una opci%cn: \n\n",162);
    printf("1.- Elegir divisa\n2.- Salir\n");
    
    scanf("%d", &opcion);

    do{
        if(opcion != 1){
            printf("Salir\n");
            exit(0);
        }else{
            
            printf("----------------------------------------------------------------------\n");
            printf("\tPor favor, seleccione un tipo de conversi%cn\n",162);
            printf("----------------------------------------------------------------------\n");
            printf("1.- D%clar estadounidense: 1 Peso mexicano es igual a 0.050 d%clares\n",162,162);
            printf("2.- Euro: 1 Peso mexicano es igual a 0.042 Euros\n");
            printf("3.- Libra Esterlina: 1 Peso mexicano es igual a 0.036 libras esterinas\n");
            printf("4.- Salir\n");
            printf("----------------------------------------------------------------------\n");

            scanf("%d", &divisa);

            if (divisa == 4 ){
                printf("Salir");
            }else{
                printf("Ingrese la cantidad en pesos mexicanos a convertir: \n");
                scanf("%f", &cantidad);
            }

            switch (divisa){
                    case 1:
                        resultadoConversion = cantidad * Dolar;
                        printf("\n%0.2f Pesos mexicanos es igual a %0.2f D%clares estadounidenses\n", cantidad, resultadoConversion, 162);
                        break;
                    case 2:
                        resultadoConversion = cantidad * Euro;
                        printf("\n%0.2f Pesos mexicanos es igual a %0.2f Euros\n", cantidad, resultadoConversion);
                        break;
                    case 3:
                        resultadoConversion = cantidad * Libra_Esterlina;
                        printf("\n%0.2f Pesos mexicanos es igual a %0.2f Libras esterlinas\n", cantidad, resultadoConversion);
                        break;
                    case 4:
                        exit (0);
                    default:
                        printf("\nSu opci%cn no es v%clida\n", 162, 160);     
            }
        }
    }while(divisa != 4);
    
    return 0;
}