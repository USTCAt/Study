#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
#define M_PI 3.14159265358979323846
struct Point { double x, y; };

bool comparePoints(Point a, Point b) {
    // 第一步：算弧度（先y后x）
    double radA = atan2(a.y, a.x);
    double radB = atan2(b.y, b.x);
    double dirA = M_PI/2 - radA;
    double dirB = M_PI/2 - radB;
    if (dirA < 0) {
        dirA = dirA + 2*M_PI;
    }
    if (dirB < 0) {
        dirB = dirB + 2*M_PI;
    }
    bool isAngleDifferent = (fabs(dirA - dirB) > 1e-6);
    if (isAngleDifferent) {
        return dirA < dirB;
    } else {
        double distA = a.x*a.x + a.y*a.y;
        double distB = b.x*b.x + b.y*b.y;
        return distA < distB;
    }
}
int main() {
    vector<Point> ps = {{1,0}, {0,-1}, {2,0}, {1,1}};
    sort(ps.begin(), ps.end(), comparePoints);
    for (auto p : ps) {
        cout << "(" << p.x << "," << p.y << ") ";
    }
    return 0;
}