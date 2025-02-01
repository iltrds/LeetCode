bool isSubsequence(char* s, char* t) {
    int sLength = strlen(s);
    int tLength = strlen(t);
    int sIndex = 0;

    // If s is an empty string, it is always a subsequence
    if (sLength == 0) {
        return true;
    }

    // Iterate through t to find the characters of s in order
    for (int i = 0; i < tLength; i++) {
        if (t[i] == s[sIndex]) {
            sIndex++;
            // If all characters of s are matched, return true
            if (sIndex == sLength) {
                return true;
            }
        }
    }

    // If we exit the loop without matching all characters of s, return false
    return false;
}