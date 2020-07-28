#include <iostream>
#include <cmath>
using namespace std;

int main() {
int n, S = 1;
const char *r[5] = { "Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
cin >> n;

while(5*(pow(2, S)-1) <= n){
    S++;
}
if(floor(((n - 5*(pow(2, S -1)- 1))-1)/pow(2, S-1)) == -1){
    cout << "Howard" << endl;
} else {
cout << r[(int)floor(((n - 5*(pow(2, S -1)- 1))-1)/pow(2, S-1))]<< endl;
}
return 0;
}
