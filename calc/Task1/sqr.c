#include "calc.h"

double sqrt1(int n)
{
    int start = 0, end = n;
    int mid;
    float ans;
 
    while (start <= end) {
        mid = (start + end) / 2;
        if (mid * mid == n) {
            ans = mid;
            break;
        }
        if (mid * mid < n) {
            ans=start;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
 
    float increment = 0.1;
    for (int i = 0; i < 5; i++) {
        while (ans * ans <= n) {
            ans += increment;
        }
 
        ans = ans - increment;
        increment = increment / 10;
    }
    return ans;
}

