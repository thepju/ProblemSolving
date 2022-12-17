#include <iostream>
using namespace std;

int main(){
    int N,m,a[301];
    cin >> N;
    //create initial array
    for(int i=0;i<301;i++){
        a[i] = 0;
    }
    //find most value
    int max=-999;
    for(int i=0;i<N;i++){
        cin >> m;
        a[m] += 1;
        if(a[m]>max){
            max=a[m];
        }
    }
    cout<< max<<"\n";

    return 0;
}