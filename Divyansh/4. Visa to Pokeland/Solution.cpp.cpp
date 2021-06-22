#include <iostream>

using namespace std;

int main() {
    long long int t;
    cin>>t;
    while(t--){
        long long int x1,x2,r1,r2,m1,m2;
        cin>>x1>>x2>>r1>>r2>>m1>>m2;
        if(x1<=x2 && r1<=r2 && m1>=m2){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}