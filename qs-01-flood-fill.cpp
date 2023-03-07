#include <bits/stdc++.h>
// https://leetcode.com/problems/flood-fill/
// question link.

using namespace std;

void dfs(int i, int j, int start, int node, vector<vector<int>> &image)
{
    int n = image.size();
    int m = image[0].size();

    if (i < 0 || j < 0)
    {
        return;
    }
    if (i >= n || j >= m)
    {
        return;
    }
    if (image[i][j] != start)
    {
        return;
    }
    else
    {
        image[i][j] = node;
        dfs(i - 1, j, start, node, image);
        dfs(i + 1, j, start, node, image);
        dfs(i, j + 1, start, node, image);
        dfs(i, j - 1, start, node, image);
    }
}

vector<vector<int>> floodFill(vector<vector<int>> &image, int i, int j, int color)
{
    int newclr = image[i][j];
    if (newclr != color)
    {
        dfs(i, j, newclr, color, image);
    }
    return image;
}

int main()
{
    vector<vector<int>> image;
    for (int i = 0; i < image.size(); i++)
    {
        cin>>image[]
    }

    return 0;
}