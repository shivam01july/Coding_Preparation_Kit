vector<int> sortArray(vector<int>& nums) 
{
    int min_idx;
    for(int i = 0; i < nums.size()-1; i++)
    {
        min_idx = i;
        for(int j = i+1; j < nums.size(); j++)
        {
            if(nums[j] < nums[min_idx])
                min_idx = j; 
        }

        if(min_idx != i)
            swap(nums[min_idx], nums[i]);
    }
    return nums;
} 