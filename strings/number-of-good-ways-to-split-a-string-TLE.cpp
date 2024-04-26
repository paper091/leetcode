class Solution {
public:
    int distinctChar(string& str){
        sort(str.begin(), str.end());
        int counter = 1;
        for(int i = 1; i < str.size(); i++){
            if( str[i-1] != str[i] ){ counter++; }
        }
        return counter;
    }
    bool goodSplit(string& left, string& right){
        // cout << left << " " << right << endl;
        // cout << distinctChar(left) << " " << distinctChar(right) << endl;
        return( distinctChar(left) == distinctChar(right) );
    }
    int numSplits(string s) {

        string r = s;
        reverse(r.begin(), r.end());
        
        int l = s.size();
        
        int counter = 0;
        // for( int i = 0, j = l-1; i < j; i++, j-- ){
        int mid = l/2;
        for(int i = 0; i < mid; i++){
            string left = s.substr(0, i+1);
            string right = s.substr(i+1);
            if( goodSplit(left,right) ){ counter++; }

            string revLeft = r.substr(0, i+1);
            string revRight = r.substr(i+1);
            if( goodSplit(revRight, revLeft) ){ counter++; }
        } 
        // cout << endl << counter << endl;
        if(l%2==0){ 
            string l = s.substr(0, mid);
            string r = s.substr(mid);
            if( goodSplit(l, r) ){ counter--; } 
        }
        // cout << endl << counter << endl;
       return counter;
    }
};