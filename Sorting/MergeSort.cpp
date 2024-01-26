vector<int> sortArray(vector<int>& nums) 
{
    mergeSort(nums, 0, nums.size()-1);

    return nums;    
}

void mergeSort(vector<int>& arr, int left, int right)
{
    if(left < right)
    {
        int mid = (left + right) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);

        merge(arr, left, mid, right);
    }
}

void merge(vector<int>& arr, int left, int mid, int right)
{
    int leftArrSize = (mid - left) + 1;
    int rightArrSize = right - mid;

    // Create temp arrays
    int leftArr[leftArrSize];
    int rightArr[rightArrSize];

    // Copy data to temp arrays
    for(int i = 0; i < leftArrSize; i++)
        leftArr[i] = arr[left + i];
    for(int i = 0; i < rightArrSize; i++)
        rightArr[i] = arr[mid + 1 + i];

    int leftArrIdx = 0;
    int rightArrIdx = 0;
    int mergeArrIdx = left;

    // Merge the temp arrays back into array[left..right]
    while(leftArrIdx < leftArrSize && rightArrIdx < rightArrSize)
    {
        if(leftArr[leftArrIdx] < rightArr[rightArrIdx])
            arr[mergeArrIdx++] = leftArr[leftArrIdx++];
        else
            arr[mergeArrIdx++] = rightArr[rightArrIdx++];
    }

    // Copy the remaining elements of left, if there are any
    while(leftArrIdx < leftArrSize)
        arr[mergeArrIdx++] = leftArr[leftArrIdx++];

    // Copy the remaining elements of right, if there are any
    while(rightArrIdx < rightArrSize)
        arr[mergeArrIdx++] = rightArr[rightArrIdx++];
}