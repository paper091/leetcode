class Solution {
public:
    void mapIt(int& result, int& prevVal, int currVal){
        if(currVal < prevVal){ result-=currVal; }
        else{ result+=currVal; }
        prevVal = currVal;
    }
    int romanToInt(string s) {
        int result = 0;
        int prev = 0;
        for(int i = s.size()-1; i >= 0; i--){
            switch(s[i]){
                case 'I':   mapIt(result, prev, 1);
                            break;
                case 'V':   mapIt(result, prev, 5);
                            break;
                case 'X':   mapIt(result, prev, 10);
                            break;
                case 'L':   mapIt(result, prev, 50);
                            break;
                case 'C':   mapIt(result, prev, 100);
                            break;
                case 'D':   mapIt(result, prev, 500);
                            break;
                case 'M':   mapIt(result, prev, 1000);
                            break;
            }
        }
        return result;
    }
};