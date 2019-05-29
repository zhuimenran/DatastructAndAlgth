#include<stdio.h>

void insertSort(int sort[], int n);

int main() {

	//print hello world
	printf("hello wrld\n");

	//create intÊý×é
	int sort_int_8[8] = { 2,10,5,3,8,1,0,4 };

	insertSort(sort_int_8, 8);

	for (int i = 0; i < 8; i++) {
		//cout << sort_int_8[i];
		printf("%d\t", sort_int_8[i]);

	}

	return 0;
}