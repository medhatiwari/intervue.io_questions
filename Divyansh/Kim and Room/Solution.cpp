#include <bits/stdc++.h>
using namespace std;

pair<int,int> parent[1005][1005];
int sz[1005][1005];
int h,w,q;
int grid[1005][1005];
bool vis[1005][1005];

pair<int,int> root(int u, int v){
    if (parent[u][v].first == -1) return make_pair(u,v);
    return parent[u][v] = root(parent[u][v].first, parent[u][v].second);
}

void connect(int x1, int y1, int x2, int y2){
    pair<int,int> T1 = root(x1,y1), T2 = root(x2,y2);
    if (T1 != T2){ parent[T1.first][T1.second] = T2; sz[T2.first][T2.second] += sz[T1.first][T1.second];}
}

void sol(){
    
    cin >> h >> w >> q;
    for (int i=1; i<=h; i++){
        for (int j=1; j<=w; j++){
            cin >> grid[i][j];
        }
    }
    pair<int,pair<int,int> > srt[h*w];
    for (int i=0; i<h; i++){
        for (int j=0; j<w; j++){
            srt[(i*w)+j] = make_pair(grid[i+1][j+1],make_pair(i+1,j+1));
        }
    }
    sort(srt,srt+(h*w));
    pair<pair<int,int>,pair<int,int> > queries[q];
    for (int i=0; i<q; i++){
        cin >> queries[i].second.first >> queries[i].second.second >> queries[i].first.first;
        queries[i].first.second = i;
    }
    sort(queries,queries+q);
    for (int i=0; i<1005; i++){
        for (int j=0; j<1005; j++){
            sz[i][j] = 1;
        }
    }
    memset(vis,0,sizeof(vis));
    for (int i=0; i<1005; i++){
        for (int j=0; j<1005; j++){
            parent[i][j] = make_pair(-1,-1);
        }
    }
    int ctr=0;
    int ans[q];
    for (int i=0; i<q; i++){
        while (ctr < (h*w)){
            if (srt[ctr].first < queries[i].first.first){
                int x=srt[ctr].second.first,y=srt[ctr].second.second;
                if (vis[x-1][y]) connect(x-1,y,x,y);
                if (vis[x+1][y]) connect(x+1,y,x,y);
                if (vis[x][y-1]) connect(x,y-1,x,y);
                if (vis[x][y+1]) connect(x,y+1,x,y);
                vis[x][y] = 1;
                ctr++;
            }
            else break;
        }
        int u=queries[i].second.first,v=queries[i].second.second;
        if (!vis[u][v]){ ans[queries[i].first.second] = 0; continue;}
        pair<int,int> rt = root(u,v);
        ans[queries[i].first.second] = sz[rt.first][rt.second];
    }
    for (int i=0; i<q; i++) cout << ans[i] << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t; while(t--) sol();
}
