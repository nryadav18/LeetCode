/**
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function(strs) {
    let mp = new Map();
    for (let word of strs){
        let sorted = word.split('').sort().join('');
        if (!mp.has(sorted)){
            mp.set(sorted,[])
        }
        mp.get(sorted).push(word);
    }
    return Array.from(mp.values());
};