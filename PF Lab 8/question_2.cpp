#include<stdio.h>

int main(){
	int a[4][4];
	
	// input matrix
	
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	// Printing matrix
	
	for(int i = 0; i < 4; i++){
		printf("| ");
		for(int j = 0; j < 4; j++){
			printf(" %d ",a[i][j]);
		}
		printf("|\n");
	}
	
	// Checking if there is negative or not
	
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			if(a[i][j] < 0){
				a[i][j] = 0;	
			}
		}
	}
	
	// Printing the correct matrix
	printf("---------------Correct matrix------------\n");
	for(int i = 0; i < 4; i++){
		printf("| ");
		for(int j = 0; j < 4; j++){
			printf(" %d ",a[i][j]);
		}
		printf("|\n");
	}
	
	
	return 0;
}