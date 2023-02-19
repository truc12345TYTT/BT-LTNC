/// B01B
///Bai 2

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));
    int the1 = rand()%101, the2 = rand()%101;
    if ( the1 < 50 ) cout << the2 << '\n';
    else cout << the1 << '\n';
    cout << "2 the lan luot la " << the1 << ' ' << the2;
    return 0;
}
