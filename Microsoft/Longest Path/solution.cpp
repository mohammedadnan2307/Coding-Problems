#include <iostream>
#include <vector>
using namespace std;

int bfs_longestPath(vector<vector<int>> matrix, vector<int> a, int& root_node)
{
    int v = a.size();
    vector<int> que, height(v, 0);
    que.push_back(root_node);
    while (que.size() != 0)
    {
        for (int i = 0; i < v; ++i)
        {
            if (matrix[que[0]][i] == 1)
            {
                que.push_back(i);
            }
        }
        if (que[0] != root_node)
        {
            height[que[0]] = height[a[que[0]]] + 1;
        }
        que.erase(que.begin());
    }
    int max = 0;
    for (int i = 0; i < v; ++i)
    {
        if (height[i] > max)
        {
            max = height[i];
            root_node = i;
        }
    }
    return max;
}
int solution(string s, vector<int> a)
{
    int v = a.size();
    vector<vector<int>> matrix(v, vector<int>(v, 0));
    for (int i = 0; i < v - 1; ++i)
    {
        for (int j = i + 1; j < v; ++j)
        {
            if (s[i] != s[j])
            {
                if (i == a[j])
                    matrix[i][j] = 1;
                else if (a[i] == j)
                    matrix[j][i] = 1;
            }
        }
    }

    int root_node = -1;
    for (int i = 0; i < v; ++i)
    {
        for (int j = 0; j < v; ++j)
        {
            if (matrix[i][j] == 1)
            {
                root_node = i;
                a[i] = -1;
                break;
            }
        }
        if (root_node != -1)
            break;
    }

    int max = bfs_longestPath(matrix, a, root_node);
    vector<int> b(v, -2);
    int temp = root_node, child;
    b[root_node] = -1;
    while (true)
    {
        child = a[temp];
        if (child == -1)
            break;
        b[child] = temp;
        temp = child;
    }
    for (int i = 0; i < v; ++i)
    {
        if (b[i] == -2)
        {
            for (int j = 0; j < v; ++j)
            {
                if (matrix[j][i] == 1)
                    b[i] = j;
            }
        }
    }
    vector<vector<int>> matrixB(v, vector<int>(v, 0));
    for (int i = 0; i < v; ++i)
    {
        for (int j = i + 1; j < v; ++j)
        {
            if (i == b[j])
                matrixB[i][j] = 1;
            else if (b[i] == j)
                matrixB[j][i] = 1;
        }
    }
    max = bfs_longestPath(matrixB, b, root_node);
    return max + 1;
}
int main()
{
    string s;
    cin >> s;
    const int v = s.length();
    vector <int> a(v);
    for (int i = 0; i < v; ++i)
    {
        cin >> a[i];
    }
    cout << solution(s, a);
    return 0;
}
