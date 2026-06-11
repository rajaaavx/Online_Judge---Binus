#include<stdio.h>

int main(){
	double A, B;
	double persentase;
	
	scanf("%lf %lf", &A, &B);
	getchar();
	
	persentase =100-(B/A)*100;
	
	printf("%.2lf%%\n", persentase);
	
	return 0;
}
