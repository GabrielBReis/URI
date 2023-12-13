#include <stdio.h>


int main() {
    int n,i;
    scanf("%d",&n);
    char frase [35]={'L','I','F','E',' ','I','S',' ','N','O','T',' ','A',' ','P','R','O','B','L','E','M',' ','T','O',' ','B','E',' ','S','O','L','V','E','D'};

	for (i=1;i<=n;i++){
    	printf("%c", frase[i-1]);
	}
	printf("\n");
	return 0;
}