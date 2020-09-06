/*
 ============================================================================
 Name        : ProgramacionClaseDos.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	  int edad=0;
	    int contador =0;
	    int acumulador=0;
	    int max;
	    int min;
	    float promedio =0;
	    char respuesta = 's';

	   do {
	         printf("Ingrese edad: ");
	         scanf("%d", &edad);

	         acumulador = edad+acumulador;
	         contador++;

	    if (contador ==1) {
	        max = edad;
	        min = edad;
	        }

	    else if (edad > max) {
	             max = edad;
	        }
	    else if (edad < min){
	            min = edad;
	    }
	    printf("Desea continuar agregando? s/n ");
	    fflush (stdin);
	    scanf ("%s", &respuesta);
	   } while (respuesta == 's');

	    promedio = acumulador/contador;

	    printf ("El promedio de las edades es: %f\n", promedio);
	    printf ("La edad maxima es: %d\n", max);
	    printf ("La edad minima es: %d\n", min);

	return EXIT_SUCCESS;
}
