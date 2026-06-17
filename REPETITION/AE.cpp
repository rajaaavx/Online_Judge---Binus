#include<stdio.h>

int main(){
	int tc;
	double const pi = 3.14;
	double r, h;
	
	
	scanf("%d", &tc); getchar();
	
	for(int i = 0; i<tc ; i++){
		scanf("%lf %lf", &r, &h); getchar();
		double luas_permukaan = 2*pi*r*(r+h);
		printf("Case #%d: %.2lf\n", i+1, luas_permukaan);
		
	}
	
	
	return 0;
}
