// rough code for // N^2 solution for subarray sum equals k problem
itn vecor<int>& nums, int k {
int n = nums.size();
int count=0
for(int i=0;i<n;i++){
    int sum=0;
    for(int j=i;j<=n-1;j++){

        sum+=nums[j];
        if(sum==k){
            count++;
        }

}
}

return count:

}