class Solution {
public:
    string interpret(string command) {
        
        for(int i=0; i<command.size(); i++){
            if(command[i] == '(' && command[i+1] == ')'){
                command[i] = 'o';
                command.erase(i+1,1);
            }
            if(command[i] == '(' && command[i+1] != ')'){
                command.erase(i+3,1);
                command.erase(i,1);
            }
        }
        return command;
    }
};