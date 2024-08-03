#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"\tArray Average\t"<<endl;
    cout<<"Enter -1 to stop"<<endl;
    vector<int> nums;
    int n;
    while(true){
        cout<<"Enter the element: ";
        cin>>n;
        if(n==-1)
            break;
        nums.emplace_back(n);
    }
    if(nums.size()==0)
        cout<<"Empty array"<<endl;
    else{
        double avg= (double)(accumulate(nums.begin(), nums.end(),0))/(double)(nums.size());
        cout<<"The average of given array is: "<<avg<<endl;
    }
    return 0;
}
