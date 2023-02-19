/// B01B
///Bai 3

#include <iostream>

using namespace std;

bool checkNumber(int a, int b, int c){
    return (a == b && b == c);
}
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    cout << boolalpha << checkNumber(a,b,c);
    return 0;
}
