// A simple representation of graph using STL 
#include<bits/stdc++.h> 
using namespace std; 

// A utility function to add an edge in an 
// undirected graph. 
void addEdge(vector<int> adj[], int u, int v) 
{ 
	adj[u].push_back(v); 
	adj[v].push_back(u); 
} 

// A utility function to print the adjacency list 
// representation of graph 
void printGraph(vector<int> adj[], int V) 
{ 
	for (int v = 0; v < V; ++v) 
	{ 
		cout << "\n Adjacency list of vertex "
			<< v << "\n head "; 
		for (auto x : adj[v]) 
		cout << "-> " << x; 
		printf("\n"); 
	} 
} 

// Driver code 
int main() 
{ 
	cout<<"Enter number of nodes for Tree Tropology";
    int V;
    cin>>V; 
	vector<int> adj[V]; 

    //Let's take first node(i.e.,node0) as head node...
    for(int i=0;i<floor(log2(V))+1;i++)
    {
        if((i*2+1) < V)
            addEdge(adj,i,(i*2)+1);
         if((i*2+2) < V)
            addEdge(adj,i,(i*2)+2);   
    }
 
	printGraph(adj, V); 
	return 0; 
} 

