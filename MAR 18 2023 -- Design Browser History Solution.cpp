class dll{
    public:
    string s;
    dll * prev;
    dll * next;
    dll(string x){
        s = x;
        prev = NULL;
        next = NULL;
    }
};
class BrowserHistory {
    dll * h;
public:
    BrowserHistory(string homepage) {
        h = new dll(homepage);
    }
    
    void visit(string url) {
        h->next = new dll(url);
        h->next->prev = h;
        h = h->next;
    }
    
    string back(int steps) {
        while(steps-- && h->prev){
            h = h->prev;
        }
        return h->s;
    }
    
    string forward(int steps) {
        while(steps-- && h->next){
            h = h->next;
        }
        return h->s;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
