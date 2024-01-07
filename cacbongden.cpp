#include<stdio.h>
#include<string.h>


int main(){
	int n;
	
	char s[51];
	int dem=0;
	scanf("%d",&n);
    scanf("%s",s);
	for(int i=0;i<n-1;i++){
		if(s[i] == s[i+1]){
			dem++;
		}
	}
	printf("%d\n",dem);
	return 0;
} 
/*#include <stdio.h>
#include <string.h>

int main() {
  int n; // s? lu?ng bóng dèn
  char s[51]; // chu?i màu s?c c?a các bóng dèn
  int count = 0; // s? lu?ng bóng dèn c?n l?y di
  scanf("%d", &n); // nh?p s? lu?ng bóng dèn
  scanf("%s", s); // nh?p chu?i màu s?c
  for (int i = 0; i < n - 1; i++) { // duy?t qua các bóng dèn t? trái sang ph?i
    if (s[i] == s[i + 1]) { // n?u hai bóng dèn liên ti?p có cùng màu
      count++; // tang s? lu?ng bóng dèn c?n l?y di
    }
  }
  printf("%d\n", count); // in ra k?t qu?
  return 0;
}*/

