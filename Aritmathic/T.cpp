#include<stdio.h>
//T
// MATH6025 08:20-10:00
// MATH6025 10:20-12:00
// COMP6047 16:20-18:00
// COMP6047 18:20-20:00
// CHAR6013 08:20-10:00

int main(){
	int A, B, C, D;	

	for(int i=0; i<2; i++){
		scanf("MATH6025 %d:%d-%d:%d", &A, &B, &C, &D); getchar();
		
		printf("MATH6025 %02d:%02d-%02d:%02d\n", A-1, B, C-1, D);
	}
	
	for(int i=0; i<2; i++){
		scanf("COMP6047 %d:%d-%d:%d", &A, &B, &C, &D); getchar();
		
		printf("COMP6047 %02d:%02d-%02d:%02d\n", A-1, B, C-1, D);
	}
	
	for(int i=0; i<1; i++){
		scanf("CHAR6013 %d:%d-%d:%d", &A, &B, &C, &D); getchar();
		
		printf("CHAR6013 %02d:%02d-%02d:%02d\n", A-1, B, C-1, D);
	}

	return 0;
}
