#include <iostream>

using namespace std;

int main(){
    for (int i = 0; i < 24; i++){
        if (i == 0) cout << i + 12 << " midnight\n";
        if (i > 0 && i < 12) cout << i << "am\n";
        if (i == 12) cout << i << " noon\n";
        if (i > 12) cout << i - 12 << "pm\n";
    }
}
