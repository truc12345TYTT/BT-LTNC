/// B01B
///Bai 6

#include <iostream>
#include <cmath>

using namespace std;

bool Ordered(int a, int b, int c){
    return ( ( a > b && b > c) || ( a < b && b < c));
}
int main(){
    int x, y, z;
    cin >> x >> y >> z;
    bool b = Ordered(x, y, z);
    cout << boolalpha << b;
    return 0;
}
