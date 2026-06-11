#include<stdio.h>

int main(){
	long long int a;
	long long int b = 1;
	
	scanf("%lld",&a);
	
	a = b << a;
	a -= b;
	printf("%lld\n", a);
	
	return 0;
}
