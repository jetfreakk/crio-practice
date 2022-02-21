
//Using set to maintain unique representations and returning the size
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>morse ={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        string str="";
        set<string>ans;

        
        for(int i=0; i<words.size(); i++){
            for(int j=0; j<words[i].length(); j++){
                //to get the morse code answer
                str+=morse[words[i][j]-'a'];
            }
            ans.insert(str);
            str.clear();
        }
        
        return ans.size();
    }
};