#include <stdio.h> 

int main() {
	int size;
	do{
	printf("nhap so luong phan tu cua mang :");
	scanf("%d",&size);
	}while(size<0);
		
    int player[size];
	int s=0;
	int c=0;
    for(int i=0;i<size;i++){
    	printf("nhap pt mang :");
    	scanf("%d",&player[i]);
	}
    for(int i=0;i<size;i++){
    	if(player[i]%2==1){
    		s =s +player[i];
    		c++;
    		
		}
	}
	if(c>0){
		float tbc= (float)s/c;
		printf("tbc cac so le :%f",tbc);
		
	}else{
		printf("mang k co so le ");
	}
}
