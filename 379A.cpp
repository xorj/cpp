#include <iostream>

using namespace std;

int main() {

int a, b, T = 0, r = 0;
cin >> a>> b;

while(a > 0){
    T += a;
    r += a;
    a = r/b;
    r -= a*b;
}

cout << T;

return 0;
}
