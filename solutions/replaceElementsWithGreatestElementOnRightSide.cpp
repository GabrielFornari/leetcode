class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int biggest, aux;
        biggest = arr[arr.size()-1];
        for(int i=arr.size()-2; i>=0; i--){
            aux = arr[i];
            arr[i] = biggest;
            if(biggest < aux)
                biggest = aux;
        }
        arr[arr.size()-1] = -1;
        return arr;
    }
};