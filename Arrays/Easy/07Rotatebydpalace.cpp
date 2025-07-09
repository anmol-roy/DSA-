#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotateLeft(vector<int> &arr,int d) {
        // int n = arr.size();
        // d=d%n;
        // vector<int>tempArr;
        

        // for (int i = 0;i<d;i++){
        //     tempArr.push_back(arr[i]);
        // }
        // for (int i = d; i < n ; i++) {
        // arr[i-d] = arr[i];
        
        // }
        // for(int i = n-d; i < n; i++) {
        // arr[i] = tempArr[i-(n-d)];
        // }
        
    }
};

int main() {
    Solution obj;
    vector<int> arr = {1, 2, 3, 4, 5};
    //              Input: arr[] = [1, 2, 3, 4, 5], d = 2
                        // Output: [3, 4, 5, 1, 2]
    int d = 2;

    obj.rotateLeft(arr,d);  // left rotate

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
