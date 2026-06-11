#include<stdio.h>

int main(){
	double N, P, hasil;
	
	for(int i = 0; i<4; i++){
		scanf("%lf %lf", &N, &P); getchar();
		//				potongan harga
		//harga asli-(100 x persen diskon) = harga diskon
		//harga asli 
		
		hasil = P/(1-(N/100));
		
		printf("$%.2lf\n", hasil);
	}
	
	return 0;
}
