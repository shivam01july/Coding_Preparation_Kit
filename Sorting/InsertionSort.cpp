vector<int> sortArray(vector<int>& nums) 
{
    int key;
    for(int i = 1; i < nums.size(); i++)
    {
        key = nums[i];
        for(int j = i-1; j >= 0 && nums[j] > key; j--)
        {
            swap(nums[j], nums[j+1]);
        }   
    }
    return nums;
}