#include<bits/stdc++.h>
using namespace std;


int main(){
int n;cin>>n;
vector<int>v;
for(int i=0;i<n;i++) {int x; cin >>x; v.push_back(x);}

for(int i=0;i<n;i++){

unordered_set<int>s;
for(int j=i+1;j<n;j++){
    int x= -(v[i]+v[j]);
    
if(s.find(x)!=s.end()){
    cout<<v[i]<<" "<<v[j]<<" "<<x<<endl;
}
else s.insert(v[j]);

}

}


    return 0;
}