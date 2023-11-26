class Solution {
private:
    void merge(vector<int> &nums, int s, int mid, int e){
        int n1 = mid-s+1;
        int n2 = e-mid;

        int a[n1];
        int b[n2];

        for(int i=0; i<n1; i++){
            a[i] = nums[s+i];
        }
        for(int i=0; i<n2; i++){
            b[i] = nums[mid+1+i];
        }

        int i=0;
        int j=0;
        int k=s;

        while(i<n1 && j<n2){
            if(a[i]<b[j]){
                nums[k] = a[i];
                k++;
                i++;
            }
            else{
                nums[k] = b[j];
                k++;
                j++;
            }
        }
        while(i<n1){
            nums[k] = a[i];
                k++;
                i++;
        }
        while(j<n2){
            nums[k] = b[j];
                k++;
                j++;
        }
    }

    void mergeSort(vector<int> &nums, int s, int e){
	if (s>=e){
		return;
	}
    
	int mid = (s+e)/2;
	mergeSort(nums, s, mid);
	mergeSort(nums, mid+1, e);

	merge(nums, s, mid, e);
    }

public:
    int buyChoco(vector<int>& prices, int money) {
        mergeSort(prices, 0, prices.size()-1);

        int n = prices[0] + prices[1];
        if(n <= money)
            return money-n;
        else
            return money;
    }
};