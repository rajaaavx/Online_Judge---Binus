#include<stdio.h>

int main(){
    int tc;
    scanf("%d", &tc); 

    for (int i = 0; i < tc; i++) {
        int n, a, b, c, d;
        scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);

        int count = 0;
        // Loop
        for (int j = 1; j <= n; j++) {  // Ubah dari j < n ke j <= n
            if (j % a == 0 || j % b == 0 || j % c == 0 || j % d == 0) {
                count++;  
            }
        }

        // Output 
        printf("Case #%d: %d\n", i + 1, count);
    }
	return 0;
}
