#include <iostream>
#include<vector>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cout<<"";
        cin>>n;
        cout<<"";
        int A[n];
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A[i] = x;
        }
        int sum = 28;
        int c;
        for(int i=0;i<n;i++){
            if(sum==0){
                i=n;
            }
            else if(A[i]<=7){sum = sum-A[i];
            c = i+1;
            }
        }
        cout<<c<<endl;
    }
}
