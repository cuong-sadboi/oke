#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int e=0;e<t;e++){
		int n,m;
		scanf("%d%d",&n,&m);
		long long int d[n+1];
		for(int f=1;f<=n;f++){
		    d[f] =0;
		}
		for(int l=1;l<=m;l++){
			int i,j,k;
			scanf("%d%d%d",&i,&j,&k);
			for(int x=i;x<=j;x++){
				d[x] +=k;
			}
		}
		for(int i=1;i<=n;i++){
			printf("%lld ",d[i]);
		}
		printf("\n");
	}
	return 0;
}
