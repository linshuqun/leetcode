class Solution {
public:
    int count = 0;
    bool visited[16];
    void cal(int pos, int N) {
        if (pos > N)
            count++;
        for (int i = 1; i <= N; i++) {
            if (!visited[i] && (pos % i == 0 || i % pos == 0)) {
                visited[i] = true;
                cal(pos+1, N);
                visited[i] = false;
            }
        }
    }
    int countArrangement(int N) {
        for (int i = 0; i < 16; i++)
            visited[i] = false;
        int pos = 1;
        cal(pos, N);
        return count;
    }
};
