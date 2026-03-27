#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        cout << k + (k / n) << endl; 
    }
    return 0;
}