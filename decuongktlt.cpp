#include<stdio.h>
#include<math.h>

void nhap_N(int &n){
	do {
		printf("Nhap n tu ban phim: ");
		scanf("%d",&n);
	} while(n <= 1 || n >= 100);
}

void nhapmang(int arr[],int &n){
	printf("Nhap phan tu cua mang: \n");
	for(int i =0;i<n;i++){
		printf("arr[%d] = ",i);
		scanf("%d", &arr[i]);
	}
}

void xuatmang(int arr[],int n){
	printf("Mang vua nhap la: \n");
	for(int i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int trungbinham(int arr[], int n){
	int soptam = 0;
	int tong = 0;
	for(int i =0;i<n;i++){
		if(arr[i] < 0){
			tong = tong + arr[i];
			soptam++;
		}
	}
	float tbc = 0;
	if(soptam > 0){
	    tbc = (float)tong/soptam;
	    printf("Trung binh cua cac phan tu am: %g",tbc);
	} else {
		return 0;
	}
	printf("\n");
}

int trungbinhduong(int arr[], int n){
	int soptduong = 0;
	int tong = 0;
	for(int i =0;i<n;i++){
		if(arr[i] > 0){
			tong = tong + arr[i];
			soptduong++;
		}
	}
	float tbc = 0;
	if(soptduong > 0){
	    tbc = (float)tong/soptduong;
	    printf("Trung binh cua cac phan tu duong: %g",tbc);
	} else {
		return 0;
	}
	printf("\n");
}

int songuyento(int n){
	if(n < 2){
		return 0;
	}
	for(int i=2;i <= n/2;i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}

int trungbinhnguyento(int arr[], int n){
	int soptnt = 0;
	int tong = 0;
	for(int i =0;i<n;i++){
		if(songuyento(arr[i])){
			tong = tong + arr[i];
			soptnt++;
		}
	}
	float tbc = 0;
	if(soptnt > 0){
	    tbc = (float)tong/soptnt;
	    printf("Trung binh cua cac phan tu la so nguyen to: %g",tbc);
	} else {
		return 0;
	}
	printf("\n"); 
}

int sohoanhao(int n){
	int sum =0;
	for(int i =1;i <= n/2;i++){
		if(n % i ==0){
			sum += i;
		}
	}
	return sum == n;
}

int trungbinhshh(int arr[],int n){
	int sum =0;
	int sopthh =0;
	for(int i=0;i<n;i++){
		if(sohoanhao(arr[i])){
			sum += arr[i];
			sopthh++;
		}
	}
	float tbc =0;
	if(sopthh >0){
		tbc = (float)sum/sopthh;
		printf("Trung binh cua cac phan tu la so hoan hao: %g",tbc);
	} else {
		return 0;
	}
	printf("\n");
}

int sochinhphuong(int n){
	int canbachai = sqrt(n);
	return (pow(canbachai,2) == n);
}

int trungbinhscp(int arr[],int n){
	int sum =0;
	int soptcp =0;
	for(int i=0;i<n;i++){
		if(sochinhphuong(arr[i])){
			sum += arr[i];
			soptcp++;
		}
	}
	float tbc =0;
	if(soptcp >0){
		tbc = (float)sum/soptcp;
		printf("Trung binh cua cac phan tu la so chinh phuong: %g",tbc);
	} else {
		return 0;
	}
	printf("\n");
}

int trungbinhchanchia3(int arr[],int n){
	int sum =0;
	int sopt =0;
	for(int i=0;i<n;i++){
		if(arr[i] % 2 == 0 && arr[i] % 3 == 0){
			sum += arr[i];
			sopt++;
		}
	}
	float tbc =0;
	if(sopt >0){
		tbc = (float)sum/sopt;
		printf("Trung binh cua cac so chan va chia het cho 3 la: %g",tbc);
	} else {
		return 0;
	}
	printf("\n");
}

int trungbinhlechia5(int arr[],int n){
	int sum =0;
	int sopt =0;
	for(int i=0;i<n;i++){
		if(arr[i] % 2 == 1 && arr[i] % 5 == 0){
			sum += arr[i];
			sopt++;
		}
	}
	float tbc =0;
	if(sopt >0){
		tbc = (float)sum/sopt;
		printf("Trung binh cua cac so le va chia het cho 5 la: %g",tbc);
	} else {
		return 0;
	}
	printf("\n");
}

int timmax(int arr[],int n){
	int max= arr[0];
	int chisomax =0;
	for(int i=0;i<n;i++){
		if(arr[i] > max){
			max = arr[i];
			chisomax = i;
		}
	}
	printf("Gia tri lon nhat la: %d\n",max);
	printf("Chi so cua phan tu lon nhat la: %d\n",chisomax);
}

int timmin(int arr[],int n){
	int min= arr[0];
	int chisomin =0;
	for(int i=0;i<n;i++){
		if(arr[i] < min){
			min = arr[i];
			chisomin = i;
		}
	}
	printf("Gia tri nho nhat la: %d\n",min);
	printf("Chi so cua phan tu nho nhat la: %d\n",chisomin);
}

void sapxeptang(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i] > a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("Mang sau khi sap xep theo thu tu tang dan la: ");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}

void sapxepgiam(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i] < a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("Mang sau khi sap xep theo thu tu giam dan la: ");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}

void insonguyento(int arr[],int n){
	printf("Cac so nguyen to trong mang la: ");
	for(int i=0;i<n;i++){
		if(songuyento(arr[i])){
			printf("%d ",arr[i]);
		}
	}
	printf("\n");
}

int nhapk(int &k){
	printf("Nhap k la: ");
	scanf("%d",&k);
}

int demntnhohonk(int arr[],int n, int k){
	int dem=0;
	for(int i=0;i<n;i++){
		if(arr[i] < k && songuyento(arr[i])){
			dem++;
		}
	}
	if(dem >0){
		printf("Co so so nguyen to nho hon %d la: %d\n",k,dem);
	} else {
		return 0;
	}
}

int socpvitrile(int arr[],int n){
	printf("Cac so chinh phuong nam tai nhung vi tri le la: ");
	for(int i=0;i<n;i++){
		if(i % 2 == 1 && sochinhphuong(arr[i])){
			printf("%d ",arr[i]);
		}
	}
	printf("\n");
}

int nhapx(int &x){
	printf("Nhap x la: ");
	scanf("%d",&x);
} 

int vitridautien(int arr[],int n,int x){
	int vtdautien = -1;
	for(int i=0;i<n;i++){
		if(arr[i] == x){
		vtdautien = i;
		break;
		} 
	}
    printf("Vi tri dau tien cua %d xuat hien trong mang la: %d\n",x,vtdautien);
}

int vitricuoicung(int arr[],int n,int x){
    int vtcuoicung = -1;
	for(int i=0;i<n;i++){
		if(arr[i] == x){
	    vtcuoicung = i;
		}
	}
    printf("Vi tri cuoi cung cua %d xuat hien trong mang la: %d\n",x,vtcuoicung);
}

int vitriamlonnhat(int arr[],int n){
	int vitriam = -1;
	for(int i=0;i<n;i++){
		if(arr[i] < 0){
			if(vitriam = -1 || arr[i] > arr[vitriam]){
				vitriam = i;
			}
		}
	}
	printf("Vi tri phan tu am lon nhat trong mang la: %d\n",vitriam);
} 

int mangkhongsont(int aa[],int n){
	for(int i=0;i<n;i++){
		if(songuyento(aa[i])){
			for(int j=i;j < n-1;j++){
				aa[i] = aa[j+1];
			}
			n--;
			i--;
		}
	}
	printf("Mang sau khi xoa so nguyen to: ");
	for(int i=0;i<n;i++){
		printf("%d ",aa[i]);
	}
	printf("\n");
}

int demptamduong(int arr[],int n){
	int soptam = 0;
	int soptduong =0;
	for(int i=0;i<n;i++){
		if(arr[i] < 0){
			soptam++;
		} else {
			soptduong++;
		}
	}
	printf("So phan tu am la: %d\nSo phan tu duong la: %d\n",soptam,soptduong);
}

int demlanxxuathien(int arr[],int n,int x){
	int xuathien = 0;
	for(int i=0;i<n;i++){
		if(arr[i] == x){
			xuathien++;
		}
	}
	printf("So lan xuat hien cua phan tu %d la: %d\n",x,xuathien);
}

void letangchangiam(int aaa[],int n){
	for(int i=0;i < n-1;i++){
		for(int j=i+1;j<n;j++){
			if(aaa[i] > aaa[j]){
				int temp = aaa[i];
				aaa[i] = aaa[j];
				aaa[j] = temp;
			}
		}
	}
	printf("Mang phan tu le tang dan la: ");
	for(int i=0;i<n;i++){
		if(aaa[i] % 2 == 1){
			printf("%d ",aaa[i]);
		}
	}
	printf("\n");
	printf("Mang phan tu chan giam dan la: ");
	for(int i=n-1;i>=0;i--){
		if(aaa[i] % 2 == 0){
			printf("%d ",aaa[i]);
		}
	}
	printf("\n");
}

void chenxvaovitrik(int aaaa[], int n,int x,int k){
		n++;
	for(int i =n-1;i>k;i--){
		aaaa[i+1] = aaaa[i];
	}
	aaaa[k+1] =x;

	printf("Mang sau khi chen %d vao vi tri sau vi tri %d la: ",x,k);
	for(int i=0;i<n;i++){
		printf("%d ",aaaa[i]);
	}
	printf("\n");
}

void timvaxoatrungx(int aaaaa[],int n,int x){
	int timthayx =0;
	for(int i=0;i<n;i++){
		if(aaaaa[i] == x){
			for(int j =i;j<n-1;j++){
				aaaaa[j] = aaaaa[j+1];
			}
			n--;
			timthayx =1;
			i--;
		}
	}
	if(timthayx >0){
		printf("Mang sau khi tim va xoa %d la: ",x);
		for(int i=0;i<n;i++){
			printf("%d ",aaaaa[i]);
		}
	} else {
		printf("Khong tim thay phan tu %d trong mang.",x);
	}
	printf("\n");
}

void phantukhacnhau(int b[],int n){
	int soptkhac =0;
	int mangmoi[n];
	for(int i=0;i<n;i++){
		int chuaxuathien =1;
		for(int j=0;j<soptkhac;j++){
			if(b[i] == mangmoi[j]){
				chuaxuathien =0;
				break;
		    }
		}
		if(chuaxuathien){
			mangmoi[soptkhac] = b[i];
			soptkhac++;
		}
	}
	printf("Co %d phan tu khac nhau trong mang la: ",soptkhac);
	for(int i=0;i<soptkhac;i++){
		printf("%d ",mangmoi[i]);
	}
	printf("\n");
}

void chensapxeptang(int bb[],int n,int x){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(bb[i] > bb[j]){
				int temp = bb[i];
				bb[i] = bb[j];
				bb[j] = temp;
			}
		}
	}
	int i,j;
	for(i=0;i<n;i++){
		if(bb[i] > x){
			break;
		}
	}
	for(j=n;j>i;j--){
		bb[j] = bb[j-1];
	}
	bb[i] = x;
	n++;
	printf("Mang sau khi chen %d theo thu tu tang dan la: ",x);
	for(int i=0;i<n;i++){
		printf("%d ",bb[i]);
	}
	printf("\n");
}

int sochanlonnhat(int arr[],int n){
	int chanlonnhat = -1;
	for(int i=0;i<n;i++){
		if(arr[i] % 2 ==0 && (chanlonnhat == -1 || arr[i] > chanlonnhat)){
			chanlonnhat = arr[i];
		}
	}
	return chanlonnhat;
}

int lenhonhatlonhonchanln(int arr[],int n){
	int chanlonnhat = sochanlonnhat(arr,n);
	int lenhonhat = -1;
	for(int i =0;i<n;i++){
		if(arr[i] % 2 != 0 && (lenhonhat == -1 || (arr[i] < lenhonhat && arr[i] >chanlonnhat))){
			lenhonhat = arr[i];
		}
	}
	printf("So le nho nhat lon hon so chan lon nhat la: %d\n",lenhonhat);
}

int solenhonhat(int arr[],int n){
	int lenhonhat = -1;
	for(int i=0;i<n;i++){
		if(arr[i] % 2 != 0 && (lenhonhat == -1 || arr[i] < lenhonhat)){
			lenhonhat = arr[i];
		}
	}
	return lenhonhat;
}

int chanlonnhatnhohonlenn(int arr[],int n){
	int lenhonhat = solenhonhat(arr,n);
	int chanlonnhat = -1;
	for(int i=0;i<n;i++){
		if(arr[i] % 2 ==0 && (chanlonnhat == -1 || (arr[i] > chanlonnhat && arr[i] <lenhonhat))){
			chanlonnhat = arr[i];
		}
	}
	printf("So chan lon nhat nho hon le nho nhat la: %d\n",chanlonnhat);
}

int timphantuxuathiennhieunhat(int arr[],int n){
	int ptxuathiennhieunhat = arr[0];
	int xuathiennhieunhat =1;
	for(int i=0;i<n-1;i++){
		int solanxuathien = 1;
		for(int j=i+1;j<n;j++){
			if(arr[j] == arr[i]){
				solanxuathien++;
			}
		}
		if(solanxuathien > xuathiennhieunhat){
			xuathiennhieunhat = solanxuathien;
			ptxuathiennhieunhat = arr[i];
		}
	}
	printf("Phan tu %d la phan tu xuat hien nhieu nhat %d lan.\n",ptxuathiennhieunhat,xuathiennhieunhat);	
}

int kiemtradoixung(int arr[],int n){
	int i,j;
	int doixung =0;
	for(i =0,j=n-1;i<j;i++,j--){
		if(arr[i] == arr[j]){
			doixung = 1;
		}
	}
	if(doixung ==1){
		printf("Mang doi xung");
	} else {
		printf("Mang khong doi xung");
	}
	printf("\n");
}

int kiemtramangsnt(int arr[],int n){
	int lamangnguyento =1;
	for(int i=0;i<n;i++){
		if(!songuyento(arr[i])){
			lamangnguyento =0;
			break;
		}
	}
	if(lamangnguyento == 0){
		printf("Mang khong phai la mang toan so nguyen to");
	} else {
		printf("Mang toan so nguyen to");
	}
	printf("\n");
}

int soduongnhonhat(int arr[],int n){
	int duongnhonhat =0;
	for(int i=0;i<n;i++){
		if(arr[i] > 0 && (duongnhonhat == 0 || arr[i] < duongnhonhat)){
			duongnhonhat = arr[i];
		}
	}
	if(duongnhonhat == 0){
		return 0;
	} else {
		printf("So nguyen duong nho nhat la: %d\n",duongnhonhat);
	}
}

int soamlonnhat(int arr[],int n){
	int amlonnhat =0;
	for(int i=0;i<n;i++){
		if(arr[i] < 0 && (amlonnhat ==0 || arr[i] > amlonnhat)){
			amlonnhat = arr[i];
		}
	}
	if(amlonnhat ==0){
		return 0;
	} else {
		printf("So nguyen am lon nhat la: %d\n",amlonnhat);
	}
}

int tachsonguyento(int arr[],int n){
	int b[n];
	int soluongmangb =0;
	for(int i=0;i<n;i++){
		if(songuyento(arr[i])){
			b[soluongmangb] = arr[i];
			soluongmangb++;
		}
	}
	printf("Mang so nguyen to la: ");
	for(int i=0;i<soluongmangb;i++){
		printf("%d ",b[i]);
	}
	printf("\n");
}

int tachmangnguyenduong(int arr[],int n){
	int mangnguyenduong[n];
	int mangconlai[n];
	int soluongmangduong =0;
	int soluongmangconlai =0;
	for(int i=0;i<n;i++){
		if(arr[i] > 0){
			mangnguyenduong[soluongmangduong] = arr[i];
			soluongmangduong++;
		} else {
			mangconlai[soluongmangconlai] = arr[i];
			soluongmangconlai++;
		}
	}
	printf("Mang so nguyen duong la: ");
	for(int i=0;i<soluongmangduong;i++){
		printf("%d ",mangnguyenduong[i]);
	}
	printf("\nMang so con lai: ");
	for(int i=0;i<soluongmangconlai;i++){
		printf("%d ",mangconlai[i]);
	}
	printf("\n");
}

int sapxepduongam0(int arr[], int n){
	printf("Mang co so duong dung dau, so am, cuoi cung so 0 la: ");
	for(int i=0;i<n;i++){
		if(arr[i] > 0){
			printf("%d ",arr[i]);
		}
	}
	for(int i=0;i<n;i++){
		if(arr[i] < 0){
			printf("%d ",arr[i]);
		}
	}
	for(int i=0;i<n;i++){
		if(arr[i] == 0){
			printf("%d ",arr[i]);
		}
	}
	printf("\n");
}

void suasonguyento(int arr[],int n){
	for(int i=0;i<n;i++){
		if(songuyento(arr[i])){
			arr[i] =0;
		}
	}
	printf("Mang sau khi sua cac so nguyen to thanh so 0 la: ");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}

int main(){
	int n;
	int x;
	int k;
	nhap_N(n);
	int arr[n];
	nhapmang(arr,n);
	xuatmang(arr,n);
	int a[n];
	for(int i=0;i<n;i++){
		a[i] = arr[i];
	}
	int aa[n];
	for(int i=0;i<n;i++){
		aa[i] = arr[i];
	}
	int aaa[n];
	for(int i=0;i<n;i++){
		aaa[i] = arr[i];
	}
	int aaaa[n];
	for(int i=0;i<n;i++){
		aaaa[i] = arr[i];
	}
	int aaaaa[n];
	for(int i=0;i<n;i++){
		aaaaa[i] = arr[i];
	}
	int b[n];
	for(int i=0;i<n;i++){
		b[i] = arr[i];
	}
	int bb[n];
	for(int i=0;i<n;i++){
		bb[i] = arr[i];
	}
	trungbinham(arr,n);
	trungbinhduong(arr,n);
	trungbinhnguyento(arr,n);
	trungbinhshh(arr,n);
	trungbinhscp(arr,n); 
	trungbinhchanchia3(arr,n);
	trungbinhlechia5(arr,n);
	timmax(arr,n);
	timmin(arr,n);
	sapxeptang(a,n);
	sapxepgiam(a,n);
	insonguyento(arr,n);
	nhapk(k);
	demntnhohonk(arr,n,k);
	socpvitrile(arr,n);
	nhapx(x);
	vitridautien(arr,n,x);
	vitricuoicung(arr,n,x);
	vitriamlonnhat(arr,n);
	mangkhongsont(aa,n);
	demptamduong(arr,n);
	demlanxxuathien(arr,n,x);
	letangchangiam(aaa,n);
	chenxvaovitrik(aaaa,n,x,k);
	timvaxoatrungx(aaaaa,n,x);
	phantukhacnhau(b,n);
	chensapxeptang(bb,n,x);
	lenhonhatlonhonchanln(arr,n);
	chanlonnhatnhohonlenn(arr,n);
	timphantuxuathiennhieunhat(arr,n);
	kiemtradoixung(arr,n);
	kiemtramangsnt(arr,n);
	soduongnhonhat(arr,n);
	soamlonnhat(arr,n);
	tachsonguyento(arr,n);
	tachmangnguyenduong(arr,n);
	sapxepduongam0(arr,n);
	suasonguyento(arr,n);
    return 0;
}
