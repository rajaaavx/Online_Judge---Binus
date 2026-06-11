#include <stdio.h>

int main() {
    int x, y, k;
    scanf("%d %d %d", &x, &y, &k);
    
    for (int t = 0; t <= 100; t++) {
        int posisiLift1 = x + t;   
        int posisiLift2 = y - t;   
    
        if (posisiLift1 == posisiLift2 && posisiLift1 == k) {
            printf("%d\n", t); 
            return 0;
        }
        if (posisiLift1 > 100 || posisiLift2 < 0) {
            break;
        }
    }

    printf("-1\n");
    return 0;
}

