class Solution {
public:
int cnt=0;
        void merge(vector<int>& arr, int low, int mid, int high) {
        vector<int> temp;
        int left = low, right = mid + 1;

        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right])
                temp.push_back(arr[left++]);
            else
                temp.push_back(arr[right++]);
        }

        while (left <= mid)
            temp.push_back(arr[left++]);

        while (right <= high)
            temp.push_back(arr[right++]);

        for (int i = low; i <= high; i++)
            arr[i] = temp[i - low];
    }
    void countPairs(vector<int>&arr,int low, int mid,int high){
         int right = mid+1;
        for(int i =  low ; i <= mid ; i++){
            while (right <= high && (long long)arr[i] > 2LL * arr[right]) {
    right++;
}
                cnt = cnt + right-(mid+1);
            
        }
    }
    void mergeSort(vector<int>& arr, int low, int high) {
        if (low >= high)
            return;

        int mid = (low + high) / 2;

        mergeSort(arr, low, mid);

        mergeSort(arr, mid + 1, high);
        countPairs(arr,low,mid,high);
        merge(arr, low, mid, high);
    }


    int reversePairs(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return cnt;
    }
};