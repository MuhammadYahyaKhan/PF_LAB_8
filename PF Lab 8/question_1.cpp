#include<stdio.h>

int main(){
	// Matrix declaration
	
	int a[3][3];
	
	// INput values for matric
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j <3;j++){
			printf("Enter the Element A%d%d :",i+1,j+1);
			scanf("%d",&a[i][j]);
			
		}
	}
	
	// Printing the matrix
	
	for(int i = 0; i < 3;i++){
		printf("| ");
		for(int j = 0; j < 3;j++){
			printf(" %d ",a[i][j]);
		}
		printf(" |\n");
	}
	
	int sum_c[3];
	int sum_r[3];
	
	// Calculating sum row wise
	
	for(int i = 0; i < 3; i++){
		int sum = 0;
		for(int j = 0; j < 3;j++){
			sum = sum + a[i][j];
		}
		sum_r[i] = sum;
	}
	
	// Printing sum row wise
	printf("--------------Sum of rows-------------------\n");
	for(int i = 0; i < 3;i++){
		printf("sum of row %d = %d\n",i+1,sum_r[i]);
	}
	
	
	// Calculating sum column wise
	for(int i = 0; i < 3; i++){
		int sum = 0;
		for(int j = 0; j < 3; j++){
			sum = sum + a[j][i];
		}
		sum_c[i] = sum;
	}
	
	// Printing sum column wise
	printf("--------------Sum of column-------------------\n");
	for(int i = 0; i < 3; i++){
		printf("sum of column %d = %d\n",i+1,sum_c[i]);
	}
	return 0; 	
}