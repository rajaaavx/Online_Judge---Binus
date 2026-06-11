#include<stdio.h>

int main(){
	double A, B, C, D;
	double hasil;
	
	for(int i = 0; i < 3; i++){
		scanf("%lf %lf %lf %lf", &A, &B, &C, &D); getchar();
		
		A = (A/1)*2;
		B = (B/2)*4;
		C = (C/3)*6;
		D = (D/4)*4;
		
		hasil = A+B+C+D;
		
		printf("%.2lf\n", hasil);
	}
	
	
	
	
	
	return 0;
}
