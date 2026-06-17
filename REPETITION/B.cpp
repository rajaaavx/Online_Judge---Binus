#include<stdio.h>

int main(){
	int A, B;
	
	scanf("%d %d", &A, &B); getchar();
	
	B += A;
	
	for(int i = A; i<B; i++){
		printf("%d\n", i);
	}
	
	
	return 0;
}
