#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> overlappingele(vector<vector<int>> arr)
{
    int n = arr.size();
    vector<vector<int>> answer;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {

        if (answer.empty() || arr[i][1] >= answer.back()[1])
        {
            answer.push_back(arr[i]); // new start krna
        }
        else
        {
            answer.back()[1] = max(answer.back()[1], arr[i][1]); // previous nu hi expand krna..
        }
    }
    return answer;
}
int main()
{
    int x, y;
    cin >> x >> y;
    vector<vector<int>> arr(x, vector<int>(y));
    for (int i = 0; i < x; i++)
    {
        {
            for (int j = 0; j < y; j++)
            {
                cin >> arr[i][j];
            }
        }
    }
    vector<vector<int>> answer = overlappingele(arr);
    for (auto it : answer)
    {
        for (auto val : it)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}