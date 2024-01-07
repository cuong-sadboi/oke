#include<stdio.h>
#include<math.h> 

int main(){
	int a,b,c;
	printf("Nhap vao 3 canh: ");
	scanf("%d%d%d",&a,&b,&c);
	if ((pow(a,2)==pow(b,2)+pow(c,2)) || pow(b,2)==pow(a,2)+pow(c,2) || pow(c,2)==pow(a,2)+pow(b,2)){
		printf("tam giac la tam giac vuong"); 
	} else{
		printf("tam giac ko la tam giac vuong"); 
	} 
	return 0; 
} 
