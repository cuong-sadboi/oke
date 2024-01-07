#include<stdio.h>
#include<string.h>

void dem_so_kt(char chuoi[]){
	int i=0, dem=0;
	while(chuoi[i] != '/0'){
		if(chuoi[i]!=' ')
		dem++;
		i++;
	}
	printf("so ky tu: %d",dem);
}

void doi_hoa(char chuoi[]){
	int i=0;
	while(chuoi[i] != '\0'){
		if(chuoi[i] >= 'a' && chuoi[i] <= 'z')
		chuoi[i]=chuoi[i]-32;
		i++;
	}
	puts(chuoi);
}

int main(){
	char chuoi[100];
	printf("nhap chuoi: ");
	//scanf("%s",chuoi);
	//int a;
	//scanf("%d",&a);
	gets(chuoi);
	printf("chuoi: ");
	puts(chuoi);
	//int n = strlen(chuoi);
	printf("so ky tu: ");
	dem_so_kt(chuoi);
	doi_hoa(chuoi);
	return 0;
} 
