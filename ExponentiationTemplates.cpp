#include<bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
template<typename T>
T exponentiation(T a, T b){
    T k = 1;
    while(b){
        if(b & 1) k = k * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return k;
}
int32_t main()
{
    int a, b;
    cin >> a >> b;
    cout << exponentiation<long long>(a, b) << endl;
    return 0;
}
