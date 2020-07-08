#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i <= n; i++){
       string w;
        cin >> w;
        if( w.length() <= 10){
            cout << w<< endl;
        } else {
             cout << w.at(0) << w.length() - 2 << w.at(w.length() -1 )<< endl;
        }
    }
    return 0;
}
