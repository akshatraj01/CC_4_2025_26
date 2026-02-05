#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        if(n <= 3) {
            cout << -1 << "\n";
            continue;
        }

        vector<int> ans;

        for(int i=1;i<=n;i+=2)
            ans.push_back(i);

        for(int i=4;i<=n;i+=4){
            ans.push_back(i);
            ans.push_back(i-2);
        }

        if(n%4!=0)
            ans.push_back(2);

        for(int x:ans)
            cout <<x<<" ";
    }

    return 0;
}
