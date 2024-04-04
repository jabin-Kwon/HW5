//2D °öÇÏ±â
#include <iostream>
using namespace std;
void main() {
	//2D
	int N = 2, M = 3, NM;
	float X[2][3] = { {1,2,3}, {4,5,6} }, ** Y, ** Z;
	Y = new float* [N];
	for (int i = 0; i < N; i++) Y[i] = new float[M];
	Z = new float* [N];
	for (int i = 0; i < N; i++) Z[i] = new float[M];
	Y[0][0] = 1;
	Y[0][1] = 0;
	Y[0][2] = 1;
	Y[1][0] = 0;
	Y[1][1] = 2;
	Y[1][2] = 3;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			Z[i][j] = X[i][j] * Y[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << Z[i][j] << "  ";
		}
		cout << endl;
	}
}
