#include <iostream>
#include <vector>
using namespace std;

int largestElement(vector<int>& nums) {
    int largest = nums[0];

    for (int num : nums) {
        if (num > largest) {
            largest = num;
        }
    }

    return largest;
}

int main() {
    vector<int> nums = {12, 5, 29, 8, 17};

    cout << "Largest element: "
         << largestElement(nums) << endl;

    return 0;
}