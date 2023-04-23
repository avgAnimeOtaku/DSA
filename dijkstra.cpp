#include <iostream> 
#include <vector> 
#include <queue> 
using namespace std; 

const int N = 1e5+5; 
const int INF= 1e9; 

struct Edge 
{ 
    int to, weight; 
    Edge(int to, int weight)
    {
        this->to = to;
        this->weight = weight;
    } 
};

int n, m; 
vector<Edge> g[N]; 

vector<int> dijkstra() 
{ 
    vector<int> dist(n+1, INF), visited(n+1, 0); 
    priority_queue<pair<int, int>> q; 
    dist[1] = 0;
    q.push({0, 1});
    vector<int> ans;
    while(!q.empty())
    {
        int v = q.top().second;
        q.pop();
        if(visited[v]) 
            continue; 
        visited[v] = 1; 
        ans.push_back(v); 
        for(auto e: g[v])
        { 
            if(dist[e.to] > e.weight) 
            { 
                dist[e.to] = e.weight; 
                q.push({-e.weight, e.to}); 
            } 
        } 
    } 
    return ans; 
} 
int main() 
{ 
    cin>>n>>m;
    for(int i = 0; i < m; i++) 
    { 
        int a, b, w; 
        cin>>a>>b>>w; 
        g[a].push_back(Edge(b,w)); 
        g[b].push_back(Edge(a,w)); 
    } 
    vector<int> ans = dijkstra();
    for(int i : ans)
    {
        cout<<i<<" ";
    }
    return 0; 
}