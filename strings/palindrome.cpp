class Solution {
public:
    string reverseWords(string s) {
        int length = s.length();
        vector<string> words;

        string temp = "";

        for(int i=0;i<length;i++){
            if(s[i] != ' '){
                temp +=s[i];
            }
            else{
                if(!temp.empty()){
                    words.push_back(temp);
                    temp = "";
                }
            }
       }

       if(!temp.empty()){
    words.push_back(temp);
}

       string temp2 ="";
       for(int i=words.size()-1;i>=0;i--){
            temp2 += words[i];

            if(i!=0) temp2 += " ";

       }

       


return temp2;

        
    }
    
};