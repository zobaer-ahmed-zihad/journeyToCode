#include <stdio.h>

int main() {
	int n;
    scanf("%d", &n);
	int s = n + 4, k = 1;
	for(int i = 1; i<= (n/2 + 6); i ++){
	    for(int j = 1; j<=s; j++){
	        printf(" ");        
	    }
	    for(int j = 1; j<=k; j++){
	        printf("*");
	    }
	    printf("\n");
	    s--;
	    k = k + 2;
	}
	
	for(int i = 1; i<=5; i++){
	    for(int j = 1; j<=5; j++){
	        printf(" ");
	    }
	    for(int j = 1; j<=n; j++){
	        printf("*");
	    }
	    printf("\n");
	}

}

