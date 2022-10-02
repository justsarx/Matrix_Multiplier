#include<stdio.h>
#include<conio.h>
int main(){
	
	int op1[10][10],op2[10][10],mul[10][10],i,j,m,n,o,p,k,x,y;
	
	//Entering Rows & Coulmns of 1st matrix
	
	printf("-> Enter no. of rows of Matrix A :: ");
	scanf("%d",&m);
	printf("\n-> Enter no. of columns of Matrix A :: ");
	scanf("%d",&n);
	
	//Entering rows and coulmns of 2nd matrix

	printf("\n-> Enter no. of rows of Matrix B :: ");
	scanf("%d",&o);
	printf("\n-> Enter no. of columns of Matrix B :: ");
	scanf("%d",&p);
	
	if(n!=o){
		printf("\n->>>\t Error!, Matrix is not multiplicable.");
	}
	
	else{
	//Entering 1st matrix
	/*Variables x & y used for just looking good in output.
	* Eg. -> Enter Matrix A[1][1] instead of A[0][0].
	*/
	printf("\n-> Enter value to the first matrix:-\n\n");
	
	for(i=0,x=1;i<m;i++,x++){
		for(j=0,y=1;j<n;j++,y++){
			printf("\tEnter A[%d][%d] value :: ",x,y);
			scanf("%d",&op1[i][j]);
		}
	}

	//Entering 2nd matrix

	printf("\n-> Enter value to the second matrix:-\n\n");
	
	for(i=0,x=1;i<o;i++,x++){
		for(j=0,y=1;j<p;j++,y++){
			printf("\tEnter B[%d][%d] value :: ",x,y);
			scanf("%d",&op2[i][j]);
		}
	}	
	
	//Displaying Input
	
	printf("\n-> First entered matrix is:-\n\n");
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("\t%d",op1[i][j]);
			}
		printf("\n\n");
		}

	
	printf("\n-> Second entered matrix is:-\n\n");
	
	for(i=0;i<o;i++){
		for(j=0;j<p;j++){
			printf("\t%d",op2[i][j]);
			}
		printf("\n\n");
		}
	
	//Multiplying the fetched matrices
	
	for(i=0;i<m;i++){
		for(j=0;j<p;j++){
			mul[i][j]=0;
			for(k=0;k<n;k++){
			mul[i][j] += op1[i][k]*op2[k][j];
			}
		}
	}
	
	//Displaying the multiplicated matrix
	
	printf("-> Multiplication of the matrices are:-\n\n");
	
		for(i=0;i<m;i++){
		for(j=0;j<p;j++){
			printf("\t%d",mul[i][j]);
		}
		printf("\n\n");
	}
	}

	return 0;
	
	}