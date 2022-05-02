#include <iostream>
#include <queue>
#include <vector>

using namespace std;
// Step 1: Initialize a Boolean array of v nodes and set them to zero
// Step 2: Initialize a queue and push the source node into it.
// Step 3: Iterate the while loop the queue is not empty
// 		A. Pop and store the first element of the queue. And print the element.
// 		B. For all the neighbors check if they have been printed or not.
// 			i. If yes, then continue
// 			ii. If no, push it to the end of the queue.
void insertion()
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
}
void bfs(vector<int> list[], int v, int s)
{
    bool check[v];
    queue<int> q;
    for (int i = 0; i < v; i++)
    {
        check[i] = 0;
    }
    q.push(s);
    check[s] = 1;

    while (!q.empty())
    {
        int store = q.front();
        q.pop();

        if (check[store] == 0)
        {
            cout << store << " ";
            check[store] = 1;
        }
        for (int k = 0; k < list[store].size(); k++)
        {
            if (check[list[store][k]] == 0)
            {
                q.push(list[store][k]);
                check[store] = 1;
            }
        }
    }
    cout << endl;
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
    bfs(list, v, 0);
    return 0;
}
