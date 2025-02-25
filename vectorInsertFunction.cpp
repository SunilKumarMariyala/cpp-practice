#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={7,5,6,1,5,8,5,3};
    v.insert(v.begin()+3,2,4);
    for(vector<int>::iterator i1=v.begin();i1!=v.end();i1++){
        cout<<*i1<<" ";//7 5 6 4 4 1 5 8 5 3 
    }
    cout<<endl;

    vector<int>v1={1,3,6};
    v.insert(v.begin(),v1.begin(),v1.end());
    for(vector<int>::iterator i1=v.begin();i1!=v.end();i1++){
        cout<<*i1<<" ";//1 3 6 7 5 6 4 4 1 5 8 5 3
    }
    cout<<endl;

    cout<<v.size()<<endl;;


    for(vector<int>::iterator i1=v1.begin();i1!=v1.end();i1++){
        cout<<*i1<<" ";//1 3 6
    }
    cout<<endl;

    v.swap(v1);
    for(vector<int>::iterator i1=v.begin();i1!=v.end();i1++){
        cout<<*i1<<" ";//1 3 6 
    }
    cout<<endl;

    for(vector<int>::iterator i1=v1.begin();i1!=v1.end();i1++){
        cout<<*i1<<" ";//1 3 6 7 5 6 4 4 1 5 8 5 3 
    }
    cout<<endl;
}