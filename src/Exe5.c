#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int row = atoi(argv[1]);
	int col = atoi(argv[2]);
    int i = 3;
	argc-=i;
    int minArr[row];

    for(int r = 0; r < row; r++){
        int min = 999999;
        for(int c = 0; c < col; c++){
            int n = atoi(argv[i]);
            if(n < min){
                min = n;
                minArr[r] = min;
            }
            i++;
        }
    }

   int max = -999999;
    for(int m = 0; m < row; m++){
        int n = minArr[m];
        if(n > max){
           max = n;
        }
    }

    printf("%d\n", max);
    printf("\n");
	return 0;
}