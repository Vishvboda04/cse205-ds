2073. Time Needed to Buy Tickets

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int c=0;
        while(tickets[k] != 0)
        {
            for(int i=0; i<tickets.size(); i++)
            {
                if(tickets[k] == 0){
                return c;
                }

                if(tickets[i]!=0)
                {
                    tickets[i] = tickets[i]-1;
                    c++;
                }
                    
            }
        }
        return c;
    }
};