#include <stdio.h>

int main() {
    int a, b,c,r=1;
    scanf("%d %d", &a, &b);
    while (r != 0){
    if (b > a){
        c = b/a;
        r = b - a*c;
        b = a;
        a = r;
    }
    
    else {
        c = a/b;
        r = a - b*c;
        a = b;
        b = r;
    }
}
if (b > a) printf("%d",b);
else printf("%d",a);
}
