/*
    sorted array利用絕對值和two pointers，比較大小後將數字平方插入另外一個array的尾端，即可做到one pass O(n)。
*/
int* sortedSquares(int* nums, int numsSize, int* returnSize){
    int* arr = (int*)malloc(numsSize*sizeof(int)); 
    int left=0,right=numsSize-1;
    *returnSize = numsSize;
    for(int index = numsSize-1;index>=0;index--){
        if(abs(nums[left])>abs(nums[right])){
            arr[index] = nums[left]*nums[left];
            left++;
        }else{
            arr[index] = nums[right]*nums[right];
            right--;
        }
    }
    return arr;
}