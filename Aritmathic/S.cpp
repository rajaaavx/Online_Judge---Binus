#include<stdio.h>

int main(){
	int L, B;
	double H;
	
	scanf("%d %d %lf", &L, &B, &H);
	getchar();
	
	double luas_segitiga = B*H;
	double luas_persegi = 3*B*L;
	double luas = luas_segitiga+luas_persegi;
	
	printf("%.3lf\n", luas);
	return 0;
}
