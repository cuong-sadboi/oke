#include<stdio.h>

void nhap(int *a, int &n){
	printf("Nhap so luong phan tu: ");
	scanf("%d",&n);
	for(int i =0;i < n;i++){
		printf("a[%d] = ",i);
		scanf("%d",a+i);
	}
}

void xuat(int *a,int n){
	for(int i =0;i< n;i++){
        printf("%d ", *(a+i));
	}
}

int timx(int *a,int n, int x){
	int ok = 0;
	for(int i =0;i<n;i++){
		if(*(a+i) == x){
			ok = 1;
			break;
		}
	}
	return ok;
}

float TBC2(int *a,int n){
	int tong =0, d=0;
	for(int i =0; i<n;i++){
		if(*(a+i)%2 ==0){
			d++;
			tong += *(a+i);
		}
	}
	if(d==0){
		return 0;
	} else {
		return tong/(float)d;
	}
}

void sapxep(int *a,int n){
	int tg;
	for(int i =0;i <n-1;i++){
		for(int j =i+1;j<n;j++){
			if(*(a+i)>*(a+j)){
				tg=*(a+1);
				*(a+i) =* (a+j);
				*(a+j) = tg;
			}
		}
	}
	xuat(a,n);
}

int countDivisible(int *a, int n, int firstNumber) {
    int count = 0;
    
    for (int i = 1; i < n; i++) {
        if (numbers[i] % firstNumber == 0) {
            count++;
        }
    }
    
    return count;
}

int main(){
	int a[10],n;
	nhap(a,n);
	xuat(a,n);
	int x;
	int numbers;
	
	printf("\nNhap x can tim: ");
	scanf("%d",&x);
	if(timx(a,n,x)==1){
		printf("Tim thay %d!",x);
	} else {
		printf("Khong tim thay %d",x);
	}
	printf("\nTB cong cac so chan la: %f\n", TBC2(a,n));
	sapxep(a,n);
	coutDivisible(a,n,firstNumber);
	return 0;
}
