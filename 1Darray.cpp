//1D °öÇÏ±â
#include <iostream>
using namespace std;
void main() {
	//1D
	int N = 2, M = 3, NM;
	float X[] = { 1,2,3,4,5,6 }, * Y, * Z;
	Y = new float[N * M];
	Z = new float[N * M];
	Y[0] = 1;
	Y[1] = 0;
	Y[2] = 1;
	Y[3] = 0;
	Y[4] = 2;
	Y[5] = 3;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			Z[i * (N + 1) + j] = X[i * (N + 1) + j] * Y[i * (N + 1) + j];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << Z[i * (N + 1) + j] << "  ";
		}
		cout << endl;
	}
}

