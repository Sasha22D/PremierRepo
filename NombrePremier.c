#include <stdio.h>
#include <stdlib.h>

int CalcNombrePremier(int a){

	if(a <=1){
		return 1;
	}

	for(int i=2; i<a; i++){

		if(a % i==0){
			return 1;
		}
	
	}
	
	return 0;
}


int main(){

	int a;

	printf("Which number do you wanna scan?: ");
	scanf("%d", &a);

	CalcNombrePremier(a);

	if(CalcNombrePremier(a)==0){
		printf("%d is a prime number.\n", a);
	}else{
		printf("%d is not a prime number.\n", a);
	}
	
	return 0;
}
