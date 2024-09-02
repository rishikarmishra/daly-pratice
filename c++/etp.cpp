#include<iostream>
#include<vector>

using namespace std;
int maxJump ,timeToLive;
bool fun(vector<char>&vec ,int curr ,int timeInWater){
    if(curr >= vec.size())
        return true;
    if(vec[curr] == 'L'){
        
    }else    
        return false;
}

void solve(){
    int n;
    cin>>n>>maxJump>>timeToLive;
    vector<int>vec(n);
    for(int i = 0 ; i < n ; i++)
        cin>>vec[i];


}

int main(){
    int t;
    cin>>t;
    while(t--)
        solve(); 
    return 0;
}

