#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int n,ans=0;
    cin >> n;
    for(int i=0;i<n;i++){
        int m;
        cin >> m;
        if(m>0) ans += m;
    }
    cout << ans;
    return 0;
}