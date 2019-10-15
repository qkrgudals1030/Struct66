#include<stdio.h>
void swap( int* a, int* b ){
	int t;
	t = *a;
	*a = *b;
	*b = t;
}
int main() {
	int a[] = { 3,2,4,5,1 };
	int i, j;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4-i; j++) {
			if (a[j] > a[j + 1]) {
				swap(&a[j], &a[j + 1]);
			}
		}
	}
	for (i = 0; i < 5; i++) {
		printf(" %d ", a[i]);
	}

}    