#include <iostream>

using namespace std;

int main() {
int N;
cin >> N;
int a[10] = {4, 7, 47, 74, 444, 474, 477, 744, 747, 777};
string r = "NO";

for(int i = 0; i < 10; i++){
    if(N % a[i] == 0){
        r = "YES";
        break;
    }
}

cout << r << endl;


return 0;

}
