class Solution {
public:
    int findClosest(int x, int y, int z) {
        int time1 = abs(z - x);
        int time2 = abs(z - y);

        if(time1 == time2){
            return 0;
        }
        else if(time1 < time2){
            return 1;
        }
        else return 2;
    return -1;
    }
};