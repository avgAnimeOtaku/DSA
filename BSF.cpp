#include<bits/stdc++.h>
using namespace std;

class graph
{
    int n;
    vector<vector<int>> V;
    public:
        graph(int n)
        {
            this->n = n;
            V.resize(n);
        }
        void insert(int v, int e)
        {
            V[v].emplace_back(e);
        }
        void BFS(int v)
        {
            vector<int> status(n, 0);
            for(int i = v; i < n; i++)
            {
                

            }
        } 
};

int main()
{
    int n, v;
    cout<<"enter number of vertex -> ";
    cin>>n;
    graph g(n+1);
    g.insert(1, 2);
    g.insert(1, 3);
    g.insert(1, 4);
    g.insert(4, 5);
    g.insert(6, 7);
    g.insert(7, 8);
    cout<<"enter starting vertex - > ";
    cin>>v;
    g.BFS(v);
    return 0;
}
