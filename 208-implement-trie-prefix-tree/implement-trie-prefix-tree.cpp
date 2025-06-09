class TrieNode{
    private:
        bool ending;
        TrieNode* nodes[26];
    public:
        TrieNode(){
            for (int i=0;i<26;i++){
                nodes[i] = nullptr;
            }
            ending = false;
        }

        bool isCharExists(char ch){
            return nodes[ch-'a'] != nullptr;
        }

        void appendNewChar(char ch, TrieNode* node){
            nodes[ch-'a'] = node;
        }

        TrieNode* nextAddress(char ch){
            return nodes[ch-'a'];
        }

        void wordEnding(){
            ending = true;
        }

        bool getWordEnding(){
            return ending;
        }
};

class Trie {
public:
    TrieNode* root;
    Trie() {
        root = new TrieNode();
    }

    void insert(string word) {
        TrieNode* myNode = root;
        for (int i = 0; i < word.length(); i++){
            if (!myNode->isCharExists(word[i])){
                myNode->appendNewChar(word[i],new TrieNode());
            }
            myNode = myNode->nextAddress(word[i]);
        }
        myNode->wordEnding();
    }
    
    bool search(string word) {
        TrieNode* myNode = root;
        for (int i = 0; i < word.length(); i++){
            if (!myNode->isCharExists(word[i])){
                return false;
            }
            myNode = myNode->nextAddress(word[i]);
        }
        return myNode->getWordEnding();
    }
    
    bool startsWith(string prefix) {
        TrieNode* myNode = root;
        for (int i = 0; i < prefix.length(); i++){
            if (!myNode->isCharExists(prefix[i])){
                return false;
            }
            myNode = myNode->nextAddress(prefix[i]);
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */