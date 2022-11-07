#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector <int> result;
        for(int i=left; i<=right; i++){
            int value = i;
            while(value > 0){
                int rem = value%10;
                if(rem==0 || i%rem != 0){
                    break;
                }
                value /= 10;
            }
            if(value == 0){
                result.push_back(i);
            }
        }
        return result;
    }
};

int main()
{
    
    return 0;
}