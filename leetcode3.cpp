// clang++ -std=c++11 leetcode3.cpp -o leetcode3
// ./leetcode3 (use this comman to run this code)


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        
        for (int i = 0; i < numRows; ++i) {
            vector<int> row(i + 1, 1); 
            for (int j = 1; j < i; ++j) {
                row[j] = result[i - 1][j - 1] + result[i - 1][j];
            }
            result.push_back(row);
        }
        
        return result;
    }
};

int main() {
    Solution sol;
    int numRows = 5;
    
    vector<vector<int>> triangle = sol.generate(numRows);
    
    for (const auto& row : triangle) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
