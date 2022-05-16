import java.util.*;
class Solution {
    public boolean containsDuplicate(int[] nums) {
        Set arr = new HashSet();
        for(int number:nums){
            if(arr.contains(number)){
                return true;
            }
            arr.add(number);
        }
        return false;
    }
}