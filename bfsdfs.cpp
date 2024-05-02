#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void printGraph(int arr[5][5], int n)
{
    cout << "Adjacency Matrix :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "\t";
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void BFS(int arr[5][5], int n, int start)
{
    cout << "BFS graph traversal :" << endl;
    queue<int> q;
    bool visited[5] = {false};
    q.push(start);
    visited[start] = true;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        cout << node + 1 << " ";
        for (int i = 0; i < n; i++)
        {
            if (arr[node][i] == 1 && !visited[i])
            {
                q.push(i);
                visited[i] = true;
            }
        }
        cout << endl;
    }
}

void DFS(int arr[5][5], int n, int start)
{
    cout << "DFS graph traversal :" << endl;
    stack<int> s;
    s.push(start);
    bool visited[5] = {false};
    while (!s.empty())
    {
        int node = s.top();
        s.pop();

        if (!visited[node])
        {
            cout << node + 1 << " ";
            visited[node] = true;
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[node][i] == 1 && !visited[i])
            {
                s.push(i);
            }
        }
        cout << endl;
    }
}
int main()
{
    int arr[5][5] = {
        {0, 1, 0, 1, 1},
        {1, 0, 1, 0, 1},
        {0, 1, 0, 1, 0},
        {1, 0, 0, 0, 0},
        {1, 1, 0, 1, 0},
    };
    int ch;
    do
    {
        cout << "\n===============================================" << endl;
        cout << "1. Display Graph" << endl;
        cout << "2. BFS Traversal" << endl;
        cout << "3. DFS Traversal" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            printGraph(arr, 5);
            break;

        case 2:
            int start;
            cout << "Enter the starting node for traversal :" << endl;
            cin >> start;
            BFS(arr, 5, start);
            break;

        case 3:
            int start1;
            cout << "Enter the starting node for traversal :" << endl;
            cin >> start1;
            DFS(arr, 5, start1);
            break;

        case 4:
            cout << "Exiting the program!!!!!!" << endl;

        default:
            cout << "INvalide input ,bitch!" << endl;
            break;
        }
    } while (ch != 4);
    cout << "Thank You" << endl;

    return 0;
}