#include <iostream>

using namespace std;

int main() {
long long int a;
int counter = 0;
int l[10] = {4, 7, 47, 74, 444, 474, 477, 744, 747, 777};
string r = "NO";
cin >> a;

while (a > 0) {
    if(a%10 == 4 || a%10 == 7){
        counter++;
    }
a = a/10;
}

for(int i = 0; i < 10; i++ ){
    if(l[i] == counter){
        r = "YES";
    break;
    }
}
cout << r;

return 0;
}
