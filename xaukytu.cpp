#include<stdio.h>
#include<string.h>

void khoangtrong2ben(char s[]){
	int dodai = strlen(s);
	int batdau = 0;
	int ketthuc = dodai - 1;
	
	while(s[batdau] == ' '){
		batdau++;
	}
	while(ketthuc >= 0 && s[ketthuc] == ' '){
		ketthuc--;
	}
	int i, j=0;
	for (i = batdau;i <= ketthuc;i++){
		s[j] = s[i];
		j++;
	}
	s[j] = '\0';
	puts(s);
}

void khoangtranggiua(char s[]){
	int i =0;
	while(i<strlen(s)-1){
		if(s[i] == ' ' && s[i+1] == ' '){
			int k=i;
			do
			s[k]=s[k+1];
			while(s[++k] != 0);
		} else {
			i++;
		}
	}
	puts(s);
}

void demtutrongxau(char s[]){
	int dodai = strlen(s);
	int dem =1;
	for(int i=0;i<dodai;i++){
		if(s[i] == ' ' && s[i+1] != ' '){
			dem++;
		}
	}
	printf("So tu trong mang la: %d\n",dem);
}

int ktraxautoanso(char s[]){
	int dodai = strlen(s);
	int toanlaso =1;
	for(int i=0;i<dodai;i++){
		if(s[i] < 48 || s[i] > 57 || s[i] == ' '){
			toanlaso = 0;
			break;
		}
	}
	return toanlaso;
}

int sosanhxau(char s[],char cc[]){
	int giongnhau =1;
	int dodais = strlen(s);
	int dodaicc = strlen(cc);
	if(dodais != dodaicc){
		return 0;
	}
	for(int i=0;i<dodais;i++){
		for(int j=0;j<dodaicc;j++){
			if(s[i] != cc[i]){
				return 0;
			}
		}
	}
	return giongnhau;
}

int demtubatdau(char s[]){
	int dodai = strlen(s);
	int dem=0;
	for(int i=0;i<dodai;i++){
		if(s[i] == 'T' && s[i+1] == 'H'){
			dem++;
		}
	}
	printf("so lan xuat hien cua ky tu TH la: %d\n",dem);
}

void thanhchuthuong(char s[]){
	int dodai =strlen(s);
	for(int i=0;i<dodai;i++){
		if(s[i] >= 65 && s[i] <= 90){
			s[i] += 32;
		} else{
			continue;
		}
	}
	printf("Xau sau khi doi ky tu hoa:");
	puts(s);
}

void thanhchuhoa(char s[]){
	int dodai =strlen(s);
	for(int i=0;i<dodai;i++){
		if(s[i] >= 97 && s[i] <= 122){
			s[i] -= 32;
		} else{
			continue;
		}
	}
	printf("Xau sau khi doi ky tu thuong:");
	puts(s);
}

void kytudautieninhoa(char s[]){
	int dodai =strlen(s);
	s[0] -= 32;
	for(int i=0;i< strlen(s);i++){
	   
	        if(s[i+1] != ' ' && (s[i] == ' ' || s[i] == '\0')){
	        	s[i+1] -=32;
		    }else {
	            continue;
	        } 

    } 
    printf("Xau sau khi in hoa chu cai dau: ");
    puts(s);
}

int main(){
	char s[100];
	char cc[100];
	printf("Nhap xau ky tu s:");
	gets(s);
	printf("Nhap xau ky tu cc:");
    gets(cc);
	printf("Xau sau khi bo khoang trang 2 ben:");
	khoangtrong2ben(s);
    printf("Xau sau khi bo khoang trang giua xau:");
    khoangtranggiua(s);
    demtutrongxau(s);
    ktraxautoanso(s);
    if(ktraxautoanso(s)){
    	printf("s la xau toan so\n");
	} else {
		printf("s khong phai xau toan so\n");
	}
	if(sosanhxau(s,cc)){
		printf("2 xau giong nhau\n");
	} else {
		printf("2 xau khac nha\n");
	}
	demtubatdau(s);
	//thanhchuthuong(s);
	//thanhchuhoa(s);
	kytudautieninhoa(s);
	return 0;
}
