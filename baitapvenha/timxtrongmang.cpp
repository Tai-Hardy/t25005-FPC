#include <stdio.h> 

int main() {
	int size;
	do{
	printf("nhap so luong phan tu cua mang :");
	scanf("%d",&size);
	}while(size<=0);
		
    int player[size];
	int c=0;
	int x;
    for(int i=0;i<size;i++){
    	printf("nhap pt mang ");
    	scanf("%d",&player[i]);
	}
	    printf("Nhap gia tri x can tim: ");
    	scanf("%d", &x);
    for(int i=0;i<size;i++){
    	if(player[i] == x){
		
    	c++;
   	}	
	}		
		if(c>0)	
		printf("co x trong mang .\n",c);
	}
