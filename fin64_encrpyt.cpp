#include <iostream>
using namespace std;

int main(){
    int n,s,count;
    int a[20],x=0,ca[20],r=0;
    cin >> n >> s;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=n,j=1;i<20;i++,j++){
        a[i] = j;
    }
    if(s==0){
        for(int j=0;j<20;j++){
            cout << a[r] << " ";
            r+=5;
            if(r>=20){
                r-=19;
            }
        }
        cout << "\n";
    }
    else{
        count = 20-s;
        while(1){
            ca[x] = a[count];
            count++;
            x++;
            if(count==20){
                count = 0;
            }
            if(count == 20-s-1){
                ca[x] = a[count];
                break;
            }
        }
        for(int j=0;j<20;j++){
            cout << ca[r] << " ";
            r+=5;
            if(r>=20){
                r-=19;
            }
        }
        cout << "\n";
    }
    
    return 0;
}