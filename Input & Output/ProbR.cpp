#include<stdio.h>

int main(){
	char N[11];
	char nama[102];
	char kelas[31];
	int nomor;
	
	scanf("%s\n%[^\n]\n%c %d", N, nama, &kelas, &nomor);
	
	printf("Id    : %s\n", N);
	printf("Name  : %s\n", nama);
	printf("Class : %s\n", kelas);
	printf("Num   : %d\n", nomor);
	
	return 0;
}
