class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> visit;

        while(visit.find(n) == visit.end()){
            visit.insert(n);
            n = getNextNumber(n);
            if(n == 1){
                return true;
            }
        }
        return false;
    }
private:
    int getNextNumber(int n){
        int happy = 0;
        while(n > 0){
            int ld = n%10;
            happy += ld * ld;
            n/=10;
        }
        return happy;
    }
};