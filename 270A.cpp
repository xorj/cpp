#include <iostream>
#include <cmath>
using namespace std;

int main() {

int n;
cin >> n;
for(int i = 0; i < n; i++){
int a;
cin >> a;
if(a >= 60 && a <= 179){
    float s = (float) 360 / (180 - a);

    if(ceil(s) == s && floor(s) == s){
        cout << "YES"<< endl;
    } else {
        cout << "NO"<< endl;
    }



} else {
cout << "NO"<< endl;
}

}

return 0;
}
