#include <stdio.h>

int main() {
    int a,b,max;
    scanf("%d %d", &a, &b);
    if ( a > b) max = a;
    else max = b;
    for (int i = max ; i <= a*b ; i++){
        if ( i % a == 0 && i % b == 0 ) { printf("%d\n", i); break;}
    }
}
