#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        vector<long long> A(N);
        for(int i = 0; i < N; i++) cin >> A[i];

        // Minimum: fold left
        long long mn = A[0];
        for(int i = 1; i < N; i++)
            mn = mn + 2 * A[i];

        // Maximum: fold right
        long long mx = A[N-1];
        for(int i = N-2; i >= 0; i--)
            mx = A[i] + 2 * mx;

        cout << mn << " " << mx << "\n";
    }
}
