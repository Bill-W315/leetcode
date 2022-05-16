/*
two pointers
利用兩個指標，分別從陣列頭和尾往中間移動，若相加結果大於target則右邊指標向左移動，反之亦然，因陣列已按照大小排列
[2,7,11,15] target = 9, low = 2,high =15,sum = 17 > 9. pointer high move left.
[1,3,5,7] target = 10, low = 1,high = 7 , sum = 8 < 10. pointer low move right.
*/
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    int low=0, high=numbersSize-1, sum=numbers[low]+numbers[high];
    int* ans = (int*)calloc(2,sizeof(int));
    //要和回傳大小相同
    *returnSize = 2;
    ans[0] = low+1;
    ans[1] = high+1;

    while(sum!=target){
        if(sum > target)
            high--;
        else
            low++;
        sum = numbers[low]+numbers[high];
        ans[0] = low+1;
        ans[1] = high+1;
    }
    return ans;
}