
int main()
{
const int a = 2;
int array[a][a];
int arrp[a][a];
	for (int i = 0; i<a; i++){
	for (int j = 0; j<a; j++){
	array[i][j] = i+2*j;
}
}

	for (int i = 0; i<a; i++){
	for (int j = 0; j<a; j++){
	arrp [i][j] = 0;
	for (int k = 0; k<a; k++){
	arrp[i][j] += array[i][k]*array[k][j];
}
}
}
return 0;
}
