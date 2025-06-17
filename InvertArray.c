#include <stdio.h>
#include <stdlib.h>

int main(){

	int array[]={1,2,3};
	int invert_array[3];
	int a=0;

	for(int i=0;i<3;i++){
		printf("%d ",array[i]);
	}

	for(int i=2;i>=0;i--){
		invert_array[a]=array[i];
		a++;
	}

	for(int i=0;i<3;i++){
		array[i]=invert_array[i];
		printf("%d ",array[i]);
	}

	return 0;
}
