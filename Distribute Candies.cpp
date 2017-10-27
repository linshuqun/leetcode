class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        sort(candies.begin(), candies.end());
        int sum = 1;
        int size = candies.size();
        for (int i = 1; i < size; i++) {
            if (sum < size / 2) {
                if (candies[i] != candies[i-1])
                    sum += 1;
            }
        }
        return sum;
    }
};
