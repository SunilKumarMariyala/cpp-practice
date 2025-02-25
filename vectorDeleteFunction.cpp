#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={7,9,8,5,2,2,4,6};
    v.erase(v.begin()+3);
    for(vector<int>::iterator i4=v.begin();i4!=v.end();i4++){
        cout<<*i4<<" ";//7 9 8 2 2 4 6
    }
    cout<<endl;

    v.erase(v.begin()+1,v.begin()+3);
    for(vector<int>::iterator i=v.begin();i!=v.end();i++){
        cout<<*i<<" ";//7 2 2 4 6
    }
    cout<<endl;

    v.erase(v.end()-2);
    for(vector<int>::iterator i1=v.begin();i1!=v.end();i1++){
        cout<<*i1<<" ";//7 2 2 6
    }
    cout<<endl;

    v.pop_back();
    for(vector<int>::iterator i1=v.begin();i1!=v.end();i1++){
        cout<<*i1<<" ";//7 2 2 
    }
    cout<<endl;

    v.clear();
    for(vector<int>::iterator i1=v.begin();i1!=v.end();i1++){
        cout<<*i1<<" ";//space only printed because empty vector
    }
    cout<<endl;

    cout<<v.empty()<<endl;//print 1 if v is empty
}