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
  int n; // s? lu?ng b�ng d�n
  char s[51]; // chu?i m�u s?c c?a c�c b�ng d�n
  int count = 0; // s? lu?ng b�ng d�n c?n l?y di
  scanf("%d", &n); // nh?p s? lu?ng b�ng d�n
  scanf("%s", s); // nh?p chu?i m�u s?c
  for (int i = 0; i < n - 1; i++) { // duy?t qua c�c b�ng d�n t? tr�i sang ph?i
    if (s[i] == s[i + 1]) { // n?u hai b�ng d�n li�n ti?p c� c�ng m�u
      count++; // tang s? lu?ng b�ng d�n c?n l?y di
    }
  }
  printf("%d\n", count); // in ra k?t qu?
  return 0;
}*/

