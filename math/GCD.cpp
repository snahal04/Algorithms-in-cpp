//Euclidean algorithm
//TC = O(log(min(a,b))
#include<bits/stdc++.h>
using namespace std;


int gcd(int a, int b){
    return b==0? a:gcd(b,a%b);
}
void solve(){
    int n,m; cin>>n>>m;
    cout<<gcd(n,m)<<endl;
}
int main(){
    solve();
}


