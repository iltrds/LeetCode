class Solution {
    public String mergeAlternately(String word1, String word2) {
        String result = "";

        int len1 = word1.length();
        int len2 = word2.length();

        int i = 0;
        while(i < len1 || i  < len2){
            if (i < len1){
                result = result + word1.charAt(i);
            }

            if (i < len2){
                result = result + word2.charAt(i);
            }
            i++;
        }

        return result;
    }
}