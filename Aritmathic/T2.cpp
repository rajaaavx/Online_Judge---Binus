#include<stdio.h>
//T
// MATH6025 08:20-10:00
// MATH6025 10:20-12:00
// COMP6047 16:20-18:00
// COMP6047 18:20-20:00
// CHAR6013 08:20-10:00
//hasil = saldo
//hasil += hasil * bunga
int main(){
	int A, B, C, D;	
	char matkul[251];

	for(int i=0; i<5; i++){
		scanf("%s %d:%d-%d:%d", matkul, &A, &B, &C, &D); getchar();
		
		printf("%s %02d:%02d-%02d:%02d\n", matkul, A-1, B, C-1, D);
	}

}
