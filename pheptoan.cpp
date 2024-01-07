#include<stdio.h>

int main(){
	float a,b;
	char c; 
	scanf("%f %f %c",&a,&b,&c);
	if(b == 0 && c == '/' ){
		printf("error"); 
	} else{
	switch (c) {
		case '+':
		    printf("%g",a+b);
		    break;
		case '-':
	        printf("%g",a-b);
	    	break;
		case '/':
			printf("%g",a/b);
			break;
		case '*':
	    	printf("%g",a*b);
	    	break;
		default:
	    	printf("error"); 
		    break; 
	} 
}
	return 0; 
} 

/*#include<stdio.h>

int main(){
	float a,b;
	char c; 
	scanf("%f %f %c",&a,&b,&c);
	printf("%g %g %c",a,b,c);
	return 0;
}*/
