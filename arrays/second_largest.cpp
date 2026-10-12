#include <iostream>
#include <vector>
using namespace std;

int secondLargest(vector<int>& nums) {
    int largest = nums[0];
    int second = -1;

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > largest) {
            second = largest;
            largest = nums[i];
        }
        else if (nums[i] < largest) {
            if (second == -1 || nums[i] > second) {
                second = nums[i];
            }
        }
    }

    return second;
}

int main() {
    vector<int> nums = {10, 5, 20, 8, 20};

    cout << "Second largest element: "
         << secondLargest(nums) << endl;

    return 0;
}