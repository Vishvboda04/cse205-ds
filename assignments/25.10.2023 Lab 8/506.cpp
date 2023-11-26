class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>> pq;

        for(int i=0; i<score.size(); i++)
        {
            pq.push(make_pair(score[i],i));
        }

        vector<string> result(score.size(),"");
        int count=1;

        while(!pq.empty())
        {
            if(count==1)
            {
                result[pq.top().second] = "Gold Medal";
                count++;
            }
            else if(count==2)
            {
                result[pq.top().second] = "Silver Medal";
                count++;
            }
            else if(count==3)
            {
                result[pq.top().second] = "Bronze Medal";
                count++;
            }
            else
            {
                result[pq.top().second] = to_string(count);
                count++;
            }
            pq.pop();
        }
        return result;

    }
};