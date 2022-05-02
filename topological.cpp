#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int indegree(vector<int> list[], int v, int s)
{
    int count = 0;
    for (int i = 0; i < v; i++)
    {
        for (int x : list[i])
        {
            if (x == s)
            {
                count++;
            }
        }
    }
    return count;
}
void TopologicalSort(vector<int> list[], int v)
{
    int indegrees[v];
    for (int i = 0; i < v; i++)
        indegrees[i] = indegree(list, v, i);
    queue<int> q;
    for (int i = 0; i < v; i++)
        if (indegrees[i] == 0)
        {
            q.push(i);
        }
    // bfs
    while (!q.empty())
    {
        int store = q.front();
        q.pop();
        cout << store << " ";
        for (int x : list[store])
        {
            indegrees[x]--;
            if (indegrees[x] == 0)
            {
                q.push(x);
            }
        }
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter no of vertices ";
    cin >> n;
    vector<int> list[n];

    for (int i = 0; i < n; i++)
    {
        int f, t;
        cout << "Enter vertice from ";
        cin >> f;
        cout << "Enter vertice to ";
        cin >> t;
    }
    TopologicalSort(list, n);
}