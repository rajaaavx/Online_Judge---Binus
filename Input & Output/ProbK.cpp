#include<stdio.h>

int main(){
	char N[102];
	char A[102];
	int U;
	scanf("%[^\n]", N);
	getchar();
	scanf("%s %d", &A, &U);
	getchar();
	
	printf("Name: %s\n", N);
	printf("NIS: %s\n", A);
	printf("Age: %d\n", U);
	
	return 0;
}
