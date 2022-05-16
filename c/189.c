#include <stdio.h>

void reverse(int* nums,int start,int end){
    int tmp;
    while(start < end){
        tmp = nums[start];
        nums[start] = nums[end];
        nums[end] = tmp;
        start++;
        end--;
    }
}
/*  
    if arr = [1,2,3,4],k = 2,ans = [3,4,1,2].
    利用swap來做反轉可使空間複雜度 = n，不需要額外空間。
    對前半部陣列做旋轉[2,1,3,4]
    對後半部陣列做旋轉[2,1,4,3]
    旋轉全部陣列[3,4,1,2]
*/
void rotate(int* nums, int numsSize, int k){
    if(nums == NULL || numsSize < 2) return;
    //對k取餘數是因為 k > numsSize， 旋轉和本身大小一樣次數等於回到原點。
    k = k % numsSize;
    //reverse first part of array
    reverse(nums,0,numsSize-k-1);
    //reverse second part of array
    reverse(nums,numsSize-k,numsSize-1);
    //reverse whole array 
    reverse(nums,0,numsSize-1);
}


int main(){
    int arr[] = {1,2};
    rotate(arr,2,3);
    for(int i=0;i<3;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}