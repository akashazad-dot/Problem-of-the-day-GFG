class Solution{
public:
    vector<vector<int>> transitiveClosure(int N, vector<vector<int>> graph)
    {
        // code here
        for(int k=0;k<N;k++)
          for(int i=0;i<N;i++)
             for(int j=0;j<N;j++)
             {
                 if(i==j) graph[i][j]=1;
                 if(graph[i][j]==0 && graph[i][k]==1 && graph[k][j]==1)
                    graph[i][j]=1;
             }
        return graph;
    }
};
