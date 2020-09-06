/*
 ============================================================================
 Name        : ProgClasDosMenu.c
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
	char opciones;
		do{
		printf(" a) Saludar");
		printf("\n b) Brindar");
		printf("\n c) Despedirse");
		printf("\n d) Salir");
		printf("\n\n Ingrese la opcion deseada: ");
		fflush(stdin);
		scanf("%c", &opciones);
		switch(opciones){
		case 'a':
			system("cls");
			printf("Hola, bienvenid@!");
			printf("\n");
			system("pause");
			break;
		case 'b':
			system("cls");
			printf("Chin chin");
			printf("\n");
			system("pause");
			break;
		case 'c':
			system("cls");
			printf("Nos vemos :)");
			printf("\n");
			system("pause");
			break;
		case 'd':
			break;
		}
		system("cls");
		}while(opciones!='d');
		printf("Saliendo del programa\n");
		system("pause");


	return EXIT_SUCCESS;
}
