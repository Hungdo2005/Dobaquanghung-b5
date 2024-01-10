#include <stdio.h>
int main(){
	int soluong;
	printf("So luong phan tu cua mang nay la: ");
	scanf("%d",&soluong);
	while (soluong <= 0) {
        printf("So luong mang phai lon hon 0!");
        printf("\nSo luong phan tu cua mang nay la: ");
        scanf("%d", &soluong);
    }    
	int a[soluong];
	int i;
	for (i=0; i< soluong; i++){
		printf("Nhap vao phan tu array[%d]",i);
		scanf("%d",&a[i]);		
	}
for (i = 0; i < soluong; i++) {
        if (i == 0) {
            a[i] = 5;
        } else if (i == 2) {
            a[i] = 3;
        } else if (i == 8) {
            a[i] = 8;
        } else if (i == 1 || i == 3 || i == 4 || i == 5 || i == 6 || i == 7 || i == 9) {
            a[i] = 0;
        }

        printf("Phan tu array [%d] la %d\n", i, a[i]);
    }

    return 0;
}
