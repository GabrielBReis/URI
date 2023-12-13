#include <stdio.h>
 
int diferenca(int a, int b, int c, int d){
    return(a*b-c*d);
}
int main() {
    int a,b,c,d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
  
    printf("DIFERENCA = %d\n",diferenca(a,b,c,d));
    return 0;
}   