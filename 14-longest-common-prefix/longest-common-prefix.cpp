class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        int n = strs.size();
        if (n == 1){
            return strs[0]; //BaseCase 
        }
        string assumedPrefix = strs[0]; 
        //A String -> AssumedPrefix which was intially
        //            set to 0th Index of given Array of Strings
        for (int i=1;i<n;i++){
            string temporaryPrefix = ""; //let TemporaryPrefix which is Empty;
            if (strs[i] == ""){ //It indicates that there is NO Prefix in the Array;
                return ""; //Whenever we encounter Empty String return it,
            }
            for (int j=0;j<strs[i].length();j++){
                if (assumedPrefix[j] != strs[i][j]){ 
                    break; //Common Prefix got ended up, So Break down;
                }
                else{
                    temporaryPrefix += strs[i][j]; //Add each character to get TempPrefix
                }
            }
            assumedPrefix = temporaryPrefix;//Update the AssumedPrefix for every Iteration
        }
        return assumedPrefix; //Return the Assumed Prefix which is our Actual Prefix
    }
};