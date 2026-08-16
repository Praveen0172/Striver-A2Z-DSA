#include<iostream>
#include<vector>
#include<list>
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

void studylist(){
    list<int> l;
    l.push_back(4);
    l.emplace_back(8);

    l.push_front(5);
    l.emplace_front(45);//this is less costlier than insert function
    //other operations like erase inseri begin end will be same as vectors
    for(auto c:l){
        cout<<c<<" ";
    }
    cout<<endl;
}

void studydeque(){
    deque<int> d;
    d.push_back(7);
    d.emplace_back(6);

    d.push_front(4);
    d.emplace_front(10);
    for(auto c:d){
        cout<<c<<" ";
    }
    cout<<endl;

    d.pop_back();
    d.pop_front();
    for(auto c:d){
        cout<<c<<" ";
    }
    cout<<endl;

    cout<<d.back()<<endl;
    cout<<d.front()<<endl;
    //remaining all operations are same as vectors
}

void studystack(){
    stack<int> s;       //LIFO -> Last In Fist Out
    s.push(4);
    s.push(5);           //there are mostly 3 generic functions here i.e; push,pop,top
    s.push(9);
    s.push(45);
    s.emplace(10);      //understand it like a box 

    cout<<s.top()<<endl;

    s.pop();//will pop out the element that went in last in stack

    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;

    stack<int> s1,s2;
    s1.swap(s2);//will swap both stacks
}

void studyqueue(){
    queue<int> q;
    q.push(4);
    q.push(5);
    q.emplace(10);

    q.back() +=35;//q.back() will point to the element which came last here it is 10

    cout<<q.back()<<endl;

    q.pop();//will remove the first element 4 in this case
    cout<<q.front()<<endl;
    //size,swap,empty same as stack
}

void studypriorityqueue(){
    //max heap
    priority_queue<int> p;//will keep largest element on top and give priority to larger element
    p.push(3);
    p.push(9);         //time complexity for push and pop is logn and for top is O(1)
    p.push(10);
    p.emplace(45);

    cout<<p.top()<<endl;

    p.pop();//pops out the largest(top) element
    cout<<p.top()<<endl;

    //minimum heap(will keep smallest element on top and will give priority to smaller element)
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(10);
    pq.push(2);
    pq.push(9);
    pq.emplace(45);

    cout<<pq.top()<<endl;//will return the smallest element 
}
int main(){
    studypairs();
    studyvectors();
    studylist();
    studydeque();
    studystack();
    studyqueue();
    studypriorityqueue();

    return 0;
}
