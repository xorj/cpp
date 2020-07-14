#include <iostream>

using namespace std;

int main() {
    string P;
    cin >> P;
    string R = "NO";
    int counter = 1;
    for(int i = 1; i < P.length(); i++){

        if(P[i-1] == P[i]){
            counter++;
        } else {
        counter = 1;
        }
        if(counter >= 7){
            R = "YES";
            break;
        }

    }

    cout << R;



return 0;
}
