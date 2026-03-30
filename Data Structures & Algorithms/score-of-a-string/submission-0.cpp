class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0;
        for(int i=0;i<s.length()-1;i++){
            int diff = s[i]-s[i+1];
            if(diff<0){
                diff = -1*diff;
            }
            else{
                diff = diff;
            }


            sum = sum + diff;


        }
        return sum;
    }
};


// so input a string and then store them in an array
// then abs diff of the next indexes are supposed to be summed
// but first when a string is given we have to store it in the array , like char 
// then we can traverse through array and for storing we need on and for the summing is o(n) , 
// can do both in same loop , so i can just say o(n) , 