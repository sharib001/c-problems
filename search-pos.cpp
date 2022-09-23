#include<bits/stdc++.h>
using namespace std;

int search_pos(vector <int> arr , int target){
    int index;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i]>=target)
        {
            index = i;
            break;
        }
        else {
            index = arr.size();
        }
    }
    return index;
}

int main()
{
    vector <int> arr={1,3,5,6};
    int target;
    cin>>target;
    cout<<search_pos(arr, target);
    return 0;
}