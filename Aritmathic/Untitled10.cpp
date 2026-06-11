#include<stdio.h>

int main(){
	int panjang, lebar;
	double tinggi, luas1, luas2;
	
	scanf("%d %d %lf", &panjang, &Lebar &tinggi);
	getchar();
	
	luas1 = 0.5*lebar*tinggi;
	luas2 = (2*luas1)+(3*lebar)+panjang;
	
	printf("%.3lf", luas2);
	
	
	return 0;
}
