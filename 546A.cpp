#include <iostream>
#include <cmath>

using namespace std;

int main() {
int k, n, w;
cin >> k >> n >> w;
int borrow = 0;
borrow = (k+(k*w))*w/2 - n;
if(borrow < 0){
    borrow = 0;
}
cout << borrow;

return 0;

}
