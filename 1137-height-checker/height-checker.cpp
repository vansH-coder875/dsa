class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        vector<int> new_arr = heights;

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (new_arr[j] > new_arr[j + 1]) {
                    int temp = new_arr[j];
                    new_arr[j] = new_arr[j + 1];
                    new_arr[j + 1] = temp;
                }
            }
        }
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (heights[i] != new_arr[i]) {
                cnt++;
            }
        }

        return cnt;
    }
};