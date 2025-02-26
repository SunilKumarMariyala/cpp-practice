#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={7,8,6,5,4,5,1};
    //iterator fron the first
    vector<int>::iterator i=v.begin();
    cout<<*i<<endl;//7
    cout<<*(i+1)<<endl;//8
    cout<<*(i+2)<<endl;//6

    cout<<endl;
    //iterator from th end
    vector<int>::iterator i1=v.end();
    cout<<*i1<<endl;//0 or garbage value 
    cout<<*(i1-1)<<endl;//1
    cout<<*(i1-2)<<endl;//5
    
    cout<<endl;
    //reverse iterator
    vector<int>::reverse_iterator i2=v.rend();
    cout<<*i2<<endl;//0 or garbage value 
    cout<<*(i2-1)<<endl;//7
    cout<<*(i2-2)<<endl;//8

    cout<<endl;
    //reverse iterator
    vector<int>::reverse_iterator i3=v.rbegin();
    cout<<*i3<<endl;//1
    cout<<*(i3+1)<<endl;//5
    cout<<*(i3+2)<<endl;//4
    
    cout<<endl;
    //printing a vector with iterator
    for(vector<int>::iterator i4=v.begin();i4!=v.end();i4++){
        cout<<*i4<<" ";//7 8 6 5 4 5 1 
    }
    cout<<endl;

    cout<<endl;
    for(auto i5=v.rbegin();i5!=v.rend();i5++){
        cout<<*i5<<" ";//1 5 4 5 6 8 7
    }
    cout<<endl;

    cout<<endl;
    for(int k:v){
        cout<<k<<" ";//7 8 6 5 4 5 1 
    }
    cout<<endl;

    cout<<endl;
    for(auto k:v){
        cout<<k<<" ";//7 8 6 5 4 5 1 
    }
    cout<<endl;

}