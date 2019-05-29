#include<stdio.h>
void insertSort(int sort[], int n)
{
	int i, j, k;
	//【0，i-1】是有序排列，【i，n-1】是无序排列
	for (i = 1; i < n; i++) {

		//为a[i]在前面的a[0...i-1]有序区间中找一个合适的位置
		for (j = i - 1; j >= 0; j--) {
			if (sort[j] < sort[i]) {
				break;//此时找到a[i]在排列中的位置，其索引为j+1,a[j+1]>a[i],此时要把a[i]移到a[j+1]
			}
		}
			
		//如果j=i-1，说明a[i]>a[i-1]此时a[i]就在他应该在的位置，不需要交换位置
		//如找到了一个合适的位置
		if (j != i - 1) {
			//将比a[i]大的数据向后移，就是a[j+1,i-1]元素向后移一位，变为a[j+2,i]
			//
			int temp = sort[i];
			for (k = i - 1; k > j; k--)
				sort[k + 1] = sort[k];
			//将a[i]放到正确位置上
			sort[k + 1] = temp;//a[j+1]= temp
		}
	}

}