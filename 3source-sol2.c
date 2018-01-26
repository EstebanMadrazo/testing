#include <stdio.h>
#include <math.h>
int main() {
	int numero;
	int digitos=0;
	printf("ingrese un numero entero ");
	scanf("%i",&numero);
	numero=pow(numero,2);
	numero=sqrt(numero);
		
	while(numero>1){
		numero=numero/10;
		digitos++;
		
	}
	printf("El numero tiene: %i digitos",digitos);
	return 0;
} 

