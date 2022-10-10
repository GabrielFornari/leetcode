class MyHashMap {
private:
    const static int size = 1e6 + 1;
    int hashTable[size];
    
public:
    MyHashMap() {
        for(int i=0; i<size; i++)
            hashTable[i] = -1;
    }
    
    void put(int key, int value) {
        hashTable[key%size] = value;
    }
    
    int get(int key) {
        return hashTable[key%size];
    }
    
    void remove(int key) {
        hashTable[key%size] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */