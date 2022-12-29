#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int s[100010];
    long long sum=0;
    int sumj=0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        sum += s[i];
        if(s[i]&1)
            sumj++;
    }
    sort(s, s + n);
    int h;
    if(sumj&1){
        for (int i = 0; i < n; i++) {
        
        if(s[i]&1){
            h=s[i];
            break;
        }
    }
    sum-=h;
    }
    
    cout << sum << endl;
    return 0;
}