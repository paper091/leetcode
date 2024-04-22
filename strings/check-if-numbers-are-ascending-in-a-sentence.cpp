class Solution {
public:
    bool areNumbersAscending(string s){

        regex r("[^0-9\\s]");
        s = regex_replace(s, r, "");
        regex rp("\\s+");
        s = regex_replace(s, rp, " ");
        
        cout << s;

        int curr;
        int prev;
        string token;
        curr = prev = INT_MIN;
        stringstream x(s);
        while(getline(x, token, ' ')){
            cout << token << " ";
            curr = stoi(token);
            if(prev >= curr){
                return false;
            }
            prev = curr;
        }
        return true;
    }
};