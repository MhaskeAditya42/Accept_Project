#include <bits/stdc++.h>
using namespace std;

int min(int arr[], int n)
{
	
	priority_queue<int, vector<int>, greater<int> > a(
		arr, arr + n);

	
	int res = 0;

	
	while (a.size() > 1) {
		
		int first = a.top();
		a.pop();
		int second = a.top();
		a.pop();

		res += first + second;
		a.push(first + second);
	}

	return res;
}


int main()
{
	int len[] = { 4, 3, 2, 6 };
	int size = sizeof(len) / sizeof(len[0]);
	cout << "Total cost for connecting ropes is "
		<< min(len, size);
	return 0;
}
