#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>vp[100000];
vector<int>v[100000];
vector<int>vv;
int vis[10000],dis[100000],par[100000],i,n,e,x,y,w,min_weight,ind=0,child,weight,c,cct,nn;

void da(){

       min_weight=1e8;
for(i=1;i<=n;i++){
       if(vis[i]==0 && dis[i]<min_weight){
                   min_weight=dis[i];
                   ind=i;
       }
}
vis[ind]=1,c++;
for(auto it=vp[ind].begin();it!=vp[ind].end();it++){
              child=it->first,weight=it->second;
if(weight+dis[ind]<dis[child] && vis[child]==0){
       dis[child]=dis[ind]+weight;
}
}
if(c!=n-1)
       da();
}
int main(){
 cout<<endl;
cin>>n>>e;
nn=n;
while(e--){
       cin>>x>>y>>w;
       vp[x].push_back(make_pair(y,w));
        vp[y].push_back(make_pair(x,w));
}
memset(dis,3,sizeof(dis));
dis[1]=0;
da();
for(i=1;i<=n;i++){
       cout<<1<<" to "<<i<<" "<<dis[i]<<endl;
}
}

