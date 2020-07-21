#include <iostream>

using namespace std;

int main() {
int a,b,c, m = 0;

cin >> a >> b >> c;

m = max(a*b*c, m);
m = max(a+b+c, m);
m = max(a*(b+c), m);
m = max((a+b)*c, m);

cout << m ;

return 0;
}
