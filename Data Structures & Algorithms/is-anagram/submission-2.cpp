//arrays solution 
// we have arrays solution, sorting and checking if same 
// or we can use hash map like with unordered map
// sorting is the optimal as its nlogn
class Solution {
public:
    bool isAnagram(string s, string t) {
        int size_s = s.size();
        int size_ts = t.size();
        int hash[26]={0};

        if(size_s==size_ts){
            for(int i=0;i<s.size();i++){
                int indexs = s[i]-'a';
                hash[indexs]++;
                int indext = t[i]-'a';
                hash[indext]--;



            }

            for(int j=0;j<26;j++){
                if(hash[j]!=0)
                {
                    return false;

                }
                
            }
            return true;

            
        }

        return 0;
    }
};


// to compare two strings 
// we have to
// the elements in the s and t have to be same 
// idea is to use hashing
// we declare the hash arr of size 
// brute force solution is that we iterate through s and then we incrment the nummber of time 
// the chracter is present in the string s , then we decrement when we see the same element in 
// the string t , 
// since they are lowcase only 26 size array woould be sufficient 
// logic 



// solution logic 
// base condition is to check if sizes of s and t are same 
// hash of size 26 intitialise to 0 
// traverse through strings : what happens to s[i]and t[i]
// if we use only one loop 
// how to convert the alphabet to index 
// we see c , we go to 3rd index and inc one 
// s[i] - 'a' = 