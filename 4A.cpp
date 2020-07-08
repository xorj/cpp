#include <iostream>

using namespace std;

int main()
{
    int m;
    cin >> m;
    if(m % 2 == 0 && m >= 4){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
