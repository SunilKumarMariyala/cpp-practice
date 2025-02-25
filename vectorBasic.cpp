#include<bits/stdc++.h>
using namespace std;
int main(){
    //declaration of vector
    vector<int> a={1,2,8,5,4,6,7};
    cout<<a[3]<<endl;

    //adding element at the end
    a.push_back(75);
    a.emplace_back(95);
    cout<<a[8]<<" "<<a[7]<<endl;//95 75

    //other type of declaration of vector
    vector<int>b(3,52);//repeatation of value initalize
    cout<<b[0]<<" "<<b[1]<<" "<<b[2]<<endl;//52 52 52

    vector<int> c(4);//just initalize space for vector,not value
    cout<<c[0]<<endl;//0

    vector<int>d(b);
    cout<<d[0]<<endl;//52

    //vector initalize with integer pairs
    vector<pair<int,int>> p1;
    p1.push_back({4,6});
    p1.emplace_back(8,5);
    cout<<p1[0].first<<" "<<p1[1].second<<endl;// 4 5
}