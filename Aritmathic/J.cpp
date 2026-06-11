#include<stdio.h>

int main(){
	double A, B;
	double pers;
	
	scanf("%lf %lf", &A, &B);
	getchar();
	
	pers = (B/A)*100;
	
	printf("%.4lf%%\n", pers);
	
	
	return 0;
}
