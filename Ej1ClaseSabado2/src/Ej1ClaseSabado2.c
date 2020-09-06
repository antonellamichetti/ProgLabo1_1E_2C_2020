/*
 ============================================================================
 Name        : Ej1ClaseSabado2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Sin funciones:
para realizar un pedido, solicitar tres datos ,(iterar 5 veces)
código de tipo int , validar entre 100 y 200
cantidad de tipo entero(int), validar entre 1 y 20
una talle de tipo char validad entre('S' , 'M' , 'L')
a-mostrar el código y el talle  del que mas cantidad solicito
b-el promedio del total  de cantidades de talle 'M' con decimales
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int i;
	int codigoProducto;
	int cantidad;
	char talle;
	for (i=0;i<5;i++) {
		printf("Ingrese codigo del producto: \n");
		scanf ("%d",&codigoProducto);
		while (!(codigoProducto >=100 && codigoProducto <=200) ){
			printf("Error.Ingrese codigo del producto: \n");
			scanf ("%d",&codigoProducto);
	}
		printf("Ingrese cantidad del producto: \n");
		scanf ("%d",&cantidad);
		while (!(cantidad >=1 && cantidad <=20) ){
			printf("Error.Ingrese cantidad del producto: \n");
			scanf ("%d",&codigoProducto);
			}
		printf("Ingrese talle del producto -S/M/L-: \n");
			fflush(stdin);
			scanf ("%c",&talle);
		while (talle != 'S' && talle != 'M' && talle !='L'){
			printf("Error.Ingrese talle del producto: \n");
			fflush(stdin);
			scanf ("%c",&talle);
			}
	}

	return EXIT_SUCCESS;
}
