#include <iostream>
using namespace std;

int main() {
    const int time = 60;
    int H, M, oven;
    cin >> H;
    cin >> M;
    cin >> oven;
    M = (H * time) + M;
    M = M + oven;
    if (M >= (24 * time)) {
        M = M - (24 * time);
    }
    H = M / time;
    M = M % time;
    cout << H << endl;
    cout << M << endl;
}