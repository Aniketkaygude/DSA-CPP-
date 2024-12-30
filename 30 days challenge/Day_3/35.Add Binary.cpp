class Solution {
public:
    string addBinary(string a, string b) {
      
      int i = a.size()-1;
      int j=  b.size()-1;
      int carry=0;
       string ans="";
      while(i>=0 || j>=0 || carry>0){

        int num1 = i>=0?a[i]-'0':0;
        int num2 = j>=0?b[j]-'0':0;

        int total = num1+num2+carry;
        carry = total>1?1:0;
        ans.insert(ans.begin(),((total%2)== 1?'1':'0'));
         i--;
         j--;
      }
        return ans;

    }
};