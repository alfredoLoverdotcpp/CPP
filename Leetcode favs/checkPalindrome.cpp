class Solution {
public:
    bool isPalindrome(int x) {
        // if(x<0)
        // { return false; }

        // long long temp = x;
        // long long revNum = 0;
        // while(x!=0)
        // {
        //     int d = x%10;
        //     x/=10;
        //     revNum =(revNum*10)+d;
        // }
        // if(revNum==temp)
        // { return true; }
        // else
        //    return false;
        if(x<0 || (x!=0 && x%10 ==0))
        { return false; }
        int revNum = 0;
        while (x>revNum)
        {
            revNum = revNum*10+x%10;
            x/=10;
        }
        return(x == revNum) || (x == revNum/10);
    }
};
