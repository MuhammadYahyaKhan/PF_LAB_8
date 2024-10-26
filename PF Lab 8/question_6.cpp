#include<stdio.h>

int main(){
	int n; printf("N : "); scanf("%d",&n);
	
	for(int i = 1; i <= n; i++ ){
		if(i == 1 || i == n){
			for(int j = 1; j <= n; j++){
				printf("*");
			}
		}
		else{
			for(int k = 1; k<=n;k++){
				if(k == i || i+k == n+1 || k == 1 || k == n){
					printf("*");
				}
				else{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	return 0;
}