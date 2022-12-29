#include <iostream>
using namespace std;

int main() {
int t;
cin >> t;
while (t--){
    int n, counts =0;
    cin >> n;
    for (int i = 1; i<=9; i++){
        long long temp = i;
        while(n>=temp){
            counts++;
            temp = temp * 10 + i;
            
        }
    }
    cout << counts << endl;
}
}