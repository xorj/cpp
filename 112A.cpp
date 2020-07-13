#include <iostream>

using namespace std;

int main() {
string A, B;
int r = 0;
cin >> A >> B;

    for(int i = 0; i < A.length() ; i++){
        if(tolower(A[i]) > tolower(B[i])){
            r = 1;
            break;
        } else if (tolower(A[i]) < tolower(B[i])){
              r = -1;
            break;
        }

    }
cout << r;
return 0;
}
