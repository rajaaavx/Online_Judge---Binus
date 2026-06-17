#include<stdio.h>

int main(){
	int range;
	int pinjaman = 0;
	scanf("%d", &range);
	int uang;
	for(int i = 0 ; i < range; i++){
		scanf("%d", &uang);
		
		pinjaman += uang;
		
	}
	
	printf("%d\n", pinjaman);
	
	return 0;
}
