#include <stdlib.h>
#include <stdio.h>
#define a 3
int array()
int main()
{
        int arr[a][a];
        int arr1[n * n];
        int b = 0;
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        arr[i][j] = rand()%100;
                }
	}
	for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        arr1[b] = arr[i][j];
                        b++;
                }
        }
        int detresult = array(arr1);
	printf("result = %d\n", detresult);
        return 0;
}

int array(int b[])
{
        int a[a][a];
        int det = 1;
        int pro = 0;
        int k = 0;
        for (int i = 0; i<a; i++) {
                for (int r = 0; r<a; r++) {
                        a[i][r] = b[k];
                        k++;
                }
        }
        for (int i = 0; i < a; i++) {
                if (a[i][i] == 0){
                        printf("Ошибка \n");
                        return 0;
                }
                for (int j = i + 1; j < a; j++) {
                        pro = a[j][i] / a[i][i];
                        for (int l = 0; l < a; l++) {
                                a[j][l] = a[j][l] - pro * a[i][l];
                        }
                }
        }
        for(int i = 0; i < a; i++) {
                det = det * a[i][i];

        }
        return det;
}

