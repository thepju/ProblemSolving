#include <iostream>
using namespace std;

int main(){
    int n,count=0; 
    cin >> n ;
    int next[100011],i,check[100011],now[100011][n+1];
    // next player
    for(i=1;i<=n;i++){
        cin >> next[i];
    }
    //round 0 
    for(i=1;i<=n;i++){
        now[0][i] = i;
        check[i] = 0;
    }
    
    //round 1++
    for(i=1;i<=100000;i++){
        for(int j=1;j<=n;j++){
            now[i][next[j]] = now[i-1][j];
        }
    }
    //check
    for(i=1;i<=100000;i++){
        for(int j=1;j<=n;j++){
            // cout << now[i][j] << " " ;
            if(now[i][j] == j){
                // cout << "j is" << j <<"\n";
                if(check[j] != 1){
                    check[j] = 1;
                    count += 1;
                    // cout << "j is" << j <<"\n";
                }
                if(count == n){
                        break;
                }
            }
        }
        // cout << "\n";
        if(count == n) {
            cout << i << "\n";
            break;
        }

    }
    // for(int i=0;i<n;i++){s
    //     cout << "chekcis " << check[i]<< "\n";
    // }



    return 0;
}