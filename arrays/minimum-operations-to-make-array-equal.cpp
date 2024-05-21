class Solution {
public:
    int minOperations(int n) {

        int m = n/2;
        int a = 1 + (n&1);
        int op = m*(a+m-1);

        return op;
    }
};