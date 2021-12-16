#include <stdlib.h>
#define a 3
int arr();
int cicle();

int main(){
int resa[a][a];
int pro = ar();
int arrpro [a*a] = pro;
	for(int i = 0; i < a; i++) {
	for(int j = 0; j < a; j++) {
        resa[i][j] = arrpro[i*a+j];
}
}
int resc = cicle (rand()%100);

return 0;
}

int arr(int a1r[]){
int array[a][a];
int arr[a][a];
int ar[a*a];
	for (int i = 0; i<a; i++){
	for (int j = 0; j<a; j++){
	array[i][j] = i+2*j;
}
}
	for (int i = 0; i<a; i++){
	for (int j = 0; j<a; j++){
	arr [i][j] = 0;
	for (int k = 0; k<a; k++){
	arr[i][j] += array[i][k]*array[k][j];
}
}
}
	for (int i = 0; i<a; i++){
	for (int j = 0; j<a; j++){
	for (int c = 0; c<a*a; c++){
	ar[c] = arr[i][j];
}
}
}
a1r=ar;
return a1r;
}

int cicle(n){
int b;
	for (int i=n-1; i>1; i--){
	if (n%i!=0){
	b = 1; //простое
}
	if (n%i==0){
	b = 0; //не простое
break;
}
}
return b;
}
