#include <stdio.h>
#include <stdlib.h>

int RechercheArray(int a, int array[]){
	
	for(int i=0;i<6;i++){
		if(array[i]==a){
			return 1;
		}
	}
	return 0;
}

int main(){

	int array[6]={3,8,12,5,9,1};
	int a;

	printf("Saisir nombre: ");
	scanf("%d", &a);
	
	if(RechercheArray(a, array)==1){
		printf("Trouvé!\n");
	}else{
		printf("Non trouvé.\n");
	}

	return 0;
}
