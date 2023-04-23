#include<bits/stdc++.h>
using namespace std;

vector<int, pair<int, int>> 

struct Edge
{
    int from, to, weight;
};

int main()
{
    int n, start;
    cout<<"Enter number of nodes in mst: ";
    cin>>n;
    vector<Edge> edges = {{1, 2, 5}, {1, 3, 9}, {1, 6, 14}, {2, 3, 10}, {2, 4, 15}, {3, 4, 11}, {3, 6, 2}, {4, 5, 6}, {5, 6, 9}};
    cout<<"Enter the starting node: ";
    cin>>start;
    cout<<"MST weight: "<<mst(edges, n, start);
    return 0;
}

int check()

int mst(vector<Edge> edges, int n, int start)
{
    vector<int> P(n, -1);
    vector<int> D(n, 1e9);
    vector<char> S(n, 'T');

    D[start] = 0;

    while()
    {
        Node node = pq.top();
        pq.pop();

        int u = node.vertex;

        for (auto edge : edges)
        {
            if (edge.from == u) 
            {
                int v = edge.to;
                int weight = edge.weight;
                if (key[v] > weight)
                {
                    key[v] = weight;
                    pq.push({v, weight});
                    parent[v] = u;
                }
            }
        }
    }

//greedy approach, adv, disadv, prim, kruskal, greedy