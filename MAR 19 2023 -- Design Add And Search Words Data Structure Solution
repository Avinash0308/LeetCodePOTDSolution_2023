class Trie{
    public:
        Trie * head[26];
        bool end;
        Trie(){
            for(int i = 0 ; i <26; i++){
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
                char c = word[i];
                if(c == '.'){
                    for(int j = 0; j<26; j++){
                        if(h->head[j] != NULL && h->head[j]->search(word.substr(i+1))) return true;
                    }
                    return false;
                }

                if(!(h->head[c-'a'])) return false;
                h = h->head[c-'a'];
            }
            return h->end;
        }
};
class WordDictionary {
public:
    Trie * h;
    WordDictionary() {
        h = new Trie();
    }
    
    void addWord(string word) {
        h->insert(word);
    }
    
    bool search(string word) {
        return h->search(word);
        
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
