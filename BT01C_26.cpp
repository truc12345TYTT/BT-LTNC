#include<iostream>

using namespace std;

int main(){
    cout << "Nhap so n: ";
    int n; cin >> n;
    int x, temp = n;
    cin >> x;
    n --;
    int Max = x, Min = x;
    double Mean = x;
    while(n--){
        cin >> x;
        Mean += x;
        if (x > Max) Max = x;
        if (x < Min) Min = x;
    }
    Mean = 1.0*Mean/temp;
    cout << "\nmax : " << Max;
    cout << "\nmin : " << Min;
    cout << "\nmean: " << Mean;
    return 0;
}
