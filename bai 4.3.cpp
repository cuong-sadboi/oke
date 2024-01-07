#include<stdio.h>
#include<math.h> 

void Nhap_N(int &n){
	do  {
		printf("Nhap so phan tu cua mang: ");
		scanf("%d",&n);
	} while (n<2 || n >100);
	}  
	
void Nhapmang(int arr[], int &n) {
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

void Xuatmang(int arr[], int n) {
    printf("Mang vua nhap la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int ChisoMax(int arr[], int n) {
    int max = arr[0];  
    int chisoMax = 0;  
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            chisoMax = i;
        }
    }
    printf("Chi so cua phan tu lon nhat la: %d\n", chisoMax); 
    return chisoMax;
}

int Timmax(int arr[], int n) {
    int max = arr[0];  

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Phan tu lon nhat trong mang: %d\n",max); 
    return max;
}

int ChisoMin(int arr[], int n) {
    int chisoMin = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[chisoMin]) {
            chisoMin = i;
        }
    }
    printf("Chi so cua phan tu nho nhat la: %d\n",chisoMin); 
    return chisoMin;
}

int Timmin(int arr[], int n) {
    int min = arr[0]; 

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Phan tu nho nhat trong mang: %d\n",min); 
    return min;
}

int Songuyento(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

void Inrasonguyento(int arr[], int n) {
    printf("Cac so nguyen to trong mang la: ");
    for (int i = 0; i < n; i++) {
        if (Songuyento(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int Demsonguyento(int arr[], int n){
	int sum = 0; 
	for (int i = 0; i < n; i++) {
        if (Songuyento(arr[i])) {
            sum++; 
        }
    }
    printf("So so nguyen to trong mang la: %d\n", sum);
	return sum; 
} 

float Tbcsonguyento(int arr[], int n){
	int tong = 0;
	int sum = 0;
	for(int i =0;i < n;i++){
		if(Songuyento(arr[i])){
			tong += arr[i];
			sum++;
		} 
	} 
	float tbc = tong/sum; 
	if(sum > 0){
		printf("Trung binh cong cua cac so nguyen to: %g\n",tbc);
	} else{
		return 0.0; 
	}   
    return tbc; 
} 

int Tongchanchia3(int arr[], int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0 && arr[i] % 3 == 0) {
            tong += arr[i];
        }
    }
    printf("Tong cac phan tu chan chia het cho 3 la: %d\n", tong); 
    return tong;
}

int Tbcphantule(int arr[], int n){
	int tong = 0;
	int sum = 0; 
	for(int i = 0;i < n; i++){
		if(arr[i] % 2 != 0){
			tong += arr[i];
			sum++; 
		} 
	} 
	float tbc = tong/sum;
	printf("Trung binh cong cac phan tu le la: %g\n",tbc);
	return tbc; 
} 

int Sochinhphuong(int n){
	int canbachai = sqrt(n);
	return (pow(canbachai,2) == n); 
} 

int Tongsochinhphuong(int arr[], int n){
	int tong = 0;
	for(int i =0;i < n;i++){
		if(Sochinhphuong(arr[i])){
			tong += arr[i]; 
		} 
	} 
	printf("Tong cac so chinh phuong trong mang: %d\n", tong); 
	return tong; 
} 

void Cacsochinhphuong(int arr[], int n) {
    printf("Cac so chinh phuong trong mang la: ");
    for (int i = 0; i < n; i++) {
        if (Sochinhphuong(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void Mangtangdan(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
	printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void Sapxep(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (abs(arr[i]) > abs(arr[j])) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Cac so le theo thu tu tang dan: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    printf("Cac so chan theo thu tu giam dan: ");
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void Vitrisochan(int arr[], int n) {
    int p, q;
    printf("Nhap vao vi tri p: ");
    scanf("%d", &p);
    printf("Nhap vao vi tri q: ");
    scanf("%d", &q);

    int dem = 0;
    printf("Cac phan tu chan trong doan tu p den q: ");
    for (int i = p; i <= q; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            dem++;
        }
    }
    printf("\n");
    printf("So luong phan tu chan trong doan tu p den q: %d\n", dem);
}

void Sochannhohon20(int arr[], int n){
	printf("Cac phan tu chan nho hon 20 la: ");
	for(int i = 0;i<n;i++){
		if(arr[i] % 2 == 0 && arr[i] < 20){
			printf("%d ",arr[i]); 
		} 
	} 
	printf("\n"); 
} 

void Lietkesonguyento(int arr[], int n) {
    int Tontaisonguyento = 0;

    printf("Cac so nguyen to nho hon %d: ", n);
    for (int i = 2; i < n; i++) {
        if (Songuyento(i)) {
            printf("%d ", i);
            Tontaisonguyento = 1;
        }
    }
    printf("\n");

    if (!Tontaisonguyento) {
        printf("Khong ton tai so nguyen to nho hon %d.\n", n);
    }
}

void Vitrisochinhphuong(int arr[], int n) {
    printf("Cac so chinh phuong trong mang la: ");
    for (int i = 0; i < n; i++) {
        if (Sochinhphuong(arr[i]) && i % 2 == 1) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int Tongsole(int arr[], int n){
	int tong = 0;
	for(int i = 0;i < n; i++){
		if(arr[i] % 2 != 0){
			tong += arr[i];
		} 
	} 
	printf("Tong cac phan tu le la: %d\n",tong);
	return tong; 
}  

int Tongsonguyento(int arr[], int n){
	int tong = 0;
	for(int i = 0; i < n;i++){
		if(Songuyento(arr[i])){
			tong += arr[i]; 
		} 
	} 
	printf("Tong so nguyen to: %d\n",tong);
	return 0; 
} 

int Demsochinhphuong(int arr[], int n){
	int sum = 0; 
	for (int i = 0; i < n; i++) {
        if (Sochinhphuong(arr[i])) {
            sum++; 
        }
    }
    printf("So so chinh phuong trong mang la: %d\n", sum);
	return sum; 
}

void Timvitri(int arr[], int n){
	int m;
	printf("Nhap vao phan tu can tim: ");
	scanf("%d",&m);
	
	for(int j=0;j<n;j++){
			int dem = 0;
		if(m == arr[j]){
	printf("Vi tri co gia tri bang m la: ") ;
    for (int i = 0; i < n; i++) {
        if (m == arr[i]) {
        	printf("%d ", i);
            dem++;            
        }
    } 
    printf("\n");
	printf("So luong phan tu co gia tri bang m la: %d\n",dem); 
	break; 
} else{
	
	printf("Khong tim thay");
}
}
} 

void Tim_x(int &x){
		printf("Nhap so phan tu cua mang: ");
		scanf("%d",&x);
	}  
	
int Timvitricuoicung(int arr[], int n, int x) {
    int Vitricuoicung = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            Vitricuoicung = i;
        }
    }
    printf("Phan tu %d xuat hien cuoi cung tai vi tri %d trong mang.\n", x, Vitricuoicung);
    return Vitricuoicung;
}

int Timvitrimin(int arr[], int n) {
    int chisoMin = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[chisoMin]) {
            chisoMin = i;
        }
    }
    printf("Chi so cua phan tu nho nhat la: %d\n",chisoMin); 
    return chisoMin;
}

void Vitrisonguyento(int arr[], int n) {
    printf("Cac so nguyen to trong mang la: ");
    for (int i = 0; i < n; i++) {
        if (Songuyento(arr[i])) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int Timvitrisoamnhat(int arr[], int n) {
    int chisoam = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[chisoam] && arr[i] < 0) {
            chisoam = i;
        }
    }
    printf("Vi tri cua so am lon nhat la: %d\n",chisoam); 
    return chisoam;
}

void Boicua3va5 (int arr[], int n){
	printf("Vi tri cua cac phan tu la boi cua 3 và 5 la: "); 
	for(int i = 1; i < n;i++){
		if(arr[i] % 3 == 0 && arr[i] % 5 == 0){
			printf("%d ", i); 
		} 
	} 
	printf("\n"); 
} 

void Phantuamduong(int arr[], int n){
	int Phantuam = 0;
	int Phantuduong = 0; 
	for(int i = 1; i< n;i++){
		if(arr[i] < 0){
			Phantuam++;  
		} 
		if(arr[i] > 0){
			Phantuduong++;  
		} 
	} 
	printf("So phan tu am cua mang: %d\n",Phantuam);
	printf("So phan tu duong cua mang: %d\n",Phantuduong);
} 

int main() {
    int n;
    int x; 
    Nhap_N(n);
    int arr[n];
    Nhapmang(arr, n);
    Xuatmang(arr, n);
    ChisoMax(arr, n); 
    Timmax(arr, n); 
    ChisoMin(arr, n);
	Timmin(arr, n);
	Inrasonguyento(arr, n);
	Demsonguyento(arr, n); 
	Tbcsonguyento(arr, n);
	Tongchanchia3(arr, n); 
	Tbcphantule(arr, n); 
	Tongsochinhphuong(arr, n); 
	Cacsochinhphuong(arr, n); 
	Mangtangdan(arr, n); 
    Sapxep(arr,n); 
    Vitrisochan(arr, n);
	Sochannhohon20(arr,n);
	Lietkesonguyento(arr, n); 
	Cacsochinhphuong(arr,n); 
	Tongsole(arr,n); 
	Tongsonguyento(arr, n); 
	Demsochinhphuong(arr, n); 
	Timvitri(arr, n); 
	Timvitricuoicung(arr, n, x); 
	Timvitrimin(arr, n); 
	Vitrisonguyento(arr, n); 
	Timvitrisoamnhat(arr, n);
	Boicua3va5(arr,n); 
	Phantuamduong(arr, n); 
    return 0;
} 
