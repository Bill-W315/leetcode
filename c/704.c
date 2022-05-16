int search(int* nums, int numsSize, int target){
    int left = 0, right = numsSize-1,mid;
    int result = -1;
    while(left <= right){
        mid = (left+right)/2;
        if(nums[mid] == target) return mid;
        if(nums[mid] > target){
            right = mid - 1;
        }else{
            left = mid + 1;
        }
    }
    return result;
}