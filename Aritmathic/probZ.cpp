#include<stdio.h>

int main(){
	
	int N;
	double A, B, C, D;
	double hasil;
	scanf("%d", &N); getchar();
	
	for(int i = 0; i<N; i++){
		scanf("%lf %lf %lf %lf", &A, &B, &C, &D); getchar();
		A = (A/1)*2;
		B = (B/2)*4;
		C = (C/3)*4;
		D = (D/4)*2;
		
		printf("%.2lf\n", A+B+C+D);
	}
	
	
	return 0;
}
