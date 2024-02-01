class Solution {
private:
    void unStoppable(int close,int open,string s,int n,vector<string>&vos){
        if (close + open >= n*2){
            vos.push_back(s);
            return;
        }
        if (close > open){
            return;
        }
        if (open == n){
            unStoppable(close+1,open,s+')',n,vos);
        }
        else{
            unStoppable(close,open+1,s+'(',n,vos);
            unStoppable(close+1,open,s+')',n,vos);
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string>vos;
        unStoppable(0,1,"(",n,vos);
        return vos;
    }
};