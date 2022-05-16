/*
two pointers 做交換
*/
void reverseString(char* s, int sSize){

    int left = 0;
    int right = sSize-1;
    char tmp;
    while(left < right){
        tmp = s[right];
        s[right] = s[left];
        s[left] = tmp;
        left++;
        right--;
    }
}