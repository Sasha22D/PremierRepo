#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int count = 0;

	for(int i=1;count<100;i++){
		
		if(i%2==0){
			printf("%d ", i);
			count+=1; //count++ marche aussi
		}

	}

	return 0;
}
