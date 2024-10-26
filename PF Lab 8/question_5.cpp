#include<stdio.h>

int main(){
	// delaring matrix
	int a[4][4];
	
	// taking input 
	printf("--------------------------Input for the matrix------------------------\n");
	for(int i = 0;  i < 4; i++){
		for(int j = 0; j< 4; j++){
			printf("Enter A%d%d :",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
	// Printing the matrix
	
	for(int i = 0; i < 4; i++){
		printf("|");
		for(int j = 0; j < 4; j++){
			printf(" %d ",a[i][j]);
		}
		printf("|\n");
	}
	
	// Arranging elements of column in asscending order
	
	for(int i = 0; i < 4;i++){
		for(int j = 0; j < 4;j++){
			for(int k = j + 1; k < 4;k++){
				if(a[j][i] > a[k][i]){
					int b = a[j][i];
					a[j][i] = a[k][i];
					a[k][i] = b;
				}
			}
			
			
		}
	}
	
	//Prinint the matrix
	printf("--------------------------Sorted Matrix------------------------\n");
	for(int i = 0; i < 4; i++){
		printf("|");
		for(int j = 0; j < 4; j++){
			printf(" %d ",a[i][j]);
		}
		printf("|\n");
	}
	
	
	return 0;
}