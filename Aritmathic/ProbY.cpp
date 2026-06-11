#include<stdio.h>

int main(){
	int N;
	double A, B;
	double hasil;
	
	scanf("%d", &N); getchar();
	
	for(int i = 0; i<N; i++){
		scanf("%lf %lf", &A, &B); getchar();
		
		hasil = B/(100/A);
		
		printf("%.2lf\n", hasil);
	}
	
	return 0;
}
