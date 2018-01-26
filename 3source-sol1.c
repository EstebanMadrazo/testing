#include <stdio.h>
#include <math.h>
int main() {
	int numero=0;
	int digitos=0;
	int contador=0;
	printf("ingrese un numero entero ");
	scanf("%i",&numero);
	numero=pow(numero,2);
	numero=sqrt(numero);
	
	for( int contador=1;contador<5;contador++){
		int contador1 = contador + 1;
		if(numero>=(pow(10,contador))&&numero<=((pow(10,contador1))-1)){
			digitos=contador+1;
		}
	}
	printf("El numero tiene: %i digitos",digitos);
	return 0;
}
