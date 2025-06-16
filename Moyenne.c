#include <stdio.h>
#include <stdlib.h>

int main(){
	float a,b,c;

	printf("Entrer 3 notes séparées par des espaces: ");
	scanf("%f %f %f", &a, &b, &c);
	
	float moyenne = (a+b+c)/3;

	printf("%.2f\n", moyenne);

	return 0;
}
