#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(int argc, char *argv[]) {
	int Numero;
	
	printf ("Ejercicio 2\nCrear un Programa que indique si un numero es PAR o IMPAR");
	printf ("\n----------------------------------------------------------------");
	
	printf ("\n\nIngrese el Numero :");
	scanf ("%d",&Numero);
	
	if (Numero % 2 == 0){
		printf ("\n\nEl Numero %d es PAR", Numero);		
	}else{
		printf ("\n\nEl Numero %d es IMPAR", Numero);
	}
	
	getch();
	return 0;
}
