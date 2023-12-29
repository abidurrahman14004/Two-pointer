#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
   
int n,p;
cin>>n;
vector<int> v;
for(int i=0; i<n; i++){
    int x; cin>>x;
    v.push_back(x);
}

cin>>p;
int i=0,j=n-1;
int ind1=0,ind2=0;
int dif= 100;
int sum;
while(i<j){
sum= v[i]+v[j];
if(abs(sum-p)<dif){
ind1=i;
ind2=j;
dif=abs(sum-p);

}if(sum>p)j--;
else i++;

}
cout<<v[ind1]<<" "<<v[ind2]<<" "<<v[ind1]+v[ind2]<< endl;

 
   return 0;
}