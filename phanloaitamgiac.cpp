#include<stdio.h>
#include<math.h>

int main(){
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	if((a+b > c) && (a+c > b) && (b+c >a)){
		if(pow(a,2) == pow(b,2)+pow(c,2) || pow(b,2)==pow(a,2)+pow(c,2) || pow(c,2)==pow(a,2)+pow(c,2)){
			printf("tam giac vuong");
		} else if (a == b && b == c){
			printf("deu");
		} else if (a==b || a==c || b==c){
			printf("tam giac can");
		} else if (pow(a,2) > pow(b,2)+pow(c,2) || pow(b,2) > pow(a,2)+pow(c,2) || pow(c,2) > pow(a,2)+pow(b,2)){
			printf("tam giac tu");
		} else {
			printf("tam giac nhon");
		}
	} else {
		printf("KHONG");
	}
	return 0;
}
