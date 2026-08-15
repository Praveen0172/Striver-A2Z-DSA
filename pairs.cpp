#include<iostream>
using namespace std;

void studypair(){
    pair<int,char> p={2,'b'};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int,pair<int,float>> q={4,{3,8.9}};
    cout<<q.first<<" "<<q.second.first<<" "<<q.second.second<<endl;

    pair<int,int> array[]={{1,2},{3,4},{5,6},{7,8}};
    cout<<array[1].second<<" "<<array[3].first;
}

int main(){
    studypair();
}