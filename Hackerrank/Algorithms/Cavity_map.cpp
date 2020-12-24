#include <bits/stdc++.h>

using namespace std;

// Complete the cavityMap function below.
vector<string> cavityMap(vector<string>& grid) {

    for(int i = 0; i < grid.size(); i++) {
        for(int j = 0; j < grid[i].size(); j++) {
            if(i != 0 && i != grid.size() - 1 && j != 0 && j != grid[i].size() - 1) {
                if(grid[i][j] > grid[i][j + 1] && grid[i][j] > grid[i][j - 1] && grid[i][j] > grid[i + 1][j] && grid[i][j] > grid[i - 1][j] && i + 1 < grid.size() && j + 1 < grid[i].size() && j - 1 > -1) {
                    grid[i][j] = 'X';
                }
            }
        }
    }
    return grid;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> grid(n);

    for (int i = 0; i < n; i++) {
        string grid_item;
        getline(cin, grid_item);

        grid[i] = grid_item;
    }

    vector<string> result = cavityMap(grid);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
