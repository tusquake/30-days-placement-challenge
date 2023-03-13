class Solution {
public:
    int findKthLargest(vector<int>& arr, int k) {
    priority_queue<int>pq;
    int n=arr.size();
    for(int i=0;i<n;i++) pq.push(arr[i]);
    while(k>1){
        pq.pop();
        k--;
    }
    return pq.top();
    }
};
