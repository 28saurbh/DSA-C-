#include <iostream>
#include <vector>
using namespace std;

int polygon(int n, vector<int> x, vector<int> y)
{
    vector<int> cnt(1000, 0);
    vector<int> ans(n, 0);
    vector<vector<int>> v(1000, vector<int> (1000, 0)) ;

    for (int i = 0; i < n; i++)
    {
        int temp_x = x[i];
        int temp_y = y[i];

        if(cnt[temp_x] < 3){
            cnt[temp_x] += 1;
        }
    }

    // for(int row = 0; row < 1000; row++){
    //     for(int col = 0; col < 1000; col++){
    //         if(v[row][col] > 0 && v[row][col] < 3)
    //             cnt[row] += 1;
    //     }
    // }

    int sum = 0;
    for(int i = 0; i<1000; i++){
        if(cnt[i] > 2){
            cnt[i] = 2;
        }
        
        sum += cnt[i];
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;

    vector<int> x;
    vector<int> y;

    for (int i = 0; i < n; i++)
    {
        int k, j;
        cin >> k >> j;
        x.push_back(k);
        y.push_back(j);
    }
    cout<<polygon(n, x, y);
}