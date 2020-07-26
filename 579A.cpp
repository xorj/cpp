#include <iostream>

using namespace std;

int main() {
int x, C = 1;

cin >> x;

while(x > 1){
        if(x%2 != 0){
            x--;
            C++;
        }

        x/= 2;

}

cout << C;

return 0;
}
