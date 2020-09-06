/*
 ============================================================================
 Name        : EjMenuClase2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description :
 	 	 	 	 A) Saludar
				B) Brindar.
				C) Despedirse.
				D) Salir.
Nota:
 - Antes de salir preguntar si "esta seguro que desea salir?"
- Si brinda sin hacer saludado, debe avisar "Debe saludar antes de brindar" y no dejar continuar.
- Si se despide antes de saludar debe avisar "Debe saludar antes de brindar" y no dejar continuar.
- Si se despide antes de brindar debe avisar "Debe brindar antes de despedirse" y no dejar que continue.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	char opcion;
	int banderaBrindis=0;


	do {
		printf("\nMENU: ");
		printf("\nA - Saludar");
		printf("\nB - Brindar");
		printf("\nC - Despedirse");
		printf("\nD - Salir");
		printf("\nIngrese opcion: ");
		fflush(stdin);
		scanf("%c",&opcion);

		switch (opcion) {
		case 'A':
			system("CLS");
			printf("Hola, bienvenid@!");
			printf("\n");
			system("PAUSE");
			banderaBrindis=1;
		break;
		case 'B':
			if (banderaBrindis ==0) {
				printf("Debe saludar antes de brindar");
				printf("\n");
				system("PAUSE");
			}
			else if (banderaBrindis ==1) {
				system("CLS");
				printf("Chin, chin :)!");
				printf("\n");
				system("PAUSE");
			}

		break;
		case 'C':
				system("CLS");
				printf("Chau, hasta la proxima!");
				printf("\n");
				system("PAUSE");
		break;
		case 'D':
				system("CLS");
				printf("Saliendo del programa...");
				printf("\n");
				system("PAUSE");
		break;
		default:
			system("CLS");
			printf("Ingrese una opcion valida. Revise las mayusculas");
			printf("\n");
			system("PAUSE");
		break;

		}
	} while (opcion != 'D');

	return EXIT_SUCCESS;
}
