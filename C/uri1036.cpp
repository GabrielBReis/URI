#include <stdio.h>
#include <math.h>
int main() {
    int a,b,c,d,are_b,are_c;
    scanf("%d",&a);
    a=a/2;
    scanf("%d %d %d",&b,&c,&d);
    are_b= 4*a*a*M_PI;
    are_c= b*c*d;
    if (are_b<are_c)
        printf("S\n");
    else
    	printf("N\n");
    return 0;
}
