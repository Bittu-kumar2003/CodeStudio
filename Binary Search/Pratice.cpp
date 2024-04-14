int search(vector<int> &nums, int target) {
    // Write your code here. for(int i=0;i<nums.size();i++){
   int n = nums.size();

    int hi = n-1;

    int lo = 0;

    while(lo<=hi){

        int mid = (hi+lo)/2;

        if(nums[mid] == target) return mid;

        else if(nums[mid]>target) hi = mid - 1;

        else lo = mid + 1;

    }

    return -1;
}
