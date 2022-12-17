#include <iostream>
using namespace std;

int main(){
    int n,a[100000],sp=0,m=-99999,total=0;
    cin >> n;
    for(int i = 0 ;i<n;i++){
        cin >> a[i];
    }
    for(int i = 0 ;i<n;i++){
        if(sp < 2){
         sp++;
        }
        else if(sp >= 2){
            if(a[i] != 0){
                
                total += a[i];
                sp=0;
            }
            else{
                sp++;
            }
        }
    }
    cout << total << "\n";
    return 0;
}