//Search for the maximum number in the matrix, diagonal from the left top corner, search below the diagonal.
#include<iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main() {
	cout << "Search for the maximum number in the matrix," << endl;
	cout << "diagonal from the left top corner," << endl;
	cout << "search below the diagonal." << endl;
	const int N = 5;
	int a[N][N];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			a[i][j] = rand() % 22 - 5;
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}

	int max = a[0][0];
	for (int i = 0; i < N; i++) {
		int j = 0;
		while (j <= i) {
			//j--;
			if (a[i][j] > max) max = a[i][j];
			j++;
		}
	}
	cout << "\nMaximum number is " << max << endl;
	return 0;
}
