#include<stdio.h>
int main (){
	
	int n;
	
	int cnt=1;
	
	printf("nhap so nguyen n : ");
	
	scanf("%d", &n);
	
	printf(" so le nho hon %d la: ", n);
	
	while(cnt<n){
		
		if(cnt%2 != 0){
		printf("%d ",  cnt);	
}
		cnt++;
}
	 printf("\n");
}
