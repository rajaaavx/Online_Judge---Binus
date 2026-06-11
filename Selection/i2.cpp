#include<stdio.h>

int main(){
	int T;
	double harga, persen, max;
	scanf("%d", &T);
	getchar();
 
  for(int i = 0; i<T; i++){
   	scanf("%lf %lf %lf", &harga ,&persen ,&max);
    getchar();
      
    double cb = persen/100;
    double hasil = harga*cb;
    
    if(hasil>=max){
    	printf("Case #%d: %.lf\n", i+1, max);
	}else if(hasil<max){
		printf("Case #%d: %.lf\n", i+1, hasil);
	}
      
      
  }

	
	return 0;
}
