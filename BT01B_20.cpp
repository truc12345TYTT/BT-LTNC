/// B01B
///Bai 6

#include <iostream>
#include <cmath>

using namespace std;

bool Divisibility( int a, int b){
    return ( a%7 == 0 && b%7 == 0);
}
int main(){
    int x, y;
    cin >> x >> y;
    bool b = Divisibility(x, y);
    cout << boolalpha << b;
    return 0;
}
