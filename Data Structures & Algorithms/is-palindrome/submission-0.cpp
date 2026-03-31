class Solution {
public:
    bool isPalindrome(string s) {
        string s_clean="";
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
            s_clean+=tolower(s[i]);
            }

        }
        string s_rev = "";

        for(int i=s_clean.length()-1;i>=0;i--){
            s_rev+=s_clean[i];
        }

        if(s_clean==s_rev){
            return true;
            }
    return false;
    }
};


//we have to return if its a palindrome or not 
// case -insensitive and ignores non-alphanumeric
// s= "was it a car or a cat I saw?"
// return True
//why-> avoid ? as its a non alphanumeric
// the idea is to read from last and store inanother string and see if we have both strings same 