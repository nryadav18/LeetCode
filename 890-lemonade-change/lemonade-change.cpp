class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0, twenty = 0;
        for (auto it : bills){
            it == 5 ? five++ : (it == 10 ? ten++ : twenty++);
            if (it == 10) {
                if (five == 0) return false;
                else five--;
            }
            else if (it == 20){
                if (ten > 0 and five > 0) ten--, five--;
                else if (five > 2) five-=3;
                else return false;
            }
        }
        return true;
    }
};