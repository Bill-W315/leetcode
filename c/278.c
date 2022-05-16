/*
    利用binary search
*/
int firstBadVersion(int n) {
    int left=1,right=n,mid;
    while(left<right){
        //計算相對位置
        mid =left + (right - left) / 2;
        if(isBadVersion(mid)){
            right = mid;
        }else{
            left = mid+1;
        }
    }
    return left;
}