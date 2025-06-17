#include<stdio.h>
int main(){
 int size;
 do{
 	 printf("nhap so luong pt cua manh :");
	 scanf("%d",&size); 	 
 	}while(size<=0);
 	
int player[size];
 	 int i;
 	 int found =0;
	 int solecuoi;
for(int i=0;i<size;i++){
	printf("nhap pt mang %d:",i);
	scanf("%d",&player[i]); 
}	 
   
	for(int i = size-1;i>=0;i--){
		if(player[i]%2 != 0 ){
		solecuoi=player[i];
	        found = i;
            break;
        }
    }

    // In k?t qu?
    if (found != -1){
    	printf("So le cuoi cung trong mang la: %d\n",solecuoi);
	}else{
		printf("Khong co so le trong mang.\n");
	}
} 
