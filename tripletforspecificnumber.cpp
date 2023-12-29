#include<bits/stdc++.h>
using namespace std;


int main(){
int n;cin>>n;
vector<int>v;
for(int i=0;i<n;i++) {int x; cin >>x; v.push_back(x);}
sort(v.begin(),v.end());
int p;cin>>p;


for (int i=0;i<n;i++){

int l=i+1;
int r=n-1;
while(l<r){

int sum= v[i]+v[l]+v[r];
if(sum==p){
    
    cout<< v[i]<<" "<<v[l]<<" "<<v[r]<<endl;
}
 if(sum>p)r--;
 else l++;

}


}


    return 0;
}