class Solution {
public:
    string simplifyPath(string path) {

        string ans="";
        int i=0;
        int n=path.size();
        while(i<n){

            int start=i;
            int end = i+1;

            while(end<n && path[end]!='/'){
                end++;
            } 
           i =end;

            string sub =path.substr(start,end-start);
           
            if(sub =="/." || sub == "/" ){
                continue;
            }

            if(sub=="/.."){

                while(ans.size()>0 && ans[ans.size()-1]!='/'){
                    ans.pop_back();
                }
                 
                 if(ans.size()>0){
                ans.pop_back();
                 }
                 
            } 
            else{
                ans+=sub;
            }    
        }

        return ans.size() == 0?"/":ans;
        
    }
};