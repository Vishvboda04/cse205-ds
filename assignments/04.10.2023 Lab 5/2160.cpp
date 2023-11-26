class Solution {
public:
    int minimumSum(int num) {
        string ans = to_string(num);
        sort(ans.begin(), ans.end());

        int n1 = (ans[0]-'0')*10 + ans[2]-'0';
        int n2 = (ans[1]-'0')*10 + ans[3]-'0';

        return n1+n2;
    }
};