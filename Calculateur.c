#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b;

	printf("Saisir 1er nombre: ");
	scanf("%d", &a);

	printf("Saisir 2nd nombre: ");
	scanf("%d", &b);

	int somme = a+b;
	int soustraction = a-b;
	int multiplication = a*b;
	int quotient = a%b;
	

	printf("Somme: %d, Soustraction: %d, Multiplication: %d, Quotient: %d\n", somme, soustraction, multiplication, quotient);

	return 0;
}
