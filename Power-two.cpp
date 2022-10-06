#include<bits/stdc++.h>

class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i=0;
        bool ans=false;
        while(pow(2,i)<=n){
            if(pow(2,i)==n){
                ans = true;
            }
            i++;
        }
        if(ans==true){
            return true;
        }
        else {
            return false;
        }
    }
};

int main(){

}