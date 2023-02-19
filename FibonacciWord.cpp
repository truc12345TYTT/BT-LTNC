/// B01B
///Bai 3

#include <iostream>
#include <string>

using namespace std;

string fibonaciWord(int n){
    string res = "";
    if ( n == 0) return "a";
    if ( n == 1) return "b";
    if ( n > 1)
    return fibonaciWord(n-1) + fibonaciWord(n-2);
}

int main(){
    int n;
    cin >> n;
    cout << fibonaciWord(n);
    return 0;
}
