class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        int special = n * 0.25;
        for (int i = 0; i < n; i++) {
            int index = i + 1;
            while (index < n && arr[index] == arr[i]) {
                index++;
            }
            if (index - i > special) {
                return arr[i];
            }
            i = index - 1;
        }
        return -1;
    }
};
