// C++ program to count non-reachable nodes 
// from a given source using DFS. 
#include <iostream> 
#include <list> 
using namespace std; 
  
// Graph class represents a directed graph 
// using adjacency list representation 
class Graph { 
    int V; // No. of vertices 
  
    // Pointer to an array containing 
    // adjacency lists 
    list<int>* adj; 
  
    // A recursive function used by DFS 
    void DFSUtil(int v, bool visited[]); 
  
public: 
    Graph(int V); // Constructor 
  
    // function to add an edge to graph 
    void addEdge(int v, int w); 
  
    // DFS traversal of the vertices 
    // reachable from v 
    int countNotReach(int v); 
}; 
  
Graph::Graph(int V) 
{ 
    this->V = V; 
    adj = new list<int>[V]; 
} 
  
void Graph::addEdge(int v, int w) 
{ 
    adj[v].push_back(w); // Add w to v’s list. 
    adj[w].push_back(v); // Add v to w's list. 
} 
  
void Graph::DFSUtil(int v, bool visited[]) 
{ 
    // Mark the current node as visited and 
    // print it 
    visited[v] = true; 
  
    // Recur for all the vertices adjacent 
    // to this vertex 
    list<int>::iterator i; 
    for (i = adj[v].begin(); i != adj[v].end(); ++i) 
        if (!visited[*i]) 
            DFSUtil(*i, visited); 
} 
  
// Returns count of not reachable nodes from 
// vertex v. 
// It uses recursive DFSUtil() 
int Graph::countNotReach(int v) 
{ 
    // Mark all the vertices as not visited 
    bool* visited = new bool[V]; 
    for (int i = 0; i < V; i++) 
        visited[i] = false; 
  
    // Call the recursive helper function 
    // to print DFS traversal 
    DFSUtil(v, visited); 
  
    // Return count of not visited nodes 
    int count = 0; 
    for (int i = 0; i < V; i++) { 
        if (visited[i] == false) 
            count++; 
    } 
    return count; 
} 
  
int main() 
{ 
    // Create a graph given in the above diagram 
    Graph g(10); 
    g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(1, 2); 
    g.addEdge(3, 4); 
    g.addEdge(4, 5); 
    g.addEdge(6, 7); 
    g.addEdge(8,9);
    cout << g.countNotReach(2); 
  
    return 0; 
} 
