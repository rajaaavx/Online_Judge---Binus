#include<stdio.h>
//v13
int main(){
	int T;
	double A;
	
	scanf("%d", &T); getchar();
	
	for(int i = 0; i<T; i++){
		scanf("%lf", &A); getchar();
		printf("%.2lf %.2lf %.2lf\n", A*4.0/5.0, A*9.0/5.0+32.0, A+273.0);
	}
	
	return 0;
}
