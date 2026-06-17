#include <stdio.h>

int main(){
	int n = 1;
	int q;
	scanf("%d", &q);
	
	int i;
	for(i=0; i<q; i++){
		n *= 2;
		n++;
	}
	printf("%d\n", n);
	return 0;
}
