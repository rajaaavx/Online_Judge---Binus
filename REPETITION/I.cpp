#include<stdio.h>

int main(){
	int tc;
	int jojo, lili, bibi, a;
	int nilai_peserta, rate;
	
	scanf("%d", &tc); getchar();
	
	scanf("%d %d %d", &jojo, &lili, &bibi); getchar();
	
	nilai_peserta = 0;
	
	for(int i = 0; i <tc; i++){
		scanf("%d", &a); getchar(); 
		nilai_peserta +=a;
	}
	
	rate =(jojo+lili+bibi+nilai_peserta)/(tc+3);
	
	if(jojo<rate){
		printf("Jojo tidak lolos\n");
	}else{
		printf("Jojo lolos\n");
	}
	
	if(lili<rate){
		printf("Lili tidak lolos\n");
	}else{
		printf("Lili lolos\n");
	}
	
	if(bibi<rate){
		printf("Bibi tidak lolos\n");
	}else{
		printf("Bibi lolos\n");
	}
	
	return 0;
}
