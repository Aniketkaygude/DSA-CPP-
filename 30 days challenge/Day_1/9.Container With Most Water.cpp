class Solution {
public:
    int maxArea(vector<int>& height) {
              
         int ans=0;

         int s=0;
         int e =height.size()-1;

         while(s<e){

             int h= min(height[s],height[e]);
             int w = e-s;
             int area = h*w;

             ans=max(ans,area);

             if(height[s]<height[e]){
                s++;
             } 
             else {
                e--;
             }
             

         }
         return ans;

    }
};