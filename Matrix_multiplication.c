#include<stdio.h>
#include<conio.h>
int main(){
	
	int op1[10][10],op2[10][10],mul[10][10],i,j,m,n,k;
	
	//Entering Rows & Coulmns
	
	printf("-> Enter no. of rows :: ");
	scanf("%d",&m);
	printf("\n-> Enter no. of columns :: ");
	scanf("%d",&n);
	
	//Entering 1st & 2nd matrix
	
	printf("\n-> Enter value to the first matrix:-\n\n");
	
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			printf("\tEnter a[%d][%d] value :: ",i,j);
			scanf("%d",&op1[i][j]);
		}
	}
	
	printf("\n-> Enter value to the second matrix:-\n\n");
	
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			printf("\tEnter b[%d][%d] value :: ",i,j);
			scanf("%d",&op2[i][j]);
		}
	}	
	
	//Displaying Input
	
	printf("\n-> First entered matrix is:-\n\n");
	
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			printf("\t%d",op1[i][j]);
			}
		printf("\n\n");
		}
	printf("-> Second entered matrix is:-\n\n");
	
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			printf("\t%d",op2[i][j]);
			}
		printf("\n\n");
		}
	
	//Multiplying the fetched matrices
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			mul[i][j]=0;
			for(k=0;k<n;k++){
			mul[i][j] += op1[i][k]*op2[k][j];
			}
		}
	}
	
	//Displaying the multiplicated matrix
	
	printf("-> Multiplication of the matrices are:-\n\n");
	
		for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			printf("\t%d",mul[i][j]);
		}
		printf("\n\n");
	}
	
	//The mark of confirmation☠️😎
	
	printf("Working Properly!!");
	
	
	return 0;
}
