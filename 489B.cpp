#include <iostream>
#include <algorithm>

using namespace std;

int main() {
int c = 0;
int b;
cin >> b;
int boys[b];

for(int i = 0; i < b; i++){
    cin >> boys[i];
}

int g;
cin >> g;
int girls[g];

for(int i = 0; i < g; i++){
    cin >> girls[i];
}

sort(boys, boys + b);
sort(girls, girls + g);


for(int i = 0; i < b; i++){
    for(int j = 0; j < g; j++){
        if(abs(boys[i] - girls[j]) <= 1){
            girls[j] = -100;
            c++;
            break;
        }

    }
}

cout << c;


return 0;
}
