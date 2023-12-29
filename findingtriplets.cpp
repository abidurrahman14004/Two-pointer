#include<bits/stdc++.h>
using namespace std;


int main(){
int n;cin>>n;
vector<int>v;
for(int i=0;i<n;i++) {int x; cin >>x; v.push_back(x);}

for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        for(int k=j+1;k<n;k++){
            if(v[i]+v[j]+v[k]==0){
                
                cout<<v[i]<<" "<<v[j]<<" "<<v[k]<<endl;
            }
        }
    }
}


    return 0;
}