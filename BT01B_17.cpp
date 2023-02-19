/// B01B
///Bai 4

#include <iostream>

using namespace std;

bool LeapYear(int a){
    return (( a%4 == 0 && a%100 )|| (a%400 == 0));
}
int main(){
    int year;
    cin >> year;
    cout << boolalpha << LeapYear(year);
    return 0;
}
