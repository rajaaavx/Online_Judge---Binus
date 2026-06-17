#include <stdio.h>

int main() {
    int tc, n, i, j, tinggi;
	
	scanf("%d", &tc); getchar();
	for(n = 0; n<tc; n++){
		scanf("%d", &tinggi);

   	 for (i = 1; i <= tinggi; i++) {
    	    // Mencetak spasi
       	 for (j = 1; j <= tinggi - i; j++) {
       	     printf(" ");
       	}
	
	        // Mencetak bintang
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        // Pindah ke baris berikutnya
        printf("\n");
    }
	}
    

    return 0;
}
