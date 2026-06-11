#include<stdio.h>

int main(){
	double N, M, L;
	
	scanf("%lf %lf %lf", &N, &M, &L);
	getchar();
	
	double FinalScore = (N*20/100)+(M*30/100)+(L*50/100);
	
	printf("%.2lf\n", FinalScore);
	
	return 0;
}
