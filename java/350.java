/*
Time: nums1 + nums2 
Space: min(nums1,nums2)取決於哪個比較小

用HashTable把所有出現的元素和數量先存入map中，Interate 另外一個array若遇到重複元素(map中出現)
則取出值-1，並加入答案陣列中。
*/
class Solution {
    public int[] intersect(int[] nums1, int[] nums2){
        int k = 0;
        if(nums1.length < nums2.length){
            return intersect(nums2,nums1);
        }
        HashMap<Integer,Integer> map = new HashMap<>();
        for(int key:nums1){
            int value = map.getOrDefault(key,0);
            map.put(key,++value);
        }
        for(int number:nums2){
            int count = map.getOrDefault(number,0);
            if(count > 0){
                nums1[k++] = number;
                map.put(number,--count);
            }
        }
        return Arrays.copyOfRange(nums1,0,k);
    }
}
