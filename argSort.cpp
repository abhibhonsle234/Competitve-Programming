#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
	const int maxn = 10;
	int position[maxn] = {0};
	int arr[] = {3, 2, 2, 6, 4};
	const int sz = 5;
	for(int i = 0; i < sz; ++i) position[ arr[i] ] = i + 1;
	for(int i = 0; i < maxn; ++i) if(position[i]) cout << ' ' << position[i];
	return 0;
}
