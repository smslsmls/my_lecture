#include<stdio.h>
#define SWAP(x, y) { int temp = x; x = y; y = temp; }

struct stu{
	int sc;
	int num;
};
struct stu score[12] = { 1,6,3,7,3,78,3,8,2,5,8,9 };
void quick_sort(int start, int end) {
	if (start >= end)
		return;
	int pivot = score[start].sc;
	int left = start+1;
	int right = end-1;
	while (left <= right) {
		while (score[left].sc <= pivot && left <= right)
			left++;
		while (score[right].sc >= pivot && left <= right)
			right--;
		if (left < right)
			SWAP(score[left].sc, score[right].sc);
	}
	SWAP(score[start].sc, score[right].sc);
	quick_sort(start, right);
	quick_sort(right + 1, end);
}
int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &score[i].sc);
		score[i].num = i + 1;
	}
	quick_sort(0, 12);

	return 0;
}