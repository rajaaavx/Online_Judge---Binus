#include<stdio.h>

int main(){
	long long int hit = 0, damage = 0;
	long long int att = 100;
	
	scanf("%lld", &hit);
	getchar();
	
	for(int i = 0; i<hit; i++){
		damage += att;
		att += 50;
	}
	
	printf("%lld\n", damage);
	
	return 0;
}
