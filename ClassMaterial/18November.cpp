#include<iostream>
using namespace std;
class channel{
    int subscribers;
    public:
    channel(int s){
        subscribers = s;
    }
    void operator ++(){
        subscribers ++;
    }
    void display(){
        cout<<subscribers;
    }
};

void sq(int s){
    cout<<s*s<<"\n";
}

int main(){
    channel gs(1000);
    ++gs;
    gs.display();
    return 0;
}