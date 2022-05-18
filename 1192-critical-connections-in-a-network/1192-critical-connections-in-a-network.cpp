class Solution {
public:
    const int N = 1e5;
    int n_nodes, n_edges, time = 1;
    vector<vector<int>> g, ans;
    vector<int> firstTime, minTime, visited;
    
    void dfs(int node, int parent = -1) {
        firstTime[node] = minTime[node] = time++;
		visited[node] = true;
        
        for (int neg : g[node]) {
            if (neg == parent) continue;
            if (!visited[neg])
                dfs(neg, node);
            
            minTime[node] = min(minTime[neg], minTime[node]);
            
            if(firstTime[node] < minTime[neg])
				ans.push_back({node, neg});
        }
    }
    
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        firstTime.resize(n), minTime.resize(n), visited.resize(n), g.resize(n);

        for (auto i : connections)
        {
            g[i[0]].push_back(i[1]);
            g[i[1]].push_back(i[0]);
        }

        dfs(0);
        return ans; 
    }
    
    
};