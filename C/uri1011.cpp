#include <stdio.h>
#include <math.h>
 
int main() {
    float a;
    scanf("%f",&a);
    printf("VOLUME = %.3f\n",((4.0/3)*3.14159*pow(a,3)));
    return 0;
}