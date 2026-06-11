#include<stdio.h>
//U
int main(){
	int N;
	long long int derajat, detik;
	double total;
	
	scanf("%d", &N);
	
	for(int i=0; i<N; i++){
		scanf("%lld %lld", &derajat, &detik);
		getchar();
		
		total = derajat*detik;
		total = total/360.0;
		
		printf("%.2lf\n", total);
	}
	


	return 0;
}
