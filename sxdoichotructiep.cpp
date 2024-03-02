#include <stdio.h>
#include <math.h>
int main(){
	int n,a[100];
	scanf("%d", &n);
	for (int i =1; i<=n; i++){
		scanf("%d", &a[i]);
	}
	for (int i=1; i<n; i++){
		for (int j = i+1; j<=n; j++){
			if ( a[i] > a[j]) {
				int c = a[i];
				a[i] = a[j];
				a[j] = c;
			}
		
		}
		printf("Buoc %d: ", i);
		for (int j = 1; j<=n; j++) printf("%d ", a[j]);
		printf("\n");
	}
}