class Solution {
public:
    bool isAnagram(string s, string t) {

        int n1=s.length();
        int n2=t.length();

        if(n1!=n2){
            return false;
        }

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int count=0;

        for(int i=0;i<n1;i++){
            if(s[i]==t[i]){
                count++;
            }
        }

        if(count==n1){
            return true;
        }

        return false;

        

    }
};