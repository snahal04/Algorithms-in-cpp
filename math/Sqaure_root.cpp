// Newton Rapshon Method

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    double x = n;
    double root = 0;
    while(1){
        root = 0.5*(x + (n/x));
        if(abs(root-x)<0.01)break;
        x = root;
    }
    cout<<root<<endl;
}

int main(){
    solve();
}


