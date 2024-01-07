#include<stdio.h>

int main(){
	int a, b;
	int sum = 0;
	printf("nhap vao chi so cu: ");
	scanf("%d", &a);
	printf("nhap vao chi so moi: ");
	scanf("%d", &b); 
	int n = b - a; 
    if(n <= 100)
    	sum = n * 1000; 
	else 
	{
	
		if (n <= 150 && n > 100 )
		
			sum = 100 * 1000 + (n - 100)*1200; 
			 else 
			 {
			 
			 	if (n <= 200 && n > 150 )
				sum = 100 * 1000 + 50 * 1200 + (n - 150) * 2000; 
					 else 
		sum = 100 * 1000 + 50 * 1200 + 50 * 2000 + (n - 200) * 2500;
	} }
	/*	for(int j = 101; j <= 150;j++){
			if(j == a){
				sum += 1200;
			} 
		}
		    for(int k = 151; k <= 200;k++){
			if(k == a){
				sum += 2000; 
		    }
		}
			for(int l = 201;l < 1000; l++){
				if(l == a){
					sum+= 2500; 
				} 
			} */
	printf("so tien phai tra la : %d vnd", sum); 
	return 0; 
} 
