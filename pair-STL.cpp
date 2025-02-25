#include<bits/stdc++.h>
using namespace std;
int main (){
    pair<int,char>p1={1,'c'};
    cout<<p1.first<<" "<<p1.second<<endl;

    //store 3 or more elements using pairs
    pair<int,pair<int,int>>p2={2,{3,4}};
    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;

    //creating an array of pairs
    pair<int,int>arr[]={{4,8},{5,9},{8,3},{7,6}};
    cout<<arr[2].second<<endl;
}

