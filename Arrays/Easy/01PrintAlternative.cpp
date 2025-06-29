#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> getAlternates(vector<int> &arr) {
        vector<int> result;
        for (int i = 0; i < arr.size(); i += 2) {
            result.push_back(arr[i]);
        }
        return result;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {10, 20, 30, 40, 50};
    vector<int> res = sol.getAlternates(arr);
    for (int num : res) {
        cout << num << " ";
    }
    return 0;
}
