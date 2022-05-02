#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void DFSRec(vector<int> list[], int s, bool visited[])
{
    visited[s] = 1;
    cout << s << " ";
    for (int x : list[s])
        if (visited[x] == false)
            DFSRec(list, x, visited);
}
void DFS(vector<int> list[], int v, int s)
{
    bool visited[v];
    for (int i = 0; i > v; i++)
    {
        visited[i] = 0;
    }
    DFSRec(list, s, visited);
    cout << endl;
}
int degree(vector<int> list[], int v)
{
    int degree1[v];
    for (int i = 0; i < v; i++)
    {
        degree1[i] = list[i].size();
        cout << list[i].size() << endl;
    }
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
        list[f].push_back(t);
        list[t].push_back(f);
    }
    degree(list, n);
    return 0;
}