#include <vector>
#include <iostream>
#include <set>
#include <list>
#include <climits>
using namespace std;

struct Edge {int to, cost;};
int main() {
/*
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
*/
    int n, m, s;
    cin >> n >> m;
    vector<list<Edge> >  adj_list(n, list<Edge>());
    set<pair<int, int> > remaining; // <cost, vertex_idx>
    set<int>             added;
    vector<Edge>         mst;
    vector<int>          min_cost(n, INT_MAX);
    
    for (int i = 0; i < m; ++i) {
        int x,y,r;
        cin >> x >> y >> r;
        --x; --y;
        adj_list[x].push_back(Edge{y, r});
        adj_list[y].push_back(Edge{x, r});        
    }
    cin >> s;
    min_cost[--s] = 0;
    for (int i = 0; i < n; ++i)
        remaining.insert({min_cost[i], i});
    
    long mst_cost = 0;
    while (!remaining.empty()) {
        int next     = remaining.begin()->second;
        mst_cost    += min_cost[next];
        added.insert(next);
        remaining.erase(remaining.begin());
        for (auto& ed: adj_list[next]) {
            // Consider only nodes not added yet
            if (added.count(ed.to) == 1)
                continue;  // 
            int curr_min = min_cost[ed.to];
            if (ed.cost < curr_min) {
                remaining.erase({curr_min, ed.to});
                min_cost[ed.to] = ed.cost;
                remaining.insert({min_cost[ed.to], ed.to});
            }            
        }
    }
    cout << mst_cost;
    return 0;
}
