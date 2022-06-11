#include <iostream>
#include <vector>
#include <algorithm> // for sort()
#include <bits/stdc++.h>
using namespace std;

void subset(vector<string> arr, int index, vector<string> output, vector<vector<string>> &ans)
{

    if (index >= arr.size())
    {
        ans.push_back(output);
        return;
    }

    // exclude
    subset(arr, index + 1, output, ans);

    // include
    string element = arr[index];
    output.push_back(element);
    subset(arr, index + 1, output, ans);
}

int main()
{
    vector<string> arr;
    vector<string> output;
    vector<vector<string>> ans;

    vector<vector<string>> ans1;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        arr.push_back(temp);
    }

    subset(arr, 0, output, ans);

    for(int i = 0; i<ans.size(); i++){
        vector<vector<string>> ans2;

        for(int j = 0; j<ans.size(); j++){
            if(ans[j].size() == i){
                ans2.push_back(ans[j]);
            }
        }
        sort(ans2.begin(), ans2.end());

        for (int i=0; i<ans2.size(); i++)
            ans1.push_back(ans2[i]);
    }


    int rank = 0;
    string out = "ab";

    auto p=std::lower_bound(ans1[0].begin(), ans1[0].end(), out);
    int position = p - ans1[0].begin();

    cout<<positionm;

    for (int i = 0; i <= ans1.size(); i++)
    {

        for (int j = 0; j < ans1[i].size(); j++)
            cout << ans1[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}