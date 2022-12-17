#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int calScore(float r){
    if(0.0f<=r && r<=2.0f) return 5;
    else if(2.0f<r && r<=4.0f) return 4;
    else if(4.0f<r && r<=6.0f) return 3;
    else if(6.0f<r && r<=8.0f) return 2;
    else if(8.0f<r && r<=10.0f) return 1;
    else return 0;
}
int main(){
    int n;
    cin >> n;
    int score=0;
    for(int i=0;i<n;i++){
        float x,y,r;
        cin >> x >> y;
        r = sqrt(x*x+y*y);
        score += calScore(r);
    }
        cout << "" << score << "\n" ;
    return 0;
}