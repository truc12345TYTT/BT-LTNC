#include <iostream>

using namespace std;

int main(){
    int n;
    while(true){
        cout << "Nhap n: ";
        cin >> n;
        if (n == -1){
            cout << "bye\n";
            break;
        }else{
            cout << (n%5 == 0)? n/5 : -1;
            cout << endl;
        }
    }
    return 0;
}
