#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
void display(vector<int> list[], int v)
{
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < list[i].size(); j++)
        {
            cout << list[i][j] << " ";
        }
        cout <<endl;
    }
}
int main()
{
    int v;
    cout << "Enter no of vertices ";
    cin >> v;
    int e;
    cout << "Enter no of edges ";
    cin >> e;
    vector<int> list[v];
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cout << "Enter edge from ";
        cin >> x;
        cout << "Enter edge to ";
        cin >> y;

        list[x].push_back(y);
        list[y].push_back(x);
    }
    display(list, v);
}