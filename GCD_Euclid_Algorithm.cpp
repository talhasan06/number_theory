#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    // special case
    if(a<b){
        return gcd(b,a);
    }
    // base case
    if(b==0){
        return a;
    }
    // answer step
    return gcd(b,a%b);
}

int main(){
    int a=134820;
    int b=124820;
    int ans=gcd(a,b);
    cout<<ans<<endl;
    return 0;
}