#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void	MergeSort(vector<int> &a, int l, int r) {
	if (r - l == 1) return ;
	int m = l + (r - l) / 2;
	printf("l:%d m:%d r:%2d n:%d a:", l, m, r, (int)a.size()-1);
	for (int k=l; k<r; k++) printf("%d ", a[k]);
	printf("\n");
	MergeSort(a, l, m);
	MergeSort(a, m, r);

	vector<int> buf;
	for (int i=l; i<m; i++) buf.push_back(a[i]);
	for (int i=r-1; i>=m; i--) buf.push_back(a[i]);
	printf("buf:");
	REP(i, (int)buf.size()) cout << buf[i] << " ";
	printf("\n");

	int	index_left = 0;
	int	index_right = (int)buf.size() - 1;
	for (int i=l; i<r; i++) {
		if (buf[index_left] <= buf[index_right])
			a[i] = buf[index_left++];
		else
			a[i] = buf[index_right--];
	}
	printf("arr:");
	REP(i, (int)a.size()) cout << a[i] << " ";
	printf("\n");
}

int	main()
{
	vector<int> a = {3, 6, 1, 7, 2, 0, 4, 5, 9, 8};
	REP(i, (int)a.size()) cout << a[i] << " ";
	cout << '\n';
	MergeSort(a, 0, (int)a.size());
	REP(i, (int)a.size()) cout << a[i] << " ";
	cout << '\n';
	return (0);
}
