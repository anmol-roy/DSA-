#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotateLeft(vector<int> &arr) {
        
        
        int temp = arr[0];
        int n = arr.size();

        for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
        }

        arr[n - 1] = temp;
    }
};

int main() {
    Solution obj;
    vector<int> arr = {1, 2, 3, 4, 5};

    obj.rotateLeft(arr);  // left rotate

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
