
#include <stdlib.h>
#define a 3
int arr();
int cicle();

int main(){
int array[a][a];
int arrr[a*a];
        for (int i = 0; i<a; i++){
	for (int j = 0; j<a; j++){
	array[i][j] = i+2*j;
}
}
	for (int i = 0; i<a; i++){
	for (int j = 0; j<a; j++){
	for (int c = 0; c<a*a; c++){
	arrr[c] = array[i][j];
}
}
}
int res1 = arr(arrr);
int res2 = cicle(rand()%100); // b = 1 - простое, b = 0 - не простое.
return 0;
}

int arr(int ar1[a*a]){
int ar2[a][a];
int ar3[a][a];
int ar4[a*a];
	for(int i = 0; i < a; i++) {
	for(int j = 0; j < a; j++) {
        ar2[i][j] = ar1[i*a+j];
}
}
	for (int i = 0; i<a; i++){
	for (int j = 0; j<a; j++){
	ar3[i][j] = 0;
	for (int k = 0; k<a; k++){
	ar3[i][j] += ar2[i][k]*ar2[k][j];
}
}
}
        for (int i = 0; i<a; i++){
        for (int j = 0; j<a; j++){
        for (int c = 0; c<a*a; c++){
        ar4[c] = ar3[i][j];
}
}
}
return ar4;
}

int cicle(int n){
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
return 0;
}

