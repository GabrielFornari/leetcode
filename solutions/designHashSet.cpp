class MyHashSet {
private:
    const static int size = 1000001;
    bool hashTable[size] = {false};
    
public:
    MyHashSet() {
    }
    
    void add(int key) {
        hashTable[key%size] = true;
    }
    
    void remove(int key) {
        hashTable[key%size] = false;
    }
    
    bool contains(int key) {
        return hashTable[key%size];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */