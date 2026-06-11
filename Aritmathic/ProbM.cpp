#include<stdio.h>
//M
int main(){
	long long int N, M;
	double A;
	
	scanf("%lld %lld", &N, &M); getchar();
	
	A = N*100;
	
	printf("%.2lf%%\n", A/M);
	
	
	return 0;
}
