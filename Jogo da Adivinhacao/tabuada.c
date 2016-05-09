#include<stdlib.h>
#include<stdio.h>


int main(){
	
	int num,mult;
	
	printf("\nDigite o numero da tabuada: ");
	scanf("%d",&num);
	
	for(int i = 1; i <= 10; i++){
		
		mult = num * i;
		
		printf("\nA tabuada de %d * %d = %d ",num,i,mult);
		
	}
	
}
