// 682. Baseball Game

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        int ans = 0;
        for(int i=0; i<operations.size();i++)
        {
            if(operations[i] == "+")
            {
                int temp = s.top();
                s.pop();
                int y = s.top() + temp;
                s.push(temp);
                s.push(y);
                ans = ans + s.top();
            }
            else if(operations[i] == "C")
            {
                ans = ans - s.top();
                s.pop();
            }
            else if(operations[i] == "D")
            {
                int b = s.top()*2;
                s.push(b);
                ans = ans + s.top();
            }
            else
            {
                s.push(stoi(operations[i]));
                ans = ans + s.top();
            }
        }
        return ans;
    }
};