#include<iostream>
#include<vector>
using namespace std;

void studypairs(){
    pair<int,char> p={2,'b'};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int,pair<int,float>> q={4,{3,8.9}};
    cout<<q.first<<" "<<q.second.first<<" "<<q.second.second<<endl;

    pair<int,int> array[]={{1,2},{3,4},{5,6},{7,8}};
    cout<<array[1].second<<" "<<array[3].first<<endl;
}

void studyvectors(){
    vector<int> a;
    a.push_back(3);
    a.emplace_back(4);
    cout<<a[0]<<" "<<a[1]<<endl;

    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(5,6);
    cout<<vec[0].first<<" "<<vec[0].second<<" "<<vec[1].first<<" "<<vec[1].second<<endl;

    vector<int> b(5,100);//{100,100,100,100,100}
    
    vector<int>c(5);//{0,0,0,0,0}(can be any garbage value instead of 0)
    c.push_back(1);
    c.emplace_back(2);//{0,0,0,0,0,1,2}(it's size has been incresed by 2)

    vector<int>c1(5,20);
    vector<int>c2(c1);//same as c1 but it's copy

    vector<int> v={20,10,15,6,7};
    vector<int>::iterator x=v.begin();//v[0] & here x stores addres of v[0] to print that we need to write like*(x)
    x++;
    cout<<*(x)<<endl;
    x=x+2;
    cout<<*(x)<<endl;

    vector<int>::iterator x1=v.end();//point to after last element(x-- will point to v[4] here)
    vector<int>::reverse_iterator x2=v.rend();//reverse end: position before v[0]; cannot be dereferenced
    vector<int>::reverse_iterator x3=v.rbegin();//point to v[4] here //remeber to write reverse_iterator for rbegin and rend

    cout<<v[0]<<" "<<v.at(0)<<endl;//both access v[0]
    cout<<v.back()<<endl;//prints last element (v[4] here)

    /*following here these 3 loops does exactly same 
    they are just shorter forms 
    and we can always use auto as a datatype in C++ if we don't know about datatype*/
    for(vector<int>::iterator x=v.begin();x!=v.end();x++){
        cout<<*(x)<<" ";
    }
    cout<<endl;

    for(auto x=v.begin();x!=v.end();x++){
        cout<<*(x)<<" ";
    }
    cout<<endl;

    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;

    //erasing elements from vector
    vector<int> v1={10,20,12,23};
    v1.erase(v1.begin()+1);
    for(vector<int>::iterator y=v1.begin();y!=v1.end();y++){
        cout<<*(y)<<" ";
    }
    cout<<endl;

    vector<int> v2={10,20,12,23,35};
    v2.erase(v2.begin()+2,v2.begin()+4);//[start,end)(will erase from v2[2] to v2[3])
    for(vector<int>::iterator y=v2.begin();y!=v2.end();y++){
        cout<<*(y)<<" ";
    }
    cout<<endl;

    //insert function
    vector<int>m(2,100);//{100,100}
    m.insert(m.begin(),300);//{300,100,100}
    m.insert(m.begin()+1,2,30);//{300,30,30,100,100}(pos,times,value)
    for(vector<int>::iterator y=m.begin();y!=m.end();y++){
        cout<<*(y)<<" ";
    }
    cout<<endl;

    vector<int>copy(2,50);
    m.insert(m.begin()+4,copy.begin(),copy.end());//[start,end)
    for(vector<int>::iterator y=m.begin();y!=m.end();y++){
        cout<<*(y)<<" ";
    }
    cout<<endl;

    cout<<m.size()<<endl;////tells size of vector

    m.pop_back();//erases last element from vector
    for(vector<int>::iterator y=m.begin();y!=m.end();y++){
        cout<<*(y)<<" ";
    }
    cout<<endl;

    vector<int> m1={1,2};
    vector<int> m2={3,4,5};
    m1.swap(m2);//this swaps m1 and m2
    for(vector<int>::iterator y=m1.begin();y!=m1.end();y++){
        cout<<*(y)<<" ";
    }
    cout<<endl;
    for(vector<int>::iterator y=m2.begin();y!=m2.end();y++){
        cout<<*(y)<<" ";
    }
    cout<<endl;
    
    m1.clear();//erases the entire vector regardless of size
    for(vector<int>::iterator y=m1.begin();y!=m1.end();y++){
        cout<<*(y)<<" ";
    }
    cout<<endl;

    cout<<m1.empty()<<endl;
    cout<<m2.empty()<<endl;//1 means true and 0 means false
}
int main(){
    studypairs();
    studyvectors();
}
