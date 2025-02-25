#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    void add_to_vector(vector<int> &A,int x){
        //Code here
        A.push_back(x);
    }
    void deleteElement(vector<int>& A, int element) {
        //Code here
        A.erase(A.begin()+element);
    }
    void reverse_vector(vector<int> &A){
    	//Code here
        vector<int>::reverse_iterator rlt=A.rbegin()
    }
    void size_of_vector(vector<int> &A){
         //Code here
         A.size()
    }
    void print_vector(vector<int> &A){
    	//Code here
        for(auto it =A.begin();it!=A.end();it++){
            cout<<*it<<" ";

        }
        
    //}
};
int main(){
    solution obj;
    int operations{0};
    cin>>operations;
    for()

}
    