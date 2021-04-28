#include <bits/stdc++.h>
using namespace std;

void	print(vector<int> v) {
	cout << "./push_swap ";
	for (int i=0; i<(int)v.size(); i++)
	{
		if (i==0) cout << v[i];
		else cout << " " << v[i];
	}
	cout << "  | ./checker ";
	for (int i=0; i<(int)v.size(); i++)
	{
		if (i==0) cout << v[i];
		else cout << " " << v[i];
	}
	cout << '\n';
}

int main() {
	vector<int> v = {0, 1, 2, 3, 4};
	print(v);
	while (next_permutation(v.begin(), v.end()))
		print(v);
	return 0;
}
