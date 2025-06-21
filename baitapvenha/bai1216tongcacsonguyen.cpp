#include<stdio.h>
int main(){
	int n;
	int total =0;
	printf("nhap so nguyen n ; ");
	scanf("%D",&n) ;
	while(n>0){
	total += n%10;
	n=n/10; 
	} 
	printf("tong cáco cua so nguyen la :%d\n",total);
	return 0; 
} 
