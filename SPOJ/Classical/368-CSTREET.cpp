#include<bits/stdc++.h>

using namespace std;
#define MAX 1009
#define pb push_back
#define ll long long


struct weight{
    int u,v,w;
};

int P[MAX],RANK[MAX],VIS[MAX],SIZE;
//vector<int> VERTICES;
//map<int, vector<pair<int,int> > > EDGES;
vector<weight> WEIGHT;

bool level(weight a, weight b){
	return a.w<b.w;
}

void MAKE_SET(){
	for(int i=0;i<=SIZE;i++)
		P[i] = i,RANK[i]=1;
}

int FIND_SET(int u){
	if(P[u]!=u)
		P[u] = FIND_SET(P[u]);
	return P[u];
}

void LINK(int u,int v){
	if(u==v)
		return;
	if(RANK[u]>RANK[v]){
		P[v] = P[u];
		RANK[u] += RANK[v];
	}
	else{
		P[u] = P[v];
		RANK[v] += RANK[u];
	}
}

void UNION(int u, int v){
	LINK(FIND_SET(u),FIND_SET(v));
}

ll MST_KRUSKAL(){
    ll cst=0;
    MAKE_SET();
    sort(WEIGHT.begin(),WEIGHT.end(),level);
	for(int i=0;i<WEIGHT.size();i++){
		if(FIND_SET(WEIGHT[i].u)!=FIND_SET(WEIGHT[i].v)){
			UNION(WEIGHT[i].u,WEIGHT[i].v);
            cst+=WEIGHT[i].w;
		}
	}
    return cst;
}


int main(){
    int t,m,p;
    cin>>t;
    while(t--){
	    cin>>p>>SIZE>>m;
	    for(int i=0;i<m;i++){
    		weight t;
		    cin>>t.u>>t.v>>t.w;
		    WEIGHT.pb(t);
	    }
	    ll cst1 = MST_KRUSKAL();
        cout<<cst1*p<<'\n';
        WEIGHT.clear();
    }
	return 0;
}

