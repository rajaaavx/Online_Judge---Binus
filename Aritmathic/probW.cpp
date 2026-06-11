#include<stdio.h>

int main(){
	int A, B, C;
	
	scanf("%d", &A); getchar();
	scanf("%d", &B); getchar();
	scanf("%d", &C); getchar();
	
	A = A/10%10;
	B = B/10%10;
	C = C/10%10;
	
	printf("%d\n", A);
	printf("%d\n", B);
	printf("%d\n", C);
	
	return 0;
}
