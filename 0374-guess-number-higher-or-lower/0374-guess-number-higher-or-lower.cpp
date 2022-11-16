/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int k=1;
        int low=1;
        int high=n;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(guess(mid)==-1){
                high=mid-1;
            }
            if(guess(mid)==1){
                low=mid+1;
            }
            if(guess(mid)==0){
                k=mid;break;
            }
        }
        return k;
    }
};