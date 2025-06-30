#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int largest(vector<int> &arr) {
        int largeste = arr[0];
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] > largeste) {
                largeste = arr[i];
            }
        }
        return largeste;
    }
};

int main() {
    vector<int> arr = {10, 40, 20, 80, 60};
    Solution sol;
    int result = sol.largest(arr);
    cout << "Largest element is: " << result << endl;
    return 0;
}
