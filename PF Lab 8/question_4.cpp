#include<stdio.h>

int main(){
	// Input dimensions
	int m,n; printf("Enter dimension for the matrices m x n:\n");scanf("%d %d",&m,&n);
	
	// Declaring two matrices
	
	int A[m][n];
	int B[m][n];
	
	// Input values for matrix A
	printf("------------------Input values for matrix A--------------------\n");
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n;j++){
			printf("Enter A%d%d:",i+1,j+1);
			scanf("%d",&A[i][j]);
		}
	}
	
	// Printing matrix A
	for(int i = 0; i < m;i++){
		printf("|");
		for(int j = 0; j < n;j++){
			printf(" %d ",A[i][j]);
		}
		printf("|\n");
	}
	
	// Input values for matrix B
	printf("------------------Input values for matrix B--------------------\n");
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n;j++){
			printf("Enter B%d%d:",i+1,j+1);
			scanf("%d",&B[i][j]);
		}
	}
	
	// Printing matrix B
	for(int i = 0; i < m;i++){
		printf("|");
		for(int j = 0; j < n;j++){
			printf(" %d ",B[i][j]);
		}
		printf("|\n");
	}
	
	// Printing sum of two matrices
	printf("------------------Sum of Matrix A and Matrix B--------------------\n");
	for(int i = 0; i < m;i++){
		printf("|");
		for(int j = 0; j < n; j++){
			printf(" %d ", A[i][j] + B[i][j]);	
		}
		printf("|\n");
	}
	return 0;
}