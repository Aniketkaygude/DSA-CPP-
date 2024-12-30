class Solution {
public:

void helper(int open , int close , string&path , vector<string>&ans){
    if(close == 0 && open == 0){
        ans.push_back(path);
        return;
    }

    if(open>0){
        path+="(";
        helper(open-1, close , path,ans);
        path.pop_back();
    }

    if(close>open){
        path+=")";
        helper(open,close-1,path,ans);
        path.pop_back();
    }
    
}

    vector<string> generateParenthesis(int n) {

        
    vector<string>ans;
    string path="";
     helper(n,n,path,ans);
    return ans;
        
        
    }
};