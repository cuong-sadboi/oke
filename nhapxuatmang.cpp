/*#include<stdio.h>

void Nhapmang(int arr[], int n) {

    for (int i = 0; i < n; i++) {

        scanf("%d", &arr[i]);
    }
}

int Timmax(int arr[], int n) {
    int max = arr[0];  

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("%d ",max); 
    return max;
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
    printf("%d", chisoMax); 
    return chisoMax;
}

int main(){
	int n;
	scanf("%d",&n); 
	int arr[100]; 


	Nhapmang(arr,n);
    Timmax(arr,n); 
    ChisoMax(arr,n);
return 0; 
} */

/* #include<stdio.h>


int main(){
	int n;

    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int ptkoam =0;
	int tong = 0;
	for(int i=0;i<n;i++){
		if(arr[i] >= 0){
			ptkoam++;
			tong += arr[i];
		}
	}
	float tbc =0;
	if(ptkoam >0){
    tbc = (float)tong/ptkoam;
}
    printf("%g",tbc);
    return 0;
} 

#include<stdio.h>

int Songuyento(int nn) {
    if (nn < 2) {
        return 0;
    }
    for (int i = 2; i <= nn/2; i++) {
        if (nn % i == 0) {
            return 0;
        }
    }
    return 1;
}

int Demsonguyento(int arr[], int n){
	int sum = 0; 
	for (int i = 0; i < n; i++) {
        if (Songuyento(arr[i])) {
            sum++; 
        }
    }
    printf("%d", sum);
	return sum; 
}  

int main(){
	int n;
	scanf("%d",&n);
	int arr[100];
	Demsonguyento(arr,n);
	return 0;
} 

#include<stdio.h>

void Sapxep(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
int main(){
	int n;

    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    Sapxep(arr,n);
} 

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int p, q;
    scanf("%d %d", &p, &q);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= p && arr[i] <= q) {
            sum += arr[i];
        }
    }

    printf("%d",sum);

    return 0;
} 

#include<stdio.h>
#include<math.h>

int Sochinhphuong(int n){
	int canbachai = sqrt(n);
	return (pow(canbachai,2) == n); 
} 

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for(int i =0;i < n;i++){
		if(Sochinhphuong(arr[i])){
			tong += arr[i]; 
		} 
	} 
	printf("%d",sum);
	return 0;
}

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int x;
    scanf("%d", &x);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
        	sum = i;
        }
    }

    printf("%d", sum);

    return 0;
}


#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int minIndex = -1;
    int minValue = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] <= minValue) {
            minIndex = i;
            minValue = arr[i];
        }
    }

    printf("%d", minIndex);

    return 0;
}


#include <stdio.h>
//dao nguoc day
int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
*/

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n) ;
	int hangtram = n / 100;
	int hangchuc = (n % 100) / 10;
	int hangdv = n % 10;
	int sum = hangtram + hangchuc + hangdv;
	printf("%d",sum); 
} 

