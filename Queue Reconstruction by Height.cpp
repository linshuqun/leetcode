class Solution {
public:
    static bool compare(pair<int, int> a, pair<int, int> b) {
        return (a.first == b.first ? a.second < b.second : a.first > b.first);
    }
    
    vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {
        vector<pair<int, int>> result;
        sort(people.begin(), people.end(), compare);
        for (int i = 0; i < people.size(); i++) {
            result.insert(result.begin() + people[i].second, people[i]);
        }
        return result;
    }
};
