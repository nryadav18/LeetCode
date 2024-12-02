class Solution {
public:
    vector<string>convertIntoWords(string raj){
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        string tempo;
        vector<string>words;
        for (int i=0;i<raj.length();i++){
            if ((raj[i]==' ' or i==raj.length()-1) and tempo != ""){
                if (i == raj.length()-1) tempo+=raj[i];
                words.push_back(tempo);
                tempo = "";
            }
            else{
                tempo += raj[i];
            }
        }
        return words;
    }
    int isPrefixOfWord(string sentence, string searchWord) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        vector<string>words = convertIntoWords(sentence);
        for (int i=0;i<words.size();i++){
            if (words[i].find(searchWord) == 0){
                return i+1;
            }
        }
        return -1;
    }
};