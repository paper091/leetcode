class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {

        string ans = "";
        stringstream ss(sentence);
        string word;
        while (ss >> word) {
            string w = word;
            
            for(int i  = 0; i < dictionary.size(); i++){

                int j = 0, k = 0;
                bool flag = false;
                while(j<w.size() && k<dictionary[i].size()){

                    if(w[j] == dictionary[i][k]){
                        flag = true;
                        j++;
                    }
                    else{
                        flag = false;
                        break;
                    }

                    k++;
                }
                if(flag){
                    if(w.size()>dictionary[i].size())
                        w = dictionary[i];
                }

            }
            ans += w;
            ans += " ";
        }
        ans = ans.substr(0, ans.size()-1);
        return ans;
    }
};