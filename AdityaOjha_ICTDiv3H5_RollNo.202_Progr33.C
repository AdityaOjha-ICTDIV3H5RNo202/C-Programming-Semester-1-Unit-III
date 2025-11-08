#include <stdio.h>
#include <math.h>

int main() {
    int n, sq, temp, digits = 0, p = 1;
    scanf("%d", &n);
    sq = n * n;
    temp = n;
    while(temp > 0) {
        digits++;
        temp /= 10;
    }
    for(int i = 1; i <= digits; i++)
        p *= 10;
    if(sq % p == n)
        printf("Automorphic number");
    else
        printf("Not automorphic number");
    return 0;
}

