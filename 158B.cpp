#include <iostream>

using namespace std;

int main() {
int n, S = 0, threes = 0, ones = 0, twos = 0;
cin >> n;
int a[n];
for(int i = 0; i < n; i++){
    cin >> a[i];
}
for(int i = 0; i < n; i++){
    if(a[i] == 4){
        S++;
    }
    if(a[i] == 3){
        threes++;
    }
    if(a[i] == 2){
        twos++;
    }
    if(a[i] == 1){
        ones++;
    }
}

while(threes > 0 && ones > 0){
    threes--;
    ones--;
    S++;
}
while(threes > 0){
    threes--;
    S++;
}

S = S + twos/2;
twos = twos%2;

while(twos > 0 && ones > 0){
    twos--;
    if(ones >= 2){
        ones = ones - 2;
        S++;
    } else {
        ones--;
        S++;
    }
}

S = S + twos;
S = S + (ones + 3)/4;

cout << S;


return 0;
}
