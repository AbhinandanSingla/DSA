#include <iostream>
#include <vector>

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
    DFS(list, n, 0);
}