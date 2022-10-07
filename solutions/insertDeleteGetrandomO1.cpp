class RandomizedSet {
private:
    unordered_set<int> hashSet;
    
public:
    RandomizedSet() {
    }
    
    bool insert(int val) {
        if(hashSet.count(val))
            return false;
        
        hashSet.insert(val);
        return true;
    }
    
    bool remove(int val) {
        if(hashSet.count(val)){
            hashSet.erase(val);
            return true;
        }
        return false;
    }
    
    int getRandom() {
        int idx = rand()%hashSet.size();
        
        return *next(hashSet.begin(), idx);
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */