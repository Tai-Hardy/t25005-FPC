#include<stdio.h>
int ucln(int a,int b){
	while(b!=0){
		int r=a%b;
		 a=b;
		 b=r; 		 
	} 
	return a; 
}
int bcnn(int a,int b){
	(a*b) /ucln(a,b) ;
} 
int main(){
	int a,b;
	printf("nhap 2 so:");
	scanf("%d %d",&a,&b);
	 printf("bcnn la:%d\n",bcnn(a,b));
 	 return 0; 
 }

