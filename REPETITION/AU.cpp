#include<stdio.h>

int main(){
	int a, b;
	
	scanf("%d", &a);
	
	for(int i = 1; i<=a; i++){
		scanf("%d", &b);
		printf("Case #%d: ", i);
		for(int j = 0; j<b; j++){
			printf("%c", 97+j);
		}
		printf("\n");
	}
	
	
	return 0;
}
