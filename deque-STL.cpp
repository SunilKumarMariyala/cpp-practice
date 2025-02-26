#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(6);
    d.push_front(3);
    d.emplace_back(9);
    d.emplace_front(4);

    for(auto k :d){
        cout<<k<<" ";//4369
    }
    cout<<endl;
/*  d.pop_back();
    d.pop_front();

    for(auto k: d){
        cout<<k<<" ";//36
    }
    cout<<endl;
    cout<<d.back()<<endl;;//6
    cout<<d.front()<<endl;//3

    //ierating deque
*/  deque<int>::iterator it1=d.begin();
    cout<<*it1<<endl;//4
    cout<<*(it1+1)<<endl;//3
    cout<<*(it1+2)<<endl;//6
    cout<<*(it1+3)<<endl;//9
   // for(auto it=d.rbegin();it!=d.rend();it++){
   //     cout<<*it<<" ";
   // }

   deque<pair<int,int>>d1;
   d1.push_back({5,6});
   d1.push_front({1,6});
   cout<<d1[0].first<<endl;//1
   /*
for(auto k:d1){
    cout<<k<<" ";//error
}*/
d.erase(d.begin()+1);
d.insert(d.begin()+2,199);
for(auto k: d){
    cout<<k<<" ";//4 6 199 9
}cout<<endl;
cout<<d.back()+1<<endl;//10
d.clear();
cout<<d.empty()<<endl;//1

}