class Solution {
public:
    int gcd(int len1, int len2){ // Euclid's Algo
        if (len1 == 0){
            return len2;
        }

        return gcd(len2 % len1, len1);
    }

    string gcdOfStrings(string str1, string str2) {

        // If they don't match up, there's no point in checking for a GCD, there won't be one
        if (str1 + str2 != str2 + str1){
            return "";
        }

        int len1 = str1.length();
        int len2 = str2.length();

        // substr grabs the substring of str1 starting from index 0 to whatever the length GCD is
        return str1.substr(0, gcd(len1, len2));
    }
};