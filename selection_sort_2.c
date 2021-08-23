#include<stdio.h>

void swap(int* a, int* b) {
	*a += *b;
	*b = *a - *b;
	*a -= *b;
}

void selection_sort(int *a,int n){
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < a[s])
				s = j;
		}
		swap(r[i], a[s]);
	}
}

void input(int *a,int n){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}

void output(int *a,int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

int main() {
	int n;
//	int a[100]={4,5,8,3,9,2};
	int a[100];
	scanf("%d",&n);
	input(a,n);
	selection_sort(a,n);
	output(a,n);
}