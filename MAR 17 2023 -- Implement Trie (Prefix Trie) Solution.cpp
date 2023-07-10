class Trie {
    private:
        Trie * head[26];
        bool end;
    public:

    Trie() {
        for(int i = 0; i<26; i++){
            head[i] = NULL;
        }
        end = false;
    }
    
    void insert(string word) {
        Trie * h = this;
        for(int i = 0 ; i<word.size(); i++){
            int x = word[i]-'a';
            if(h->head[x] == NULL){
                h->head[x] = new Trie();
            }
            h = h->head[x];
        }
        h->end = true;
    }
    
    bool search(string word) {
        Trie * h = this;
        for(int i = 0; i<word.size(); i++){
            int x = word[i] - 'a';
            if(!(h->head[x])) return false;
            h = h->head[x];
        }
        return h->end;
    }

    
    bool startsWith(string word) {
        Trie * h = this;
        for(int i = 0; i<word.size(); i++){
            int x = word[i] - 'a';
            if(!(h->head[x])) return false;
            h = h->head[x];
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
