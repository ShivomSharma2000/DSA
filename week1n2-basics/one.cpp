#include <iostream>
#include <vector>
using namespace std;

void warshallAlgorithm(vector<vector<int>> &graph)
{
    int n = graph.size();

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                graph[i][j] = graph[i][j] || (graph[i][k] && graph[k][j]);
            }
        }
    }
}

void printMatrix(vector<vector<int>> &graph)
{
    int n = graph.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> graph = {
        {1, 1, 1, 0, 0},
        {0, 1, 1, 0, 0},
        {1, 1, 1, 1, 0},
        {0, 0, 0, 1, 1},
        {0, 0, 1, 0, 1}};

    warshallAlgorithm(graph);

    // Print the resulting matrix
    cout << "Transitive closure of the graph:" << endl;
    printMatrix(graph);

    return 0;
}
