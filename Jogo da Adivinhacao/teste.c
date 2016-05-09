#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
	
	int segundos = time(0);
	srand(segundos);
	
	int n1 = 1 + (rand() % 10);
	int n2 = 1 + (rand() % 100);
	
	printf("%d e %d.", n1, n2);
}
