#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> solve(int n, int i, int j)
{

    vector<vector<int>> ans;

    vector<int> output;
    output.push_back(i);
    output.push_back(j);
    ans.push_back(output);

    // left top
    int tempI = i, tempJ = j;
    while (tempI >= 0 && tempI < n && tempJ >= 0 && tempJ < n)
    {
        tempI = tempI - 1; tempJ = tempJ - 1;
        if (tempI >= 0 && tempI < n && tempJ >= 0 && tempJ < n)
        {
            vector<int> output;
            output.push_back(tempI);
            output.push_back(tempJ);
            ans.push_back(output);
        }
    }

    // right down
    tempI = i, tempJ = j;
    while (tempI < n && tempJ < n)
    {
        tempI = tempI + 1; tempJ = tempJ + 1;
        if (tempI >= 0 && tempI < n && tempJ >= 0 && tempJ < n)
        {
            vector<int> output;
            output.push_back(tempI);
            output.push_back(tempJ);
            ans.push_back(output);
        }
    }

    // right top
    tempI = i, tempJ = j;
    while (tempI >= 0 && tempI < n && tempJ >= 0 && tempJ < n)
    {
        tempI = tempI - 1; tempJ = tempJ + 1;
        if (tempI >= 0 && tempI < n && tempJ >= 0 && tempJ < n)
        {
            vector<int> output;
            output.push_back(tempI);
            output.push_back(tempJ);
            ans.push_back(output);
        }
    }

    // left down
    tempI = i, tempJ = j;
    while (tempI < n && tempJ < n)
    {
        tempI = tempI + 1; tempJ = tempJ - 1;
        if (tempI >= 0 && tempI < n && tempJ >= 0 && tempJ < n)
        {
            vector<int> output;
            output.push_back(tempI);
            output.push_back(tempJ);
            ans.push_back(output);
        }
    }
    return ans;
}

int main()
{
    int i = 1, j = 1;
    int n = 3;
    vector<vector<int>> ans = solve(n, i, j);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
            cout << " " << ans[i][j];
        cout << endl;
    }
}