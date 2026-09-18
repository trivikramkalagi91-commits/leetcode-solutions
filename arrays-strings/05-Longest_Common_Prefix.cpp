class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string r="";
        int n=strs.size();
        if(n==0) return r;

        for(int i=0;i<strs[0].length();i++){
            for(int j=0;j<n;j++){

                if(i==strs[j].length()){
                    return r;
                }
                if(strs[j][i]!=strs[0][i]){
                    return r;
                }

            }
            r+=strs[0][i];
        }

        return r;

    }
};