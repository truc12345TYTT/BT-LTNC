/// B01B
///Bai 5

#include <iostream>
#include <cmath>

using namespace std;

double EuclidDistance(double x1, double y1, double x2, double y2){
    return sqrt( (x1-x2)*(x1-x2) + ( y1 - y2)*(y1-y2));
}
int main(){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << EuclidDistance(x1, y1, x2, y2);
    return 0;
}
