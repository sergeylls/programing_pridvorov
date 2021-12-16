int main(){
int n=10;
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
