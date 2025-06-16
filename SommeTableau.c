#include <stdio.h>
#include <stdlib.h>

int main(){

	int array[10] = {1,2,3,4,5,6,7,8,9,10};

	int resultat;

	for(int i=0; i<10; i++){
		resultat+=array[i];
	}

	printf("Le résultat est: %d\n", resultat);

	return 0;
}
