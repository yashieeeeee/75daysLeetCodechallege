class Solution {
public:
    int reverse(int x)
     {
        int output=0;
        int d=0;
        while(x!=0)
        {
            d=x%10;
            if (output > INT_MAX / 10 || (output == INT_MAX / 10 && d > 7))
              return 0;

            if (output < INT_MIN / 10 || (output == INT_MIN / 10 && d < -8))
             return 0;
            output=(output*10)+d;
            x=x/10;
        }
        return output;

    }
};