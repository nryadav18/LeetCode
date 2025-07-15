/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
    let mp = new Map();
    let i = 0, j = 0;
    var maxLength = 0;
    while (j < s.length){
        if (!mp.has(s[j])) mp.set(s[j],1);
        else {
            while (i < j && mp.has(s[j])){
                mp.delete(s[i])
                i++;
            }
            mp.set(s[j],1);
        }
        maxLength = Math.max(maxLength,mp.size);
        j++;
    }
    maxLength = Math.max(maxLength,mp.size);
    return maxLength;
};