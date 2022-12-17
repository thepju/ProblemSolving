#include <iostream>
#include <cmath>

using namespace std;

int main(){
    char Ar[150];
    int i=0,p,x=0,y=0;
    for(p=0;p<150;p++){
        Ar[p]='O';
    }
    cin >> Ar;
    while(true){
        if(Ar[i]=='N'){
            y +=1;
        }else if(Ar[i]=='S'){
            y-=1;
        }else if(Ar[i]=='E'){
            x+=1;
        }else if(Ar[i]=='W'){
            x-=1;
        }else if(Ar[i]=='Z'){
            x=0;
            y=0;
        } 
        i++;
        if(Ar[i]=='O'){
            break;
        }
    }
    cout << x <<" "<<y;
}