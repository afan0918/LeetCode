class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry=0;
        int index1=num1.size()-1,index2=num2.size()-1;
        int tmp1,tmp2,sum;
        string res="";
        
        while(index1>-1||index2>-1||carry){
            tmp1=index1>=0?num1[index1--]-'0':0;
            tmp2=index2>=0?num2[index2--]-'0':0;
            sum=tmp1+tmp2+carry;
            carry=sum/10;
            res+=sum%10+'0';
        }
        
        reverse(res.begin(),res.end());
        return res;
    }
};