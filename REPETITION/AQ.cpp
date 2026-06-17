#include<stdio.h>
#include<stdbool.h>

int main() {
    int a;
    scanf("%d", &a);  

    for (int i = 1; i <= a; i++) {
        int count = 0;
        bool dots = true;
        char address[101];
        scanf("%s", address);  

       
        for (int j = 0; address[j] != '\0'; j++) {
            if (address[j] == '.' && address[j + 1] != '.') {
                count++;  
            } else if (address[j] < '0' || address[j] > '9') {
                dots = false;  
                break;
            }
        }

         
        printf("Case #%d: %s\n", i, (count == 5 && dots) ? "YES" : "NO");
    }

    return 0;
}

