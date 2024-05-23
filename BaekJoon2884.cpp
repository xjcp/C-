#include <iostream>
using namespace std;

int main() {
    const int time = 60;
    int H, M;
    cin >> H;
    cin >> M;
    M = (H * time) + M;
    M = M - 45;
    if (M < 0) {
        M = M + (24 * time);
    }
    H = M / time;
    M = M % time;
    cout << H << endl;
    cout << M << endl;
}