#include<stdio.h>

int main(){
	int n; printf("N: ");scanf("%d",&n);
	
	// Upper triangle
	for(int i = 0; i < n;i++){
		
		for(int j = 0; j < i;j++){
			printf(" ");
		}
		
		
		for(int j = n-i;j>0;j--){
			printf(" %d ",j);
		}
		
		printf("\n");
	}
	// Lower triangle
	
	for(int i = 1; i <=n;i++){
		
		if(i == 1){
			continue;
		}
		for(int j = 0; j < n - i;j++){
			printf(" ");
		}
		for(int j = i; j>= 1;j--){
			printf(" %d ",j);
		}
		printf("\n");
	}
	
	
	return 0;
}