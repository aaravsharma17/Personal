#include <stdio.h>

int main() {
    int a = 0, b = 1 , n , c = 0 ,i = 0;
    scanf("%d",&n);
    while (i < n){
        printf("%d\t",c);
        c = a + b;
        a = b;
        b = c;
        i++;
    }
}
