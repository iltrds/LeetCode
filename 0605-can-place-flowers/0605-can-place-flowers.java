class Solution {
    public boolean canPlaceFlowers(int[] flowerbed, int n) {
        if(n == 0) { // Case where they want to plant 0 flowers. Always true.
            return true;
        }

        for (int i = 0; i < flowerbed.length; i++){
            if (flowerbed[i] == 0 && (i == 0 || flowerbed[i-1] == 0) && (i == flowerbed.length-1 || flowerbed[i+1] == 0)){
                flowerbed[i] = 1; // Plant a flower!
                n -= 1;
                if (n == 0){
                    return true;
                }
            }
        }
        return false; // We iterated the whole list and there were still flowers unplanted
    }
}