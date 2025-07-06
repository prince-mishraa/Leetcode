class Solution {
public:
    int findClosest(int x, int y, int z) {
        //TC : O(n)
        int time1 = abs(x - z);
        int time2 = abs(y - z);
        if(time1<time2){
            return 1;
        }
        else if(time1==time2) return 0;
        else return 2;
    }
};