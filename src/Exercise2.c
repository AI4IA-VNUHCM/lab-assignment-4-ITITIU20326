#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

void Array2Dconverter(int arr[], int a[SIZE][SIZE], int m, int n)
{
	int row, column;
	int counter = 0;
	//Convert 1D array to 2D array
	for (row = 0; row <= (m - 1); row ++){
		for (column = 0; column <= (n - 1); column ++){
			a[row][column] = arr[counter];
			counter++;
		}
	}
}

void printArray(int a[SIZE][SIZE], int m, int n)
{
	int row, column;

	for (row = 0; row <= (m - 1); row ++){
		for (column = 0; column <= (n - 1); column ++){
			printf("%d ", a[row][column]);
		}
		printf("\n");
	}
}

void Ex2(int arr[], int m, int n){
	int a[SIZE][SIZE];
	Array2Dconverter(arr,a,m,n);
	//Your codes here
int column, row;
	for(column = 0; column < n; column++)
	{
	for(row = 0; row < m; row++)
	{
	for(int sort = row + 1; sort < m; sort++){
	if((a[row][column] - a[sort][column]) * ((column % 2 + 1) * 2 - 3) > 0){
	int temp = a[row][column];
	a[row][column] = a[sort][column];
	a[sort][column] = temp;
	}
	}
	}
	}
	printArray(a, m, n);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int row = atoi(argv[1]);
	int col = atoi(argv[2]);
	argc-=3;
	int testcase[argc],i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+3]);
	}

	Ex2(testcase, row, col);
	
	return 0;
}