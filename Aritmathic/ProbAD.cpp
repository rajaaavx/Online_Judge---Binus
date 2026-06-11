#include<stdio.h>

int main(){
	double A, B, C;
	
	scanf("%lf %lf %lf", &A, &B, &C);
	getchar();
	
	double damage = (A * 20 / 100) + (B * 30 / 100) + (C * 50 / 100);
	
	printf("%.2lf\n", damage);
	
	return 0;
}
