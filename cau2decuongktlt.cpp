#include<stdio.h>
#include<math.h>

int nhap_n(int &n){
	printf("Nhap n: ");
	scanf("%d",&n);
}

void timchusolonnhat(int n){
	int solonnhat,vitrisolonnhat;
	int vitri =0;
	while(n >0){
		int chuso = n % 10;
		if(chuso >= solonnhat){
			solonnhat = chuso;
			vitrisolonnhat = vitri;
		}
		n /= 10;
		vitri++;
	}
	printf("Chu so lon nhat la %d nam o hang %d.\n",solonnhat,vitrisolonnhat);
}

void sapxeptangdan(int n){
	int arr[n];
	int vitri = 0;
	while(n>0){
		int chuso = n % 10;
		arr[vitri] = chuso;
		n /= 10;
		vitri++;
	}
	for(int i =0;i<vitri-1;i++){
		for(int j =i+1;j<vitri;j++){
			if(arr[i] > arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("Chu so theo thu tu tang dan la: ");
	for(int i=0;i<vitri;i++){
		printf("%d",arr[i]);
	}
}

int thanghople(int &m){
	do{
		printf("Nhap m: ");
		scanf("%d",&m);
	} while(m < 1 || m > 12);
	if(m==4 || m == 6 || m == 9 || m==11){
		printf("Thang do co 30 ngay");
	} else if(m == 2){
		printf("Thang do co 28 ngay");
	} else {
		printf("Thang do co 31 ngay");
	}
}
int songuyento(int n){
	if(n < 2){
		return 0;
	}
	for(int i =2;i <= n/2;i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}

int nhapk(int &k){
	printf("nhap k: ");
	scanf("%d",&k);
}

void lietkeksnt(int k){
	printf("%d so nguyen to dau tien la: ",k);
	int timsnt = 0;
	int snt =2;
	while(timsnt < k){
		if(songuyento(snt)){
			printf("%d ",snt);
			timsnt++;
		}
		snt++;
	}
	printf("\n");
}

void nhap_xy(int &x,int &y){
	printf("Nhap x: ");
	scanf("%d",&x);
	printf("Nhap y: ");
	scanf("%d",&y);
}

int uocchunglonnhat(int x,int y){
	int ucln =1;
	for(int i=1;i <= x && i <= y;i++){
		if(x % i ==0 && y % i == 0){
			ucln = i;
		}
	}
	printf("Uoc chung lon nhat cua %d va %d la: %d\n",x,y,ucln);
} 

int boichungnhonhat(int x,int y){
	int boiso,bcnn;
	if(x > y){
		boiso = x;
	} else {
		boiso = y;
	}
	for(;;boiso++){
		if(boiso % x == 0 && boiso % y ==0){
			break;
		}
	}
	printf("Boi so chung nho nhat cua %d va %d la: %d",x,y,boiso);
}

int thapphansangnhiphan(int k){
	int nhiphan[32];
	printf("Nhi phan cua %d la: ",k);
	for(int i =32-1;i>=0;i--){
		nhiphan[i] = k % 2;
		k /= 2;
	}
	for(int i=0;i<32;i++){
		printf("%d",nhiphan[i]);
	}
}

float cau7_s1(int k){
	float sum=0;
	float temp;
	for(int i=1;i<=k;i++){
		temp += pow(i,2);
		sum += (pow(-1,i+1))/temp;
	}
	return sum;
}

int giaithua(int k){
	if(k == 0 || k == 1){
		return 1;
	} else{
		return k * giaithua(k-1);
	}
}

long long cau7_s2(int k){
	long long sum=0;
	for(int i=1;i <= k;i++){
		long long temp = pow(-1,i+1) * giaithua(i);
		sum += temp;
	}
	return sum;
}

float cau7_s3(int k){
	float sum=1;
	for(int i=1;i<=k;i++){
		float temp = pow(-2,i)/giaithua(i);
		sum += temp;
	}
	return sum;
}

float cau7_s4(int k){
	float sum=0;
	float temp;
	for(int i=1;i<=k;i++){
		temp += pow(i,2);
		sum += 1/temp;
	}
	return sum;
}

float cau7_s5(int k){
	float sum=0;
	
	for(int i=1;i<=k;i++){
		float temp = 2*i;
		sum += pow(-1,i+1)/temp;
	}
	return sum;
}

float cau7_s6(int k){
	float sum=0;
	float temp=0;
	for(int i=1;i<=k;i++){
		temp += i;
		sum += pow(-1,i+1)/temp;
	}
	return sum;
}

float cau7_s7(int k){
	float sum=1;
	for(int i=1;i<=k;i++){
		sum += pow(2,i)/giaithua(i);
	}
	return sum;
}

float cau7_s8(int k){
	float sum=0;
	for(int i=1;i<=k;i++){
		sum += pow(-1,i+1)/giaithua(i);
	}
	return sum;
}

int sohoanhao(int n){
	int sum = 0;
	for(int i=1;i<= n/2;i++){
		if(n % i == 0){
			sum += i;
		}
	}
	return sum == n;
}

void cacsohoanhao(int k){
	printf("Cac so hoan hao nho hon %d la: ",k);
	for(int i=1;i<=k;i++){
		if(sohoanhao(i)){
			printf("%d ",i);
		}
	}
}

int lasotamhoa(int n){
	int hangtram = n / 100;
	int hangchuc = (n/10)% 10;
	int hangdonvi = n % 10;
	return (hangtram*hangchuc*hangdonvi == hangtram + hangchuc+hangdonvi);
}

void timsotamhoa(){
	printf("So tam hoa la: ");
    for(int i=100;i<=999;i++){
    	if(lasotamhoa(i)){
    		printf("%d ",i);
		}
	}
}

int snttrongdoan(int x,int y){
	printf("So nguyen to trong doan la: ");
	for(int i=x;i<=y;i++){
		if(songuyento(i)){
			printf("%d ",i);
		}
	}
}

int fibonacci(int k){
	if(k<=0){
		printf("khong co so hang thu %d trong day Fibonacci.\n",k);
		return -1;
	} else if (k == 1 || k == 2){
		return 1;
	} else {
		int pt1 =1,pt2 =1,hienhanh;
		for(int i=3;i<=k;i++){
			hienhanh = pt1 + pt2;
			pt1 =pt2;
			pt2 = hienhanh;
		}
		return hienhanh;
	}
}

double giatricuadathuc(int n,double x, double a[]){
	double ketqua =0.0;
	for(int i =0;i<=n;i++){
		ketqua += a[i]*pow(x,n-1);
	}
	return ketqua;
}

int main(){
	int n;
	//int m;
	int k;
	//int x,y;
	nhap_n(n);
	//timchusolonnhat(n);
	//sapxeptangdan(n);
	//thanghople(m);
	//nhapk(k);
	//lietkeksnt(k);
	//nhap_xy(x,y);
	//uocchunglonnhat(x,y);
	//boichungnhonhat(x,y);
	//thapphansangnhiphan(k);
	//printf("%g\n%lld\n%g\n%g\n%g\n%g\n%g\n%g\n",cau7_s1(k),cau7_s2(k),cau7_s3(k),
	//cau7_s4(k),cau7_s5(k),cau7_s6(k),cau7_s7(k),cau7_s8(k));
	//cacsohoanhao(k);
	//timsotamhoa();
	//snttrongdoan(x,y);
	//if(fibonacci(k) != -1){ printf("So hang thu %d cua day: %d\n",k,fibonacci(k));}
	double a[n+1];
	for(int i=0;i<=n;i++){
		printf("Nhap he so a%d: ",i);
		scanf("%lf",&a[i]);
	}
	double x;
	printf("Nhap gia tri x: ");
	scanf("%lf",&x);
	printf("Gia tri cua da thuc P%d(%g) la: %g\n",n,x,giatricuadathuc(n,x,a));
	return 0;
} 
