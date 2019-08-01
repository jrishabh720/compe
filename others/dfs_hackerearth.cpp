 #include <iostream>
   #include <vector>
    using namespace std;

//    vector <int> adj[10];
//    bool visited[10];

    void dfs(int s, int** adj, bool* visited,int n) {
        visited[s] = true;
        cout<<s<<" ";
        for(int i = 0;i<n;++i)    {
         if(visited[adj[s][i]] == false)
             dfs(adj[s][i],adj,visited,n);
        }
    }

    void initialize(int nodes, bool* visited) {
        for(int i = 0;i <= nodes;++i)
         visited[i] = false;
    }

    int main() {
    	int p=0;
    	int q = 0;
    	
        int nodes, edges, x, y, connectedComponents = 0;
        cin >> nodes;                       //Number of nodes
        cin >> edges; 
		int** adj = new int*[nodes]; 
		bool* visited = new bool[nodes];                     //Number of edges
        for(int i = 0;i < edges;++i) {
         cin >> x >> y;     
      //Undirected Graph 
         adj[x][p] = (y);
		 p++;                   //Edge from vertex x to vertex y
         adj[y][q] = (x);  
		 q++;                 //Edge from vertex y to vertex x
        }

        initialize(nodes,visited);                           //Initialize all nodes as not visited

        for(int i = 1;i <= nodes;++i) {
         if(visited[i] == false)     {
             dfs(i,adj,visited,nodes);
            // connectedComponents++;
         }
        }
        cout<<endl;
        
        return 0;
    }
