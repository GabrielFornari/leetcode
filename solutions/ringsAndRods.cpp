class Solution {
public:
    int countPoints(string rings) {
        vector<int> rods(10, 1);
        int rod;
        int total=0;

        for(int i=0; i<rings.size(); i+=2){
            rod = rings[i+1]-'0';
            cout << rod << " - ";
            if(rings[i] == 'R' && rods[rod]%2 != 0)
                rods[rod] *= 2;
            if(rings[i] == 'G' && rods[rod]%3 != 0)
                rods[rod] *= 3;
            if(rings[i] == 'B' && rods[rod]%5 != 0)
                rods[rod] *= 5;
        }
        cout << " \n ";
        for(int i=0; i<10; i++)
            if(rods[i] == 30)
                total++;
        
        for(int i=0; i<10; i++)
            cout << rods[i] << " | ";
        cout << "\n\n";
        
        return total;
    }
};