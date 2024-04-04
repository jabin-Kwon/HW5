#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int main() {
    const float p = 1.0 / 6.0; // 주사위에서 6이 나올 확률
    const int N = 100000; // 실험 횟수
    const int n = 20; 

    float* geoex = new float[n + 1]();
    float* geotheory = new float[n + 1];

    srand(time(NULL)); // 난수 시드 설정

    for (int nn = 0; nn < N; ++nn) {
        int count = 0;
        for (int j = 0; j < n; ++j) {
            if ((rand() / (float)RAND_MAX) < p) {
                count++;
                geoex[count]++;
            }
            else {
                break;
            }
        }
    }

    for (int k = 1; k <= n; ++k) {
        geoex[k] /= N; // count --> probability
    }

    ofstream xxx("geometric.txt");
    for (int k = 1; k <= n; ++k) {
        geotheory[k] = pow((1 - p), k - 1) * p;
        xxx << k << " " << geotheory[k] << " " << geoex[k] << endl;
    }
    xxx.close();

    delete[] geoex;     
    delete[] geotheory; 

    return 0;
}
