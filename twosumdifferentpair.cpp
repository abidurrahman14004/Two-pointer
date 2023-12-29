#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;

vector<int>v1,v2;
for(int i=0; i<n; i++){
int x;cin>>x;
v1.push_back(x);

}
int m;
cin>>m;
for(int i=0; i<m; i++){
int y;
cin>>y;
v2.push_back(y);
}

int p; cin>>p;


int l=0,r=m-1;
int dif= INT_MAX;
int ind1,ind2;
while(l<n && r>0){
    int sum= v1[l]+v2[r];
    if(abs(sum-p)<dif) {
        dif = abs(sum - p);
        ind1 = l;
        ind2 = r;
    }
    if(sum>p)r--;
    else l++;
}
cout<<ind2<<" "<<ind1<<" "<<v1[ind1]+v2[ind2]<<endl;


    return 0;
}