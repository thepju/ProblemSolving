#include <iostream>
using namespace std;

int main(){
    int N,K,T;
    cin >> N >> K >> T;
    int a[N+1];

    for(int i = 0;i<=N;i++){
        a[i] = 0;
    }

    int ini =1,last;
    a[ini] = 1;

    while(1){
        ini = (ini+K)%N;
        if(ini==0){ini=N;}
        // cout << ini<<"\n";
        if(ini==1){break;}
        else{
            a[ini] =1;
        }
        last = N-1;
        if(ini == T){
            a[ini]=1;
            break;
        }
    }
    int count=0;
    for(int i=1;i<=N;i++){
        if(a[i]==1){
            count ++;
        }
    }
    cout << count << "\n";
    return 0 ;
}