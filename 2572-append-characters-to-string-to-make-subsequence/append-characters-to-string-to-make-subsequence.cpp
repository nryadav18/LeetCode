class Solution {
public:
    int appendCharacters(string s, string t) {
        ios_base::sync_with_stdio(0); //Beat Boosters
        cin.tie(nullptr);
        int length = 0; //Length variable to find the total number of
        int n = s.length(); // Common characters in both the strings S and T
        int ind = 0; //Index to Iterate on string T
        for (int i=0;i<n;i++){
            if (s[i] == t[ind]){ //Whenever both Characters are equal in S and T
                length++; //Increment length by 1 
                ind++; //Increment index by one
            }
        }
        int result = t.length() - length; //Result would be obtained by 
        return result; //subtracting common characters in both the Strings S and T
    }
};