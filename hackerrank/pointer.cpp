/*

Read two integers as argument, and set a with the sum of them, 
and b with the absolute difference of them.

*/

#include <stdio.h>
#include <math.h>

void update(int *a,int *b) {
    int ppa = *a;
    int ppb = *b;

    *a = ppa + ppb;
    *b = abs(ppa - ppb);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}