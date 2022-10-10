class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int zeros=0, ones=0;
        int iSandwiche=0;
        for(int student : students){
            if(student == 0)
                zeros++;
            else
                ones++;
        }
        
        //cout << "Zeros: " << zeros << " - ";
        //cout << "Ones: " << ones << "\n\n";
        
        while(zeros>0 || ones>0){
            if(sandwiches[iSandwiche] == 0){
                if(zeros == 0)
                    break;
                else
                    zeros--;    
            }
            else{
                if(ones == 0)
                    break;
                else
                    ones--;    
            }
            iSandwiche++;
            //cout << "Zeros: " << zeros << " - ";
            //cout << "Ones: " << ones << "\n";
        }
        return zeros+ones;
    }
};