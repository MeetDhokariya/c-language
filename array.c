#include<stdio.h>

main() {
	
	int r,c,i,j;
	int a[10][10];

	printf("Enter Row : ");
	scanf("%d",&r);
	printf("Enter Column : ");
	scanf("%d",&c);

	for(i=0 ; i<r ; i++) {
		for(j=0 ; j<c ; j++) {
			printf("Enter Value : ");
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0 ; i<r ; i++) {
		for(j=0 ; j<c ; j++) {
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
	

}
