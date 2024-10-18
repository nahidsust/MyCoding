#include<bits/stdc++.h>
using namespace std;
#define sz 1000009
vector<int>v[sz];
int n,e,x,y,i,indegree[sz],fnt;
queue<int>q;

int main(){
cin>>n>>e;
while(e--){
       cin>>x>>y;
       v[x].push_back(y);
       indegree[y]+=1;
}
for(i=1;i<=n;i++){
  if(indegree[i]==0)
       q.push(i);
}
while(!q.empty()){

fnt=0;
   fnt=q.front();
cout<<fnt<<" ";
   q.pop();

       for(auto child:v[fnt]){
              indegree[child]-=1;
              if(indegree[child]==0)
                     q.push(child);
       }

}

return 0;
}
