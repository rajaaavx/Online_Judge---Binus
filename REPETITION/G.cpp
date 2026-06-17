#include<stdio.h>

int main(){
	int tc, hew;
	int count = 0;
	
	scanf("%d", &tc); getchar();
	
	for(int i = 0; i <tc; i++){
		scanf("%d", &hew); getchar();
		count += hew;
	}
	printf("%d\n", count);
	return 0;
}
