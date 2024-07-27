class Solution {
public:

    int graph_len = 26;

    vector<vector<int>> builtConvertion(vector<char>& original, vector<char>& changed, vector<int>& cost)
    {
        
        vector<vector<int>> graph(graph_len, vector<int>(graph_len, numeric_limits<int>::max()));

        for(int i = 0; i < graph_len; i++)
        {
            graph[i][i] = 0;
        }

        for(int i = 0; i < cost.size(); i++)
        {
            int from = original[i] - 'a';
            int to = changed[i] - 'a';
            graph[from][to] = min(graph[from][to], cost[i]);
        }
        return graph;
    }

    void floydWarshall(vector<vector<int>>& graph)
    {
        for(int k = 0; k < graph_len; k++)
        {
            for(int i = 0; i < graph_len; i++)
            {
                for(int j = 0; j < graph_len; j++)
                {
                    if(graph[i][k] != numeric_limits<int>::max() && graph[k][j] != numeric_limits<int>::max()) {
                        graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
                    }
                }
            }
        }
        return;
    }

    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {

        auto convertion_graph = builtConvertion(original, changed, cost);
        floydWarshall(convertion_graph);

        long long totalCost = 0;
        for(int i = 0; i < source.size(); i++)
        {
            int from = source[i] - 'a';
            int to = target[i] - 'a';

            if(convertion_graph[from][to] == numeric_limits<int>::max()) {
                return -1;
            }

            totalCost += convertion_graph[from][to];
        }
        return totalCost;
        
    }
};