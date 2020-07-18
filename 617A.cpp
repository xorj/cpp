#include <iostream>

using namespace std;
int main() {
int p, c = 0;
cin >> p;
c = c + p/5;
p = p%5;
c = c + p/4;
p = p%4;
c = c + p/3;
p = p%3;
c = c + p/2;
p = p%2;
c = c + p;

cout << c;

return 0;
}
