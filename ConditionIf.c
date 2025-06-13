#include <stdio.h>
#include <stdlib.h>

int main(){

	int age;

	printf("How old are you?: ");
	scanf("%d", &age);

	if(age<18){
		printf("You must be 18 at least to enter.\n");
	}else{
		printf("Welcome in!\n");
	}

}
