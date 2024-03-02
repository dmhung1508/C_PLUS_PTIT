#include<stdio.h>
int main(){
	int x;
	scanf("%d", &x);
	int n,m,p;
	for (int i =1; i<=x ; i++) {
		scanf("%d%d%d", &n, &m,&p);
		int a[100],b[100];
		printf("Test %d:\n", i);
		for (int j = 1; j <= n; j++) scanf("%d", &a[j]);
		for (int j = 1; j <= m; j++) scanf("%d", &b[j]);
		for (int j =1; j<= n; j++) {
			if ( j == p+1) {
				for (int k = 1; k <= m; k++) printf("%d ", b[k]);
				printf("%d ", a[j]);
			} else printf("%d ", a[j]);;
		}
		printf("\n");
	}
}