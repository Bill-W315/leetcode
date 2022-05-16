/*
    利用兩個pointer追蹤最後一個出現的非0數字，再將其之後的所有數字改成0
*/
void moveZeroes(int* nums, int numsSize){ 
    int NonZero=0,index=0;
    while(index < numsSize){
        if(nums[index]!=0){
            nums[NonZero] = nums[index];
            NonZero++;
        }
        index++;
    }
    while(NonZero<numsSize){
        nums[NonZero] = 0;
        NonZero++;
    }
}