#include<stdio.h>

int main(){
	
	double saldo, bunga, SaldoAkhir;
	
	scanf("%lf %lf", &saldo, &bunga);
	getchar();
	
	SaldoAkhir = saldo;
	bunga /= 100;
		
	for(int i=0; i<3; i++){
		
		SaldoAkhir = SaldoAkhir+(saldo*bunga);
		saldo = SaldoAkhir;
	}
	
	
	printf("%.2lf\n", SaldoAkhir);
	
	return 0;
}
